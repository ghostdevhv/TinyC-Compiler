#include "ass6_13CS30015_translator.h"
#include "y.tab.h"
extern int yydebug;
extern char * yytext;

extern void yyerror(const char *);
extern int yylex();

map <string, int> uniqueLabels;
vector <string> strLabels;

stack <string> arg_stack;

void adjustOffset(symbol_table *st)
{
    int paramOffset = +16;
    int localOffset = 0;

    for(int i = 0 ; i < (int)st->entries.size() ; i++)
    {
        if(st->entries[i]->scope == "param")
        {
            st->entries[i]->offset = paramOffset;
            paramOffset +=8;
            // if(st->entries[i]->type->type_d == type_dec_CHAR)
            // {
            //     st->entries[i]->size = SIZE_OF_INT;
            //     paramOffset += st->entries[i]->size + 4;
            // }
            // else if(st->entries[i]->type->type_d == type_dec_INT)
            // {
            //     paramOffset += st->entries[i]->size + 4;
            // }
            // else
            // {
            //     paramOffset += st->entries[i]->size;
            // }
        }
        else if(st->entries[i]->scope == "local" || st->entries[i]->scope == "temp")
        {
            localOffset -= st->entries[i]->size;
            st->entries[i]->offset = localOffset;
        }
    }
    st->sizeLocal = ((abs(localOffset) + 15) / 16) * 16;
    // st->sizeParam = abs(paramOffset) - 8;
    st->sizeParam = abs(paramOffset) ;
}


// to be added in new file
vector <bool> markAllLabels()
{
    int labelCounter = 0;
    vector <bool> mark(quad_arr.vec.size(), false);

    for(int i = 0 ; i < (int)quad_arr.vec.size() ; i++)
    {
        opcode_declare op = quad_arr.vec[i].op;

        if( op == opcode_dec_LESS_THAN ||
            op == opcode_dec_GREATER_THAN ||
            op == opcode_dec_LESS_OR_EQUAL ||
            op == opcode_dec_GRTER_OR_EQUAL ||
            op == opcode_dec_EQUAL ||
            op == opcode_dec_NOT_EQUAL ||
            op == opcode_dec_GOTO
          )
        {
            int idx = atoi(quad_arr.vec[i].result.c_str());
            mark[idx] = true;
        }
    }

    for(int i = 0 ; i < (int)quad_arr.vec.size() ; i++)
    {
        if(mark[i])
        {
            quad_arr.vec[i].labelIdx = labelCounter++;
        }
    }
    return mark;
}

// Target translator.cxx From here till end
// to be added in new file
void genTargetCode()
{
    for(int i = 0 ; i < (int)glob_sym_table->entries.size(); i++)
    {
        if(glob_sym_table->entries[i]->nestedTable != NULL)
        {
            curr_sym_table = glob_sym_table->entries[i]->nestedTable;
            break;
        }
    }

    printf(".section\t.rodata\n");

    for(int i = 0 ; i < (int)strLabels.size() ; i++)
    {
        string label = ".LC" + i2s(i);
        printf("%s:\n", label.c_str());
        printf("\t.string\t%s\n",strLabels[i].c_str());
    }

    if(strLabels.size() > 0)
    {
        printf("\t.text\n");
    }

    vector <bool> mark = markAllLabels();

    for(int j = 0 ; j < (int)quad_arr.vec.size() ; j++)
    {
        if(quad_arr.vec[j].op == opcode_dec_FUNC_START)
        {
            symbol_entry *sy = glob_sym_table->lookUp(quad_arr.vec[j].result);
            curr_sym_table = sy->nestedTable;
            break;
        }
    }

    for(int i = 0 ; i < (int)quad_arr.vec.size() ; i++)
    {
        if(mark[i])
        {
            printf(".L%d:\n",quad_arr.vec[i].labelIdx);
        }
        quad_arr.vec[i].genTargetCode();

        if(quad_arr.vec[i].op == opcode_dec_FUNC_END)
        {
            for(int j = i+1 ; j < (int)quad_arr.vec.size() ; j++)
            {
                if(quad_arr.vec[j].op == opcode_dec_FUNC_START)
                {
                    symbol_entry *sy = glob_sym_table->lookUp(quad_arr.vec[j].result);
                    curr_sym_table = sy->nestedTable;
                    break;
                }
            }
        }
    }
}

