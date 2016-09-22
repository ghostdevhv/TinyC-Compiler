%{ 
#include "ass5_13CS30015_translator.h"
extern int yylex();
void yyerror(const char* s);
%}

%union {
  int intVal;
  double doubleVal;
  char charVal;
  string *strVal;
  id_type id;
  declaration_type dec;
  expression_type exxp;
  list_nodes * nextList;
  symbol_entry * loc;
  int instr;
  vector <expression_type * > * args;
}

%token <id> IDENTIFIER;
%token <intVal>  INTEGER_CONSTANT;
%token <doubleVal> FLOAT_CONSTANT;
%token <id> ENUMERATION;
%token <charVal> CHAR_CONSTANT;
%token <strVal> STRING_LITERAL;

%token ELLIPSIS;
%token RIGHT_SHIFT_ASSIGN;
%token LEFT_SHIFT_ASSIGN;
%token ADD_ASSIGN;
%token SUB_ASSIGN;
%token MULT_ASSIGN;
%token DIV_ASSIGN;
%token MOD_ASSIGN;
%token AND_ASSIGN;
%token XOR_ASSIGN;
%token OR_ASSIGN;
%token RIGHT_SHIFT_OP;
%token LEFT_SHIFT_OP;
%token INCREMENT_OP;
%token DECREMENT_OP;
%token POINTER_OP;
%token LOGICAL_AND_OP;
%token LOGICAL_OR_OP;
%token LESS_EQUAL_OP;
%token GREATER_EQUAL_OP;
%token EQUAL_OP;
%token NOT_EQUAL_OP;

%token SINGLE_COMMENT;
%token MULTI_COMMENT;
%token AUTO_KEYWORD;
%token ENUM_KEYWORD;
%token RESTRICT_KEYWORD;
%token UNSIGNED_KEYWORD;
%token BREAK_KEYWORD;
%token EXTERN_KEYWORD;
%token RETURN_KEYWORD;
%token VOID_KEYWORD;
%token CASE_KEYWORD;
%token FLOAT_KEYWORD;
%token SHORT_KEYWORD;
%token VOLATILE_KEYWORD;
%token CHAR_KEYWORD;
%token FOR_KEYWORD;
%token SIGNED_KEYWORD;
%token WHILE_KEYWORD;
%token CONST_KEYWORD;
%token GOTO_KEYWORD;
%token SIZEOF_KEYWORD;
%token BOOL_KEYWORD;
%token CONTINUE_KEYWORD;
%token IF_KEYWORD;
%token STATIC_KEYWORD;
%token COMPLEX_KEYWORD;
%token DEFAULT_KEYWORD;
%token INLINE_KEYWORD;
%token STRUCT_KEYWORD;
%token IMAGINARY_KEYWORD;
%token DO_KEYWORD;
%token INT_KEYWORD;
%token SWITCH_KEYWORD;
%token DOUBLE_KEYWORD;
%token LONG_KEYWORD;
%token TYPEDEF_KEYWORD;
%token ELSE_KEYWORD;
%token REGISTER_KEYWORD;
%token UNION_KEYWORD;


%type <exxp> primary_expression
%type <exxp> postfix_expression
%type <exxp> unary_expression
%type <exxp> cast_expression
%type <exxp> multiplicative_expression
%type <exxp> additive_expression
%type <exxp> shift_expression
%type <exxp> relational_expression
%type <exxp> equality_expression
%type <exxp> AND_expression
%type <exxp> exclusive_OR_expression
%type <exxp> inclusive_OR_expression
%type <exxp> logical_AND_expression
%type <exxp> logical_OR_expression
%type <exxp> conditional_expression
%type <exxp> assignment_expression
%type <exxp> expression
%type <exxp> constant_expression
%type <exxp> init_declarator_list
%type <exxp> init_declarator
%type <exxp> assignment_expression_opt
%type <exxp> init_declarator_list_opt
%type <exxp> declarator
%type <exxp> initializer
%type <exxp> expression_statement
%type <exxp> expression_opt
%type <exxp> direct_declarator

%type <nextList> N
%type <instr> M

%type <nextList> statement
%type <nextList> compound_statement
%type <nextList> selection_statement
%type <nextList> iteration_statement
%type <nextList> jump_statement
%type <nextList> block_item_list_opt
%type <nextList> block_item_list
%type <nextList> block_item

%type <charVal> unary_operator

// %type <dec> declaration
%type <dec> declaration_specifiers
%type <dec> declaration_specifiers_opt
%type <dec> type_specifier
%type <dec> specifier_qualifier_list
%type <dec> specifier_qualifier_list_opt
%type <dec> type_name
%type <dec> declaration_list_opt
%type <dec> declaration_list
%type <dec> pointer
// %type <dec> external_declaration


%type <args> argument_expression_list
%type <args> argument_expression_list_opt

%left '+' '-'
%left '*' '/'
%nonassoc UNARY

%expect 1

%start translation_unit;

%%

primary_expression: 
	IDENTIFIER 
	{
		// Check if this is a global function
		if(!glob_sym_table->isPresent(*($1.strVal)))
		{
			$$.loc = curr_sym_table->lookUp(*($1.strVal));
		}
		else
		{
			$$.loc = glob_sym_table->lookUp(*($1.strVal));
		}

		// Initialise array and type
		$$.array = $$.loc;
		$$.type = $$.loc->type;
		$$.trueList = NULL;
		$$.falseList = NULL;
	} 

  	| INTEGER_CONSTANT
  	{
  		// Generate a new temporary variable of type int
  		$$.loc = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
  		$$.type = $$.loc->type;
  		$$.trueList = NULL;
  		$$.falseList = NULL;
  		// generating initial value
  		init_val init;
  		init.intVal = $1;
  		// update the initial value of the temp variable generated
  		curr_sym_table->update($$.loc,init);
  		// emit a quad assigning the value i.e. emit for E.loc = num.val
  		quad_arr.emit(quad($$.loc->name, $1, opcode_dec_ASSIGN));
  	}

  	| FLOAT_CONSTANT	
  	{
  		// Generate a new temporary variable of type double
  		$$.loc = curr_sym_table->genTemp(new symbol_type(type_dec_DOUBLE));
  		$$.type = $$.loc->type;
  		$$.trueList = NULL;
  		$$.falseList = NULL;
  		// generating initial value
  		init_val init;
  		init.doubleVal = $1;
  		// update the initial value of the temp variable generated
  		curr_sym_table->update($$.loc,init);
  		// emit a quad assigning the value i.e. emit for E.loc = num.val
  		quad_arr.emit(quad($$.loc->name, $1, opcode_dec_ASSIGN));
  	}			
  
 	// | ENUM_CONSTANT				
	
	| CHAR_CONSTANT	
	{
		// Generate a new temporary variable of type char
		$$.loc = curr_sym_table->genTemp(new symbol_type(type_dec_CHAR));
		$$.type = $$.loc->type;
		$$.trueList = NULL;
		$$.falseList = NULL;
		// generating initial value
		init_val init;
		init.charVal = $1;
		// update the initial value of the temp variable generated
		curr_sym_table->update($$.loc,init);
		// emit a quad assigning the value i.e. emit for E.loc = num.val
		quad_arr.emit(quad($$.loc->name, $1, opcode_dec_ASSIGN));
	}

  	| STRING_LITERAL	
  	{
  		$$.type = new symbol_type(type_dec_PTR);
  		$$.type->next = new symbol_type(type_dec_CHAR);
  		$$.isString = true;
  	}			
  	
  	| '(' expression ')'
  	{
  		// Copy the attribute of expression to primary_expression
  		$$ = $2;
  	}			
  	;

postfix_expression: 
	primary_expression	
	{
		// Copy the attribute of primary_expression to postfix_expression
		$$ = $1;
		$$.isArrayType = false;
	}										
	
	| postfix_expression '[' expression ']'
	{
		$$ = $1;
		
		if(!($$.isArrayType))
		{
			// If this was not array type,
			// we need to create a temporary variable to store offset i.e. $$.loc
			$$.isArrayType = true;
			// Initializing a temporary variable to store the array offset
			$$.loc = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
			quad_arr.emit(quad($$.loc->name, $3.loc->name, opcode_dec_MULT, i2s($1.type->next->getSize())));
		}
		else
		{
			if($1.type->next == NULL)
			{
				yyerror("error: subscripted value is neither array nor pointer nor vector");
  			exit(1);
			}

			// Updating the array offset
			symbol_entry * temp = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
			$$.loc = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
			quad_arr.emit(quad(temp->name, $3.loc->name, opcode_dec_MULT, i2s($1.type->next->getSize())));
			quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_PLUS, temp->name));
		}

		// now the type of $$ is the type of its element
		$$.type = $1.type->next;

	}						
	
	| postfix_expression '(' argument_expression_list_opt ')'	
	{
		// check if this is a valid call to a sfunction
		// check the types of parameters and return type and number of arguments
		$$ = $1;
		if($1.loc->nestedTable == NULL || !checkParams($1, $3))
		{
			char _error[100];
			sprintf(_error, "Error in calling function %s. Parameters type do not match.\n",$1.loc->name.c_str());
			// yyerror(_error);
			// exit(1);
		}
		else
		{
			// output all the parameters in the quad
			for(int i = (int)$3->size() - 1 ; i >= 0 ; i--)
			{
				quad_arr.emit(quad((*$3)[i]->loc->name,"",opcode_dec_PARAM,""));
			}

			char buff[10];
			sprintf(buff, "%d", (int)$3->size());
			$$.loc = curr_sym_table->genTemp($1.loc->nestedTable->entries[0]->type);
			$$.type = $$.loc->type;
			$$.trueList = NULL;
			$$.falseList = NULL;
			$$.isArrayType = false;
			// calling the function
			quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_CALL, buff));
		}
	}		

	| postfix_expression '.' IDENTIFIER 			    {}				

	| postfix_expression POINTER_OP IDENTIFIER            {}

	| postfix_expression INCREMENT_OP
	{
		// Generate a temporary variable
		$$ = $1;
		$$.loc = curr_sym_table->genTemp($1.type);
		$$.type = $$.loc->type;

		if($1.isArrayType)
		{
			// if it is array type we need to dereference the array first and then increment
			quad_arr.emit(quad($$.loc->name, $1.array->name, opcode_dec_R_INDEX, $1.loc->name));
			symbol_entry * sy = curr_sym_table->genTemp($1.type);
			quad_arr.emit(quad(sy->name, $$.loc->name, opcode_dec_PLUS, "1"));
	  		quad_arr.emit(quad($1.array->name, $1.loc->name, opcode_dec_L_INDEX, sy->name));
		}
		else
		{
			quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_ASSIGN, ""));
			quad_arr.emit(quad($1.loc->name, $1.loc->name ,opcode_dec_PLUS, "1"));
		}
		$$.isArrayType = false;
	}

	| postfix_expression DECREMENT_OP
	{
		// Generate a temporary variable
		$$ = $1;
		$$.loc = curr_sym_table->genTemp($1.type);
		$$.type = $$.loc->type;

		if($1.isArrayType)
		{
			// if it is array type we need to dereference the array first and then increment
			quad_arr.emit(quad($$.loc->name, $1.array->name, opcode_dec_R_INDEX, $1.loc->name));
			symbol_entry * sy = curr_sym_table->genTemp($1.type);
			quad_arr.emit(quad(sy->name, $$.loc->name, opcode_dec_MINUS, "1"));
		  		quad_arr.emit(quad($1.array->name, $1.loc->name, opcode_dec_L_INDEX, sy->name));
		}
		else
		{
			quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_ASSIGN, ""));
			quad_arr.emit(quad($1.loc->name, $1.loc->name ,opcode_dec_MINUS, "1"));
		}
		$$.isArrayType = false;
	}
	
	| '(' type_name ')' '{' initializer_list '}'      {}
	
	| '(' type_name ')' '{' initializer_list ',' '}'  {}
	;

argument_expression_list_opt: 
	argument_expression_list
	{
	 	$$ = $1;
	}
	
	| 
	{
 		// initialise parameter list
 		$$ = new vector <expression_type * >();
	}
	;

argument_expression_list: 
	assignment_expression
	{
	 	// initialize parameter list
	 	$$ = new vector <expression_type * >();
	 	$$->push_back(new expression_type($1));
	}
	
	| argument_expression_list ',' assignment_expression_opt	
	{
	 	// merge parameter list
	 	$$ = $1;
	 	$$->push_back(new expression_type($3));
	}
	;

unary_expression: 
	postfix_expression
  	{
  		$$ = $1;
  	}
	
	| INCREMENT_OP unary_expression
  	{
  		// Generate temporary variable
  		$$ = $2;
  	  	$$.loc = curr_sym_table->genTemp($2.type);
  	  	$$.type = $$.loc->type;

  	  	if($2.isArrayType)
  	  	{
  	  		// we need to dereference the array
  	  		quad_arr.emit(quad($$.loc->name, $2.array->name, opcode_dec_R_INDEX, $2.loc->name));
  	  		quad_arr.emit(quad($$.loc->name, $$.loc->name, opcode_dec_PLUS, "1"));
  	  		quad_arr.emit(quad($2.array->name, $2.loc->name, opcode_dec_L_INDEX, $$.loc->name));
  	  	}
  	  	else
  	  	{
  	  		quad_arr.emit(quad($2.loc->name, $2.loc->name, opcode_dec_PLUS, "1"));
  	  		quad_arr.emit(quad($$.loc->name, $2.loc->name, opcode_dec_ASSIGN,""));
  	  	}

  	  	$$.isArrayType = false;
  	}
	
	| DECREMENT_OP unary_expression
  	{
  		// Generate temporary variable
  		$$ = $2;
  	  	$$.loc = curr_sym_table->genTemp($2.type);
  	  	$$.type = $$.loc->type;

  	  	if($2.isArrayType)
  	  	{
  	  		// we need to dereference the array
  	  		quad_arr.emit(quad($$.loc->name, $2.array->name, opcode_dec_R_INDEX, $2.loc->name));
  	  		quad_arr.emit(quad($$.loc->name, $$.loc->name, opcode_dec_MINUS, "1"));
  	  		quad_arr.emit(quad($2.array->name, $2.loc->name, opcode_dec_L_INDEX, $$.loc->name));
  	  	}
  	  	else
  	  	{
  	  		quad_arr.emit(quad($2.loc->name, $2.loc->name, opcode_dec_MINUS, "1"));
  	  		quad_arr.emit(quad($$.loc->name, $2.loc->name, opcode_dec_ASSIGN,""));
  	  	}
  	  	$$.isArrayType = false;
  	}
	
	| unary_operator cast_expression %prec UNARY
  	{
  		$$.trueList = NULL;
  		$$.falseList = NULL;

  		switch($1)
  		{
  			case '&':
  					{
  						// address of operator
  						symbol_type * ptr = new symbol_type(type_dec_PTR);
  						ptr->next = $2.type;
  						$$.loc = curr_sym_table->genTemp(ptr);
  						$$.type = $$.loc->type;
  						if(!$2.isArrayType)
  						{
  							quad_arr.emit(quad($$.loc->name, $2.loc->name, opcode_dec_ADDRESS, ""));
  						}
  						else
  						{
  							quad_arr.emit(quad($$.loc->name, $2.array->name, opcode_dec_PLUS, $2.loc->name));
  						}
  					}
  					break;

  			case '*':
  					{
  						// value of operator
  						if($2.type->next == NULL)
  						{
  							yyerror("Non Pointer type");
  							exit(1);
  						}
  						$$ = $2;
  						$$.type = $2.type->next;
  						$$.isPtrType = true;
  					}
  					break;

  			case '+':
  					{
  						if($2.isArrayType)
  						{
  							$2.isArrayType = false;
  							symbol_entry * sym = curr_sym_table->genTemp($2.type);
  							quad_arr.emit(quad(sym->name, $2.array->name, opcode_dec_R_INDEX, $2.loc->name));
  							$2.loc = sym; 
  						}
  						else if($2.isPtrType)
  						{
  							$2.isPtrType = false;
  							symbol_entry * sym = curr_sym_table->genTemp($2.type);
  							quad_arr.emit(quad(sym->name, $2.array->name, opcode_dec_R_VAL_AT, $2.loc->name));
  							$2.loc = sym;
  						}
  						$$ = $2;
  					}
  					break;

  			case '-':
  					{
  						// unary minus
  						if($2.isArrayType)
  						{
  							$2.isArrayType = false;
  							symbol_entry * sym = curr_sym_table->genTemp($2.type);
  							quad_arr.emit(quad(sym->name, $2.array->name, opcode_dec_R_INDEX, $2.loc->name));
  							$2.loc = sym; 
  						}
  						else if($2.isPtrType)
  						{
  							$2.isPtrType = false;
  							symbol_entry * sym = curr_sym_table->genTemp($2.type);
  							quad_arr.emit(quad(sym->name, $2.array->name, opcode_dec_R_VAL_AT, $2.loc->name));
  							$2.loc = sym;
  						}
  						$$.loc = curr_sym_table->genTemp($2.type);
  						$$.type = $$.loc->type;
  						quad_arr.emit(quad($$.loc->name, $2.loc->name, opcode_dec_UNARY_MINUS,""));
  					}
  					break;

  			case '~':
  					{
  						// bitwise not
  						if($2.isArrayType)
  						{
  							$2.isArrayType = false;
  							symbol_entry * sym = curr_sym_table->genTemp($2.type);
  							quad_arr.emit(quad(sym->name, $2.array->name, opcode_dec_R_INDEX, $2.loc->name));
  							$2.loc = sym; 
  						}
  						else if($2.isPtrType)
  						{
  							$2.isPtrType = false;
  							symbol_entry * sym = curr_sym_table->genTemp($2.type);
  							quad_arr.emit(quad(sym->name, $2.array->name, opcode_dec_R_VAL_AT, $2.loc->name));
  							$2.loc = sym;
  						}
  						if($2.type->type_d == type_dec_INT || $2.type->type_d == type_dec_CHAR || $2.type->type_d == type_dec_BOOL)
  						{
  							expression_type e;
  							e.type = new symbol_type(type_dec_INT);
  							$$.loc = curr_sym_table->genTemp(e.type);
  							$$.type = $$.loc->type;
  							typeCheck(&e, &($2), true);
  							quad_arr.emit(quad($$.loc->name, $2.loc->name, opcode_dec_BITWISE_COMPLEMENT,""));
  						}
  						else yyerror("Incompatible type for ~");
  					}
  					break;
  			// case '!':
  			// 		{

  			// 		}
  			// 		break;
  		}
  	}
	
	| SIZEOF_KEYWORD unary_expression	
	{

	}
	
	| SIZEOF_KEYWORD '(' type_name ')'	
	{

	}
	;

unary_operator: 
	'&'			
	{
		$$ = '&';
	}
  	
  	| '*' 			
  	{
  		$$ = '*';
  	}
  	
  	| '+' 				
  	{
  		$$ = '+';
  	}
  	
  	| '-' 				
  	{
  		$$ = '-';
  	}
  	
  	| '~'  
  	{
  		$$ = '~';
  	}
  	
  	| '!'			
  	{
  		$$ = '!';
  	}
  	;

cast_expression: unary_expression
				 {
				 	$$ = $1;
				 }
			   | '(' type_name ')' cast_expression 	{}
			   ;

multiplicative_expression: 
	cast_expression
    {
	    $$ = $1;
   	  	if($1.isArrayType)
   	  	{
   	  	 	$1.isArrayType = false;
   	  	 	$$.loc = curr_sym_table->genTemp($1.type);
		 	quad_arr.emit(quad($$.loc->name, $1.array->name, opcode_dec_R_INDEX, $1.loc->name));
   	  	}
   	  	else if($1.isPtrType)
   	  	{
   	  	 	$1.isPtrType = false;
   	  	 	$$.loc = curr_sym_table->genTemp($1.type);
   	  	 	quad_arr.emit(quad($$.loc->name, $1.array->name, opcode_dec_R_VAL_AT, $1.loc->name));
   	  	}
   	}
						   
 	| multiplicative_expression '*' cast_expression
   	{
   	  	if($3.isArrayType)
   	  	{
   	  	 	$3.isArrayType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp($3.type);
   	  	 	quad_arr.emit(quad(sy->name, $3.array->name, opcode_dec_R_INDEX, $3.loc->name));
   	  	 	$3.loc = sy;
   	  	}
   	  	else if($3.isPtrType)
   	  	{
   	  	 	$3.isPtrType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp($3.type);
   	  	 	quad_arr.emit(quad(sy->name, $3.array->name, opcode_dec_R_VAL_AT, $3.loc->name));
   	  	 	$3.loc = sy;
   	  	}

 	 	$$ = $1;
   	  	typeCheck(&($1), &($3), false);
   	  	$$.loc = curr_sym_table->genTemp($3.type);
   	  	$$.type = $$.loc->type;
   	  	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_MULT, $3.loc->name));
  	}
 	
 	| multiplicative_expression '/' cast_expression
   	{
   	  	if($3.isArrayType)
   	  	{
   	  	 	$3.isArrayType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp($3.type);
   	  	 	quad_arr.emit(quad(sy->name, $3.array->name, opcode_dec_R_INDEX, $3.loc->name));
   	  	 	$3.loc = sy;
   	  	}
   	  	else if($3.isPtrType)
   	  	{
   	  	 	$3.isPtrType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp($3.type);
   	  	 	quad_arr.emit(quad(sy->name, $3.array->name, opcode_dec_R_VAL_AT, $3.loc->name));
  		 	$3.loc = sy;
   	  	}

  	  	$$ = $1;
   	  	typeCheck(&($1), &($3), false);
   	  	$$.loc = curr_sym_table->genTemp($3.type);
   	  	$$.type = $$.loc->type;
   	  	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_DIVIDE, $3.loc->name));
   	}

 	| multiplicative_expression '%' cast_expression
   	{
   	  	if($3.isArrayType)
   	  	{
   	  	 	$3.isArrayType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp($3.type);
   	  	 	quad_arr.emit(quad(sy->name, $3.array->name, opcode_dec_R_INDEX, $3.loc->name));
   	  	 	$3.loc = sy;
   	  	}
   	  	else if($3.isPtrType)
   	  	{
   	  	 	$3.isPtrType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp($3.type);
   	  	 	quad_arr.emit(quad(sy->name, $3.array->name, opcode_dec_R_VAL_AT, $3.loc->name));
   	  	 	$3.loc = sy;
   	  	}

   	  	$$ = $1;
	  	typeCheck(&($1), &($3), false);
   	  	$$.loc = curr_sym_table->genTemp($3.type);
   	  	$$.type = $$.loc->type;
   	  	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_MODULO, $3.loc->name));
   	}
 	;

additive_expression: 
	multiplicative_expression
 	{
	 	$$ = $1;
 	}
	
	| additive_expression '+' multiplicative_expression
	{
	 	$$ = $1;
	 	typeCheck(&($1), &($3), false);
	 	$$.loc = curr_sym_table->genTemp($1.type);
	 	$$.type = $$.loc->type;
	 	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_PLUS, $3.loc->name));
	}	
   	| additive_expression '-' multiplicative_expression
 	{
 	 	$$ = $1;
 	 	typeCheck(&($1), &($3), false);
 	 	$$.loc = curr_sym_table->genTemp($1.type);
 	 	$$.type = $$.loc->type;
 	 	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_MINUS, $3.loc->name));
 	}
   	;

shift_expression: 
	additive_expression
  	{
 	  	$$ = $1;
  	}

	| shift_expression LEFT_SHIFT_OP additive_expression
  	{
  	  	expression_type e;
 	  	e.type = new symbol_type(type_dec_INT);
 	  	if($1.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($1), true))
 	  	{
 	      	yyerror("Invalid type for operator <<\n");
 		  	exit(1);
 	  	}
 	  	
 	  	if($3.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($3), true))
 	  	{
 		  	yyerror("Invalid type for operator <<\n");
 		  	exit(1);
 	  	}
 	  	
 	  	$$ = $1;
 	  	$$.loc = curr_sym_table->genTemp(e.type);
 	  	$$.type = $$.loc->type;
 	  	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_L_SHIFT, $3.loc->name));
  	}

	| shift_expression RIGHT_SHIFT_OP additive_expression
  	{
  	  	expression_type e;
 	  	e.type = new symbol_type(type_dec_INT);
 	  	if($1.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($1), true))
 	  	{
 	      	yyerror("Invalid type for operator >>\n");
 		  	exit(1);
 	  	}
 	  
 	  	if($3.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($3), true))
 	  	{
 		  	yyerror("Invalid type for operator >>\n");
 		  	exit(1);
 	  	}
 	  
 	  	$$ = $1;
 	  	$$.loc = curr_sym_table->genTemp(e.type);
 	  	$$.type = $$.loc->type;
 	  	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_R_SHIFT, $3.loc->name));
  	}
	;

relational_expression: 
	shift_expression
   	{
	   $$ = $1;
   	}
 	
 	| relational_expression '<' shift_expression
   	{
   	  	typeCheck(&($1), &($3), false);
 	  	$$.type = new symbol_type(type_dec_BOOL);
 	  	$$.trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", $1.loc->name, opcode_dec_LESS_THAN, $3.loc->name));
 	  	$$.falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
 	
 	| relational_expression '>' shift_expression
   	{	
   	  	typeCheck(&($1), &($3), false);
 	  	$$.type = new symbol_type(type_dec_BOOL);
 	  	$$.trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", $1.loc->name, opcode_dec_GREATER_THAN, $3.loc->name));
 	  	$$.falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
 
 	| relational_expression LESS_EQUAL_OP shift_expression
   	{
   	  	typeCheck(&($1), &($3), false);
 	  	$$.type = new symbol_type(type_dec_BOOL);
 	  	$$.trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", $1.loc->name, opcode_dec_LESS_OR_EQUAL, $3.loc->name));
 	  	$$.falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
 
 	| relational_expression GREATER_EQUAL_OP shift_expression
   	{
   	  	typeCheck(&($1), &($3), false);
 	  	$$.type = new symbol_type(type_dec_BOOL);
 	  	$$.trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", $1.loc->name, opcode_dec_GRTER_OR_EQUAL, $3.loc->name));
 	  	$$.falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}	
 	;

equality_expression: 
	relational_expression
	{
        $$ = $1;
	}

   	| equality_expression EQUAL_OP relational_expression
    {
     	typeCheck(&($1), &($3), false);
 	  	$$.type = new symbol_type(type_dec_BOOL);
     	$$.trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", $1.loc->name, opcode_dec_EQUAL, $3.loc->name));
 	  	$$.falseList = new list_nodes(quad_arr.nxt_instr);
     	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
    }
   	
   	| equality_expression NOT_EQUAL_OP relational_expression
    {
     	typeCheck(&($1), &($3), false);
 	  	$$.type = new symbol_type(type_dec_BOOL);
 	  	$$.trueList = new list_nodes(quad_arr.nxt_instr);
     	quad_arr.emit(quad("", $1.loc->name, opcode_dec_NOT_EQUAL, $3.loc->name));
 	  	$$.falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
    }
   	;

AND_expression: 
	equality_expression
	{
   	    $$ = $1;
	}
  	
  	| AND_expression '&' equality_expression
    {
    	expression_type e;
     	e.type = new symbol_type(type_dec_INT);
     	if($1.type->type_d == type_dec_DOUBLE || 			!typeCheck(&e, &($1), true))
     	{
     		yyerror("Invalid type for operator &\n");
     		exit(1);
     	}
     	if($3.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($3), true))
     	{
     		yyerror("Invalid type for operator &\n");
     		exit(1);
     	}
     	$$ = $1;
     	$$.loc = curr_sym_table->genTemp(e.type);
     	$$.type = $$.loc->type;
     	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_BITWISE_AND, $3.loc->name));
    }
  	;

exclusive_OR_expression: 
	AND_expression
	{
   	    $$ = $1;
    }
   	
   	| exclusive_OR_expression '^' AND_expression
    {
     	expression_type e;
     	e.type = new symbol_type(type_dec_INT);
     	if($1.type->type_d == type_dec_DOUBLE || 	!typeCheck(&e, &($1), true))
     	{
     		yyerror("Invalid type for operator ^\n");
     		exit(1);
     	}
     	if($3.type->type_d == type_dec_DOUBLE || 	!typeCheck(&e, &($3), true))
     	{
     		yyerror("Invalid type for operator ^\n");
     		exit(1);
     	}
     	$$ = $1;
     	$$.loc = curr_sym_table->genTemp(e.type);
     	$$.type = $$.loc->type;
     	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_BITWISE_XOR, $3.loc->name));
    }
   	;

inclusive_OR_expression: 
	exclusive_OR_expression
	{
   	    $$ = $1;
    }
   	
   	| inclusive_OR_expression '|' exclusive_OR_expression
 	{
 		expression_type e;
     	e.type = new symbol_type(type_dec_INT);
     	if($1.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($1), true))
     	{
     		yyerror("Invalid type for operator |\n");
     		exit(1);
     	}
     	if($3.type->type_d == type_dec_DOUBLE || !typeCheck(&e, &($3), true))
     	{
     		yyerror("Invalid type for operator |\n");
     		exit(1);
     	}
     	$$ = $1;
     	$$.loc = curr_sym_table->genTemp(e.type);
     	$$.type = $$.loc->type;
     	quad_arr.emit(quad($$.loc->name, $1.loc->name, opcode_dec_BITWISE_OR, $3.loc->name));
    }
   	;

logical_AND_expression: 
	inclusive_OR_expression
	{
   	    $$ = $1;
    }
  	
  	| logical_AND_expression LOGICAL_AND_OP M inclusive_OR_expression
    {
    	backPatch($1.trueList, $3);
    	$$.type = new symbol_type(type_dec_BOOL);
    	$$.trueList = $4.trueList;
    	$$.falseList = mergeList($1.falseList, $4.falseList);
    }
  	
  	;

logical_OR_expression: 
	logical_AND_expression
	{
   	    $$ = $1;
   	}
	
	| logical_OR_expression LOGICAL_OR_OP M logical_AND_expression
   	{
   		backPatch($1.falseList, $3);
   		$$.type = new symbol_type(type_dec_BOOL);
   		$$.trueList = mergeList($1.trueList, $4.trueList);
   		$$.falseList = $4.falseList;
   	}
	
	;

conditional_expression: 
	logical_OR_expression
	{
		$$ = $1;
	}
  	
  	| logical_OR_expression N '?' M expression N ':' M conditional_expression
  	{
  		// N has been inserted to take care of fall through of expression
  		// N basically also is used to emit goto statement to goto to basic block
  		// which converts expression to bool
  		// M has been inserted to get the address of instruction for backpatching purposes
  		$$.loc = curr_sym_table->genTemp($5.type);
  		quad_arr.emit(quad($$.loc->name, $9.loc->name, opcode_dec_ASSIGN, ""));
  		list_nodes * l = new list_nodes(quad_arr.nxt_instr);
  		quad_arr.emit(quad("","",opcode_dec_GOTO,""));
  		backPatch($6, quad_arr.nxt_instr);
  		quad_arr.emit(quad($$.loc->name, $5.loc->name, opcode_dec_ASSIGN, ""));
  		l = mergeList(l, new list_nodes(quad_arr.nxt_instr));
  		quad_arr.emit(quad("","",opcode_dec_GOTO,""));
  		backPatch($2, quad_arr.nxt_instr);
  		conv2Bool(&($1));
  		backPatch($1.trueList, $4);
  		backPatch($1.falseList, $8);
  		backPatch(l, quad_arr.nxt_instr);
  	}
  	;

assignment_expression: 
	conditional_expression
   	{
   	   	$$ = $1;
   	}
	
 	| unary_expression assignment_operator assignment_expression
   	{
   	   	if($1.type->type_d == type_dec_ARR)
   	   	{
   	   	  	yyerror("Assignment of arrays. Incompatible types");
	   	   	exit(1);
   	   	}
   	   	if($1.type->type_d == type_dec_PTR)
   	   	{
   	   	  	if($3.type->type_d == type_dec_DOUBLE)
   	   		{
	   	  		yyerror("Assignment of pointer to double not allowed.");
   	   		}
   	   		else
	   		{
	   	  		quad_arr.emit(quad($1.loc->name, $3.loc->name, opcode_dec_ASSIGN, ""));
	   		}
	   	}
		else
		{
	   	   	if(!typeCheck(&($1), &($3), true))
	   	   	{
	   	   	  	yyerror("Incompatible types in assignment");
	   	   	  	exit(1);
	   	   	}
	   	   	if($1.isArrayType)
			{
	   	   	  	$1.isArrayType = false;
	   	   	  	quad_arr.emit(quad($1.array->name, $1.loc->name, opcode_dec_L_INDEX, $3.loc->name));
	   	   	}
			else if($1.isPtrType)
			{
	   	   	  	$1.isPtrType = false;
	   	   	  	quad_arr.emit(quad($1.loc->name, $3.loc->name, opcode_dec_L_VAL_AT, ""));
	   	   	}
	   	   	else
	   	   	{
	   	   	  	quad_arr.emit(quad($1.loc->name, $3.loc->name, opcode_dec_ASSIGN, ""));
	   	   	}
	   	}
   	   	$$ = $3;
   	}
 	;

assignment_operator: 
	'='
   	| MULT_ASSIGN 	
   	{

   	}
   	
   	| DIV_ASSIGN		
   	{

   	}
   	
   	| MOD_ASSIGN 		
   	{

   	}
   	
   	| ADD_ASSIGN 		
   	{

   	}
   	
   	| SUB_ASSIGN 		
   	{

   	}
   	
   	| LEFT_SHIFT_ASSIGN	
   	{

   	}
   
   	| RIGHT_SHIFT_ASSIGN	
   	{

   	}
   	
   	| AND_ASSIGN			
   	{

   	}
   	
   	| XOR_ASSIGN			
   	{

   	}
  	
  	| OR_ASSIGN			
  	{

  	}
   	;

expression: 
	assignment_expression
	{
		$$ = $1;
	}
  	
  	| expression ',' assignment_expression
  	{
  		$$ = $3;
  	}
  	
  	;

constant_expression: 
	conditional_expression
	{
	 	$$ = $1;
	}
   	
   	;

declaration: 
	declaration_specifiers init_declarator_list_opt ';'
	{
	 	// create a new symbol table for the function
		if($2.type->type_d == type_dec_FUNC)
	 	{
			curr_sym_table = new symbol_table();
		}
	}
	
	;

init_declarator_list_opt: 
	init_declarator_list
  	{
	  	$$=$1;
	}

	| 
	{

	}

	;

declaration_specifiers: 
	storage_class_specifier declaration_specifiers_opt	
	{

	}
  	
  	| type_specifier declaration_specifiers_opt
  	{
  		// save the properties of current type found till now
  		$$.type = $1.type;
  		$$.width = $1.width;
  		quad_arr.type = $1.type;
  		quad_arr.width = $1.width;
  	}

  	| type_qualifier declaration_specifiers_opt			
  	{

  	}
 	
 	| function_specifier declaration_specifiers_opt		
 	{

 	}
	;

declaration_specifiers_opt: 
	declaration_specifiers
	{
		$$.type = $1.type;
		$$.width = $1.width;
	}
  	
  	|	
  	{

  	}
  	;

init_declarator_list: 
	init_declarator
	{
  	 	$$ = $1;
	}

	| init_declarator_list ',' init_declarator
  	{
	  	$$ = $3;
	}
	;

init_declarator: 
	declarator
	{
		$$ = $1;
	}

	| declarator '=' initializer
	{
		// check whether they are of same types
		typeCheck(&($1), &($3), true);
		// if its initial value was set in symbol table we need to update it in symbol table
		if($3.loc->was_Init)
		{
		 	curr_sym_table->update($1.loc, $3.loc->init);
		}
		quad_arr.emit(quad($1.loc->name, $3.loc->name, opcode_dec_ASSIGN, ""));
		$$ = $1;			   	 	 
   	}
   	;

storage_class_specifier: 
	EXTERN_KEYWORD 	
	{

	}
   	| STATIC_KEYWORD		
   	{

   	}
	
	| AUTO_KEYWORD		
	{

	}

    | REGISTER_KEYWORD	
    {

    }
    ;

type_specifier: 
	VOID_KEYWORD
	{
		$$.type = new symbol_type(type_dec_VOID);
		$$.width = SIZE_OF_VOID;
	}

  	| CHAR_KEYWORD
  	{
  		$$.type = new symbol_type(type_dec_CHAR);
		$$.width = SIZE_OF_CHAR;
  	}
	
	| SHORT_KEYWORD		
	{

	}
	
	| INT_KEYWORD
  	{
  		$$.type = new symbol_type(type_dec_INT);
		$$.width = SIZE_OF_INT;
  	}
	
	| LONG_KEYWORD		
	{

	}
  	
  	| FLOAT_KEYWORD		
  	{

  	}
	
	| DOUBLE_KEYWORD
  	{
  		$$.type = new symbol_type(type_dec_DOUBLE);
		$$.width = SIZE_OF_DOUBLE;
  	}
	| SIGNED_KEYWORD		
	{

	}
 	
 	| UNSIGNED_KEYWORD	
 	{

 	}
 	
 	| BOOL_KEYWORD		
 	{

 	}
  	
  	| COMPLEX_KEYWORD		
  	{

  	}
  	
  	| IMAGINARY_KEYWORD	
  	{

  	}
  	
  	| enum_specifier		
  	{

  	}
  	;

specifier_qualifier_list: 
	type_specifier specifier_qualifier_list_opt
	{
	  	$$.type = $1.type;
	  	$$.width = $1.width;
	}

	| type_qualifier specifier_qualifier_list_opt  
	{

	}

	;

specifier_qualifier_list_opt: 
	specifier_qualifier_list
  	{
	  	$$.type = $1.type;
	  	$$.width = $1.width;
  	}

	| 
	{

	}
	;

enum_specifier: 
	ENUM_KEYWORD identifier_opt '{' enumerator_list '}'      
	{

	}
	
	| ENUM_KEYWORD identifier_opt '{' enumerator_list ',' '}'  {

	}
	
	| ENUM_KEYWORD IDENTIFIER 								 
	{

	}
	;

identifier_opt: 
	IDENTIFIER  
	{

	}
  	
  	| 
  	{

  	}
	;

enumerator_list: 
	enumerator 						
	{

	}
	| enumerator_list ',' enumerator 	
	{

	}
	;

enumerator: 
IDENTIFIER 								
	{
	
	}
	
	| IDENTIFIER '=' constant_expression 	
	{

	}
	;

type_qualifier: 
	CONST_KEYWORD 		
	{

	}
	
	| RESTRICT_KEYWORD	
	{

	}
	
	| VOLATILE_KEYWORD	
	{

	}
	;

function_specifier: 
	INLINE_KEYWORD 	
	{

	}
	;

declarator: 
	direct_declarator
	{
		$$ = $1;
	}

	| pointer direct_declarator
	{
		// update the type of the direct_declarator i.e. convert it to pointer
      	// and then update its type, size, offset in symbol table
		symbol_type * head = new symbol_type(type_dec_VOID);
		symbol_type * to_Change;
		if($2.loc->nestedTable == NULL)
		{
			to_Change = $2.type;
		}
		else
		{
			to_Change = $2.loc->nestedTable->entries[0]->type;
		}

		head->next = to_Change;
		symbol_type * ptr = head;

		int oldSize = $2.loc->size;
		if($2.loc->nestedTable != NULL)
		{
			oldSize = $2.loc->nestedTable->entries[0]->size;
		}

		int newSize = SIZE_OF_PTR;

		while(ptr->next->next != NULL)
		{
			newSize *= ptr->size;
			ptr = ptr->next;
		}

		symbol_type * ptr1 = $1.type;
		while(ptr1->next != NULL)
		{
			ptr1 = ptr1->next;
		}
		ptr1->next = ptr->next;
		ptr->next = $1.type;

		if($2.loc->nestedTable == NULL)
		{
			curr_sym_table->offset += newSize - oldSize;
			$2.loc->type = head->next;
			$2.loc->size = newSize;
			$2.type = $2.loc->type;
		}
		else
		{
			// If the given is a function,
			// we need to change the offset values of all the entries in symbol_table of function after this
			for(int i = 1 ; i < (int)$2.loc->nestedTable->entries.size(); i++)
			{
				$2.loc->nestedTable->entries[i]->offset += newSize - oldSize;
			}
			$2.loc->nestedTable->entries[0]->type = head->next;
			$2.loc->nestedTable->entries[0]->size = newSize;
			$2.loc->nestedTable->offset += newSize - oldSize;
			$2.type = head->next;
		}
		$$ = $2;

		delete head;
	}
  	;

direct_declarator: 
	IDENTIFIER
   	{
   		// find the identifier in the symbol table
   		// if its not present, insert it ; else return 
   		$$.loc = curr_sym_table->lookUp(*($1.strVal));
   		curr_sym_table->update($$.loc, quad_arr.type, quad_arr.width);
   		$$.type = $$.loc->type;
   	}
	
	| '(' declarator ')'
   	{
   		$$ = $2;
   	}
 	
 	| direct_declarator '[' type_qualifier_list_opt assignment_expression_opt ']'
   {
   		symbol_type * p = new symbol_type(type_dec_ARR);
   		if($4.loc == NULL)
   		{
			if($1.type->type_d == type_dec_INT || $1.type->type_d == type_dec_VOID || $1.type->type_d == type_dec_CHAR || $1.type->type_d == type_dec_DOUBLE)
   			{
				p = new symbol_type(type_dec_PTR);
   				p->next = $1.type;
   				$1.type = p;
   				$1.loc->type = p;
   				int oldSize = $1.loc->size;
   				$1.loc->size += SIZE_OF_PTR - oldSize;
   				curr_sym_table->offset += SIZE_OF_PTR - oldSize;
   				$$ = $1;
   			}
   			else
   			{
   				yyerror("Incomplete type for array\n");
   				exit(1);
   			}
   		}
   		else
   		{
   			if($4.loc->type->type_d == type_dec_INT)
   			{
   				p->size = $4.loc->init.intVal;
   			}
   			else
   			{
   				yyerror("Non integer type array size");
   				exit(1);
   			}

   			int oldSize = $1.loc->size;

   			p->next = $1.type;
   			symbol_type * head = new symbol_type();
   			head->next = $1.type;
   			symbol_type * ptr = head;

   			while(ptr->next->next != NULL)
   			{
   				ptr = ptr->next;
   			}

   			p->next = ptr->next;
   			ptr->next = p;

   			int newSize;
   			if($4.loc != NULL)
   			{
   				newSize = head->next->getSize();
   			}
   			else
   			{
   				newSize = SIZE_OF_PTR;
   			}
				   			
   			$1.type = head->next;
   			$1.loc->type = head->next;
   			$1.loc->size = newSize;

   			for(int i = (int)curr_sym_table->entries.size() - 1 ; i >=0 ; --i)
   			{
   				if(curr_sym_table->entries[i] == $1.loc) break;
   				curr_sym_table->entries[i]->offset += newSize - oldSize;
   			}

   			curr_sym_table->offset += newSize - oldSize;
   			$$ = $1;
		}
   	}
 	
 	| direct_declarator '[' STATIC_KEYWORD type_qualifier_list_opt assignment_expression ']'
	{

	}
	
	| direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
	{

	}
	
	| direct_declarator '[' type_qualifier_list_opt '*' ']'
	{

	}
	
	| direct_declarator '(' parameter_type_list_opt ')'
	{
   		// this is a function declaration
		// save the return type of the function
		// save the nestedTable of the function
		// update its name in Global symbol table
   		symbol_entry * sym = glob_sym_table->lookUp($1.loc->name);
   		glob_sym_table->update(sym, new symbol_type(type_dec_FUNC), SIZE_OF_FUNC);
   		sym->nestedTable = curr_sym_table;
   		curr_sym_table->table_name = "ST (" + $1.loc->name + ")";
   		quad_arr.emit(quad($1.loc->name, "", opcode_dec_FUNC_START, ""));
				   		
   		$1.loc->name = "__retVal";
   		$1.loc->scope = "return";
   		$$.loc = sym;
   		$$.type = $$.loc->type;
  	}
	
	| direct_declarator '(' identifier_list_opt ')'	
	{

	}
	;

parameter_type_list_opt: 
	parameter_type_list 
	{
	
	}

    | 
    {

    }
	;

identifier_list_opt: 
	identifier_list  
	{

	}
	
	//| {}
	;

type_qualifier_list_opt: 
	type_qualifier_list 
	{

	}
	
	| 
	{

	}
   ;

assignment_expression_opt: 
	assignment_expression
   	{
   	  	$$ = $1;
   	}
	
	| 
	{
		$$.trueList = NULL;
	 	$$.falseList = NULL;
 	  	$$.loc = NULL;
   	}
	;

pointer: 
	'*' type_qualifier_list_opt
	{
 		$$.type = new symbol_type(type_dec_PTR);
	}
   	
   	| '*' type_qualifier_list_opt pointer
 	{
 	 	$$.type = new symbol_type(type_dec_PTR);
     	$$.type->next = $3.type;
	}
	
	;

type_qualifier_list: 
	type_qualifier 	
	{

	}
	
	| type_qualifier_list type_qualifier 	
	{

	}
	
	;

parameter_type_list: 
	parameter_list  
	{

	}
	
	| parameter_list ',' ELLIPSIS  
	{

	}
	;

parameter_list: 
	parameter_declaration 	
	{

	}
	
	| parameter_list ',' parameter_declaration 
	{

	}
	;

parameter_declaration: 
	declaration_specifiers declarator
   	{
   	 	// remembering the scope of read IDENTIFIER
	   	$2.loc->scope = "param";
	}
	
	| declaration_specifiers 	
	{

	}
	;

identifier_list: 
	IDENTIFIER 	
	{

	}
	
	| identifier_list ',' IDENTIFIER  
	{

	}
	;

type_name: 
	specifier_qualifier_list
   	{
   	  	// saving the latest width and type that are detected needed for declaration of variables
		$$.type = $1.type;
	   	$$.width = $1.width;
	}
	
	;

initializer: 
	assignment_expression
	{
		$$ = $1;
	}
	
	| '{' initializer_list '}'		
	{

	}
	
	| '{' initializer_list ',' '}'	
	{

	}
	
	;

initializer_list: 
	designation_opt initializer 	
	{

	}
	
	| initializer_list ',' designation_opt initializer 	
	{

	}
	;

designation: 
	designator_list '='
	{

	}
	;

designation_opt: 
	designation  
	{

	}
	
	| 
	{

	}
   	;

designator_list: 
	designator  
	{

	}
   	| designator_list designator  
   	{

   	}
   	;

designator: 
	'[' constant_expression ']'	 
	{

	}
	
	| '.' IDENTIFIER 				 
	{

	}
	
	;

statement: 
	labeled_statement	
	{

	}
	
	| compound_statement
	{
	   	$$ = $1;
	}
	
	| expression_statement
	{
   	  	$$ = NULL;
   	}
 	
 	| selection_statement
   	{
   	  	$$ = $1;
   	}
	
	| iteration_statement
   	{
   	  	$$ = $1;
   	}
	
	| jump_statement 		
   	{ 
   	  	$$ = $1;
   	}
	;

labeled_statement: 
	IDENTIFIER ':' statement  
	{

	}
	
	| CASE_KEYWORD constant_expression ':' statement  
	{

	}
	
	| DEFAULT_KEYWORD ':' statement  
	{

	}
	;

compound_statement: 
	'{' block_item_list_opt '}'
	{
		$$ = $2;
	}
	;

block_item_list_opt: 
	block_item_list
  	{
	 	$$ = $1;
	}
	
	| 
	{
		$$ = NULL;
	}
	;

block_item_list: 
	block_item
	{
		$$ = $1;
	}
	
	| block_item_list M block_item
	{
     	// used for list of statements
     	backPatch($1, $2);
     	$$ = $3;
     }
   	;

block_item: declaration
 	{
		$$ = NULL;
	}
	
	| statement
    {
    	$$ = $1;
    }
  	;

expression_statement: 
	expression_opt ';' 
	;

expression_opt: 
	expression
	{
		$$ = $1;
	}
	
	|
  	{
  		$$.type = new symbol_type(type_dec_BOOL);
  		$$.trueList = NULL;
  		$$.falseList = NULL;
  	}
  	;

selection_statement: 
	IF_KEYWORD '(' expression N ')' M statement N
	{
	 	// N has been inserted to take care of 'fall through' through expression
	 	// Hence, non-bool expressions are used as conditions by converting them to bool
	 	list_nodes * exit_exprss = mergeList($7, new list_nodes(quad_arr.nxt_instr));
	 	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
	 	backPatch($4, quad_arr.nxt_instr);
	 	// convert expression to bool
	 	conv2Bool(&($3));
		backPatch($3.trueList, $6);
		// all dangling gotos are merged and stored for exiting the if condition
		$$ = mergeList($3.falseList, exit_exprss);
		$$ = mergeList($$, $8);
	}
	
	| IF_KEYWORD '(' expression N ')' M statement N ELSE_KEYWORD M statement
	{
		//cout<<"debug+++++++++"<<"for if else here"<<endl;
		// N has been inserted to take care of 'fall through' through expression
		// Hence, non-bool expressions are used as conditions by converting them to bool
		list_nodes * exit_exprss = mergeList($7, $8);
		exit_exprss = mergeList(exit_exprss, new list_nodes(quad_arr.nxt_instr));
		quad_arr.emit(quad("","",opcode_dec_GOTO,""));
		backPatch($4, quad_arr.nxt_instr);
		// convert expression to bool
		conv2Bool(&($3));
		backPatch($3.trueList, $6);
		backPatch($3.falseList, $10);
		// all dangling gotos are merged and stored for exiting the if condition
		$$ = mergeList(exit_exprss, $11);
	}
	
	| SWITCH_KEYWORD '(' expression ')' statement  
	{

	}
	
	;

iteration_statement: 
	WHILE_KEYWORD '(' M expression N ')' M statement
	{
	 	// N has been inserted to take care of 'fall through' through expression
   	 	// Hence, non-bool expressions are used as conditions by converting them to bool
	 	list_nodes * exit_exprss = mergeList($8, new list_nodes(quad_arr.nxt_instr));
	 	// emit a goto after statement to goto condition again
	 	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
	 	backPatch($5, quad_arr.nxt_instr);
	 	conv2Bool(&($4));
	 	backPatch($4.trueList, $7);
	 	backPatch(exit_exprss, $3);
	 	$$ = $4.falseList;
	}

   | DO_KEYWORD M statement WHILE_KEYWORD '(' M expression ')' ';'
    {
     	// N has been inserted to take care of 'fall through' through expression
   	 	// Hence, non-bool expressions are used as conditions by converting them to bool
     	conv2Bool(&($7));
	 	backPatch($7.trueList, $2);
   	 	backPatch($3, $6);
	 	$$ = $7.falseList;
    }

   | FOR_KEYWORD '(' expression_opt ';' M expression_opt N ';' M expression_opt N ')' M statement
   {
     	// N has been inserted to take care of 'fall through' through expression
   	 	// Hence, non-bool expressions are used as conditions by converting them to bool
   	 	list_nodes * exit_exprss = mergeList($14, new list_nodes(quad_arr.nxt_instr));
   	 	// emit a goto after body of for loop to goto increment part
   	 	// and also to go a block which does conversion from expression to bool
   	 	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	 	backPatch(exit_exprss, $9);
   	 	backPatch($11, $5);
   	 	backPatch($7, quad_arr.nxt_instr);
   	 	conv2Bool(&($6));
   	 	backPatch($6.trueList, $13);
   	 	$$ = $6.falseList;
    }

   | FOR_KEYWORD '(' declaration expression_opt ';' expression_opt ')' statement 
	{
   	 	// Not Required
   	}
    
    ;

jump_statement: 
	GOTO_KEYWORD IDENTIFIER ';'		
	{

	}
	
	| CONTINUE_KEYWORD ';'			
	{

	}
	
	| BREAK_KEYWORD ';'				
	{

	}
	
	| RETURN_KEYWORD ';'
  	{
  		quad_arr.emit(quad("","",opcode_dec_RETURN,""));
  		$$ = NULL;
  	}
    
    | RETURN_KEYWORD expression ';'
    {
    	expression_type e;
    	e.type = curr_sym_table->entries[0]->type;
    	// convert the expression to the return type of the function
    	typeCheck(&e, &($2), true);
    	// TAC for return value
    	quad_arr.emit(quad($2.loc->name,"",opcode_dec_RETURN_VAL,""));
    	$$ = NULL;
    }
	
	;

translation_unit: 
	external_declaration	
	{

	}

	| translation_unit external_declaration	
	{

	}
	;

external_declaration: 
	function_definition  
	{

	}

	| declaration
	{
	  	// quad_arr.vec.pop_back();
		// quad_arr.nxt_instr--;
	}
	;

function_definition: 
	declaration_specifiers declarator declaration_list_opt compound_statement
	{
	 	// save the nestedTable of the function in the global symbol table
	 	$2.loc->nestedTable = curr_sym_table;
	 	curr_sym_table = new symbol_table();
	 	// backPatch all dangling gotos to the next instruction
	 	backPatch($4, quad_arr.nxt_instr);
	 	quad_arr.emit(quad($2.loc->name,"",opcode_dec_FUNC_END,""));
	}
    ;

declaration_list_opt: 
	declaration_list 
	{

	}
	
	| 
	{

	}
	;
		     
declaration_list: 
	declaration  				   
	{

	}
	
	| declaration_list declaration 
	{

	}
	;

M: 
{
	// Non-terminal to mark an entry point in 3-address code.
	// It stores the index of next quad to be generated and it is used in control statements
	// M.instr => Index of the quad generated at M
	cout<<"assiging M now"<<quad_arr.nxt_instr<<endl;
	$$ = quad_arr.nxt_instr;
}

;

N: 
{
	// Non-terminal to emit a goto to guard against fall through
	// It also stores the list of the index of goto
	$$ = new list_nodes(quad_arr.nxt_instr);
	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
}

;

%%

void yyerror(const char* s) {
	printf("%s", s);
}