// to be added in new file
void quad::genTargetCode()
{
    switch(op)
    {
        case(opcode_dec_FUNC_START):
        {
            symbol_entry *sy = glob_sym_table->lookUp(result);
            curr_sym_table = sy->nestedTable;
            printf("\n\t.globl\t%s\n",result.c_str());
            printf("\t.type\t%s, @function\n",result.c_str());
            printf("%s:\n",result.c_str());
            //printf(".LFB%d\n",func_count);
            //printf("\t.cfi_startproc\n");
            printf("\tpushq\t%%rbp\n");
           // printf("\t.cfi_def_cfa_offset 16\n");
            //printf("\t.cfi_offset 6, -16\n");
            printf("\tmovq\t%%rsp, %%rbp\n");
            //printf("\t.cfi_def_cfa_register 6\n");
            printf("\tsubq\t$%d, %%rsp\n",curr_sym_table->sizeLocal);
        }
        break;
        case(opcode_dec_FUNC_END):
        {
            printf("\tleave\n");
            //printf("\t.cfi_def_cfa 7, 8\n");
            printf("\tret\n");
            //printf("\t.cfi_endproc\n");
            //printf(".LFE%d\n",func_count++);
            printf("\t.size\t%s, .-%s\n",result.c_str(),result.c_str());
        }
        break;
        case(opcode_dec_RETURN):
        {
            printf("\tleave\n");
            printf("\tret\n");
        }
        break;
        case(opcode_dec_RETURN_VAL):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            if(res->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n",res->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",res->offset);
            }
            printf("\tleave\n");
            printf("\tret\n");
        }
        break;
        case(opcode_dec_GOTO):
        {
            int idx = atoi(result.c_str());
            printf("\tjmp\t\t.L%d\n",quad_arr.vec[idx].labelIdx);
        }
        break;
        case(opcode_dec_CALL):
        {
            symbol_entry * func = glob_sym_table->lookUp(arg1);
            symbol_entry * res = curr_sym_table->lookUp(result);
            printf("\tcall\t%s\n", arg1.c_str());
            int c=arg_stack.size();
            c*=8;
            while(!arg_stack.empty())
            {
                arg_stack.pop();
            }
            // printf("\taddq\t$%d, %%rsp\n",func->nestedTable->sizeParam);
            printf("\taddq\t$%d, %%rsp\n",c);
            if(res->type->type_d != type_dec_VOID)
            {
                if(res->type->type_d == type_dec_CHAR)
                {
                    printf("\tmovb\t%%al, %d(%%rbp)\n",res->offset);
                }
                else if(res->type->type_d == type_dec_ARR || res->type->type_d == type_dec_PTR)
                {
                    printf("\tleaq\t%%rax, %d(%%rbp)\n",res->offset);
                }
                else
                {
                    printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
                }
            }
        }
        break;
        case(opcode_dec_PARAM):
        {
            if(curr_sym_table->isPresent(result))
            {
                symbol_entry * res = curr_sym_table->lookUp(result);
                if(res->type->type_d == type_dec_CHAR)
                {
                    printf("\tmovzbl\t%d(%%rbp), %%rax\n",res->offset);
                    printf("\tmovq\t%%rax, %%rdi\n");
                    printf("\tpushq\t%%rax\n");
                }
                else if(res->type->type_d == type_dec_ARR)
                {
                    printf("\tleaq\t%d(%%rbp), %%rax\n",res->offset);
                    printf("\tmovq\t%%rax, %%rdi\n");
                    printf("\tpushq\t%%rax\n");
                }
                else
                {
                    printf("\tmovq\t%d(%%rbp), %%rax\n",res->offset);
                    printf("\tmovq\t%%rax, %%rdi\n");
                    printf("\tpushq\t%%rax\n");
                }
            }
            else
            {
                printf("\tmovq\t$%s, %%rdi\n",result.c_str());
                printf("\tpushq\t$%s\n",result.c_str());
            }

            arg_stack.push("args");
        }
        break;
        case(opcode_dec_LESS_THAN):
        {
            int idx = atoi(result.c_str());

            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                printf("\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                printf("\tjl\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n", op2->offset);
                printf("\tcmpq\t%%rax, %d(%%rbp)\n", op1->offset);
                printf("\tjl\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
        }
        break;
        case(opcode_dec_LESS_OR_EQUAL):
        {
            int idx = atoi(result.c_str());

            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                printf("\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                printf("\tjle\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n", op2->offset);
                printf("\tcmpq\t%%rax, %d(%%rbp)\n", op1->offset);
                printf("\tjle\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
        }
        break;
        case(opcode_dec_GREATER_THAN):
        {
            int idx = atoi(result.c_str());

            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                printf("\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                printf("\tjg\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n", op2->offset);
                printf("\tcmpq\t%%rax, %d(%%rbp)\n", op1->offset);
                printf("\tjg\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
        }
        break;
        case(opcode_dec_GRTER_OR_EQUAL):
        {
            int idx = atoi(result.c_str());

            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                printf("\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                printf("\tjge\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n", op2->offset);
                printf("\tcmpq\t%%rax, %d(%%rbp)\n", op1->offset);
                printf("\tjge\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
        }
        break;
        case(opcode_dec_EQUAL):
        {
            int idx = atoi(result.c_str());

            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                printf("\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                printf("\tje\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n", op2->offset);
                printf("\tcmpq\t%%rax, %d(%%rbp)\n", op1->offset);
                printf("\tje\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
        }
        break;
        case(opcode_dec_NOT_EQUAL):
        {
            int idx = atoi(result.c_str());

            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%eax\n", op2->offset);
                printf("\tcmpb\t%%al, %d(%%rbp)\n", op1->offset);
                printf("\tjne\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n", op2->offset);
                printf("\tcmpq\t%%rax, %d(%%rbp)\n", op1->offset);
                printf("\tjne\t\t.L%d\n", quad_arr.vec[idx].labelIdx);
            }
        }
        break;
        
        case(opcode_dec_INT2DBL):
        break;
        
        case(opcode_dec_DBL2INT):
        break;
        
        case(opcode_dec_BITWISE_COMPLEMENT):
        break;
        
        case(opcode_dec_LEFT_SHIFT):
        break;
        
        case(opcode_dec_RIGHT_SHIFT):
        break;
       
        case(opcode_dec_BITWISE_AND):
        break;
        
        case(opcode_dec_BITWISE_XOR):
        break;
        
        case(opcode_dec_BITWISE_OR):
        break;
        
        case(opcode_dec_INT2CHAR):
        break;
        
        case(opcode_dec_CHAR2INT):
        break;
        
        case(opcode_dec_IF_EXP):
        break;
        
        case(opcode_dec_IF_NOT_EXP):
        break;
        
        case(opcode_dec_L_VAL_AT):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",res->offset);
                printf("\tmovzbl\t%d(%%rbp), %%rdx\n",op1->offset);
                printf("\tmovb\t%%dl, (%%rax)\n");
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",res->offset);
                printf("\tmovq\t%d(%%rbp), %%rdx\n",op1->offset);
                printf("\tmovq\t%%rdx, (%%rax)\n");
            }
        }
        break;
        case(opcode_dec_R_VAL_AT):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            if(op1->type->type_d == type_dec_CHAR)
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\tmovzbl\t(%%rax), %%eax\n");
                printf("\tmovb\t%%al, %d(%%rbp)\n",res->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\tmovq\t(%%rax), %%rax\n");
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }
        }
        break;
        case(opcode_dec_L_INDEX):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
            printf("\tmovq\t%d(%%rbp), %%rdx\n",op2->offset);
            //printf("\tcltq\n");

            if(res->offset < 0)
            {
                printf("\tmovq\t%%rdx, %d(%%rbp, %%rax)\n",res->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rcx\n",res->offset);
                printf("\tmovq\t%%rdx, (%%rcx, %%rax)\n");
            }
        }
        break;
        case(opcode_dec_R_INDEX):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            printf("\tmovq\t%d(%%rbp), %%rax\n",op2->offset);
            //printf("\tcltq\n");

            if(op1->offset < 0)
            {
                printf("\tmovq\t%d(%%rbp, %%rax), %%rdx\n",op1->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rcx\n",op1->offset);
                printf("\tmovq\t(%%rcx, %%rax), %%rdx\n");
            }

            printf("\tmovq\t%%rdx, %d(%%rbp)\n",res->offset);
        }
        break;
        case(opcode_dec_ADDRESS):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);

            printf("\tleaq\t%d(%%rbp), %%rax\n",op1->offset);
            printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
        }
        break;
        case(opcode_dec_PLUS):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);

            if(curr_sym_table->isPresent(arg2))
            {
                symbol_entry * op2 = curr_sym_table->lookUp(arg2);

                if(op1->type->type_d == type_dec_ARR)
                {
                    printf("\tleaq\t%d(%%rbp), %%rax\n",op1->offset);
                    printf("\tmovq\t%d(%%rbp), %%rdx\n",op2->offset);
                    printf("\taddq\t%%rdx, %%rax\n");
                    printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
                }
                else
                {
                    if(res->type->type_d == type_dec_CHAR)
                    {
                        printf("\tmovzbl\t%d(%%rbp), %%rax\n",op1->offset);
                        printf("\tmovzbl\t%d(%%rbp), %%rdx\n",op2->offset);
                        printf("\taddq\t%%rdx, %%rax\n");
                        printf("\tmovb\t%%al, %d(%%rbp)\n",res->offset);
                    }
                    else
                    {
                        printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                        printf("\tmovq\t%d(%%rbp), %%rdx\n",op2->offset);
                        printf("\taddq\t%%rdx, %%rax\n");
                        printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
                    }
                }
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\taddq\t$%s, %%rax\n",arg2.c_str());
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }
        }
    
        break;
        case(opcode_dec_MINUS):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);

            if(curr_sym_table->isPresent(arg2))
            {
                symbol_entry * op2 = curr_sym_table->lookUp(arg2);

                printf("\tmovq\t%d(%%rbp), %%rax\n",op2->offset);
                printf("\tmovq\t%d(%%rbp), %%rdx\n",op1->offset);
                printf("\tsubq\t%%rax, %%rdx\n");
                printf("\tmovq\t%%rdx, %%rax\n");
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\tsubq\t$%s, %%rax\n",arg2.c_str());
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }                      
        }
        break;
        case(opcode_dec_MULT):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);


            if(curr_sym_table->isPresent(arg2))
            {
                symbol_entry * op2 = curr_sym_table->lookUp(arg2);
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\timulq\t%d(%%rbp), %%rax\n",op2->offset);
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\timulq\t$%s, %%rax\n",arg2.c_str());
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }
        }
        break;
        case(opcode_dec_DIVIDE):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
            printf("\tcqto\n");
            printf("\tidivq\t%d(%%rbp)\n",op2->offset);
            printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
        }
        break;
        case(opcode_dec_MODULO):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);
            symbol_entry * op2 = curr_sym_table->lookUp(arg2);

            printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
            printf("\tcqto\n");
            printf("\tidivq\t%d(%%rbp)\n",op2->offset);
            printf("\tmovq\t%%rdx, %d(%%rbp)\n",res->offset);

        }
        break;
        case(opcode_dec_UNARY_MINUS):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);
            symbol_entry * op1 = curr_sym_table->lookUp(arg1);

            if(res->type->type_d == type_dec_CHAR)
            {
                printf("\tmovzbl\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\tnegq\t%%rax\n");
                printf("\tmovb\t%%al, %d(%%rbp)\n",res->offset);
            }
            else
            {
                printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                printf("\tnegq\t%%rax\n");
                printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
            }
        }
        break;
        case(opcode_dec_ASSIGN):
        {
            symbol_entry * res = curr_sym_table->lookUp(result);

            if(curr_sym_table->isPresent(arg1))
            {
                symbol_entry * op1 = curr_sym_table->lookUp(arg1);
                
                if(res->type->type_d == type_dec_CHAR)
                {
                    printf("\tmovzbl\t%d(%%rbp), %%eax\n",op1->offset);
                    printf("\tmovb\t%%al, %d(%%rbp)\n",res->offset);
                }
                else
                {
                    printf("\tmovq\t%d(%%rbp), %%rax\n",op1->offset);
                    printf("\tmovq\t%%rax, %d(%%rbp)\n",res->offset);
                }
            }
            else
            {
                if(res->type->type_d == type_dec_CHAR)
                {
                    printf("\tmovb\t$%s, %d(%%rbp)\n",arg1.c_str(),res->offset);
                }
                else
                {
                    printf("\tmovq\t$%s, %d(%%rbp)\n",arg1.c_str(),res->offset);
                }
            }
        }
        break;
        default:
                printf("Error ! Unknown opcode_declare\n");
                exit(-1);
    }
}

int main() {
   // yydebug = 1;
    yyparse();

    for(int i = 0 ; i < (int)glob_sym_table->entries.size() ; i++)
    {
        adjustOffset(glob_sym_table->entries[i]->nestedTable);
    }

    // Uncomment this for printing the quads and comment below and also changes in makefile
    // glob_sym_table->print();
    // for(int i = 0; i < (int)glob_sym_table->entries.size(); ++i) {
    //     if(glob_sym_table->entries[i]->nestedTable != NULL) {
    //         glob_sym_table->entries[i]->nestedTable->print();
    //     }
    // }
    //  printAllQuads();

    // Uncomment below statement to print target code
    genTargetCode();
    return 0;
}