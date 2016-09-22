#include "y.tab.h"
#include <stdio.h>
extern int yylex();
extern char *yytext;

int main()
{
  int token;
  while((token = yylex())!=0)
  {
    switch(token){
    case AUTO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case ENUM_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case RESTRICT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case UNSIGNED_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case BREAK_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case EXTERN_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case RETURN_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case VOID_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CASE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case FLOAT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SHORT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case VOLATILE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CHAR_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case FOR_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SIGNED_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case WHILE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CONST_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case GOTO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SIZEOF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case BOOL_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case CONTINUE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case IF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case STATIC_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case COMPLEX_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case DEFAULT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case INLINE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case STRUCT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case IMAGINARY_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case DO_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case INT_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case SWITCH_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case DOUBLE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case LONG_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case TYPEDEF_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case ELSE_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case REGISTER_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case UNION_KEYWORD : printf("<KEYWORD, %d, %s>\n",token,yytext);
      break;
    case IDENTIFIER : printf("<IDENTIFIER, %d, %s>\n",token,yytext);
      break;
    case INTEGER_CONSTANT : printf("<INTEGER, %d, %s>\n",token,yytext);
      break;
    case FLOAT_CONSTANT :  printf("<FLOAT, %d, %s>\n",token,yytext);
      break;
    case ENUMERATION : printf("<ENUMERATION, %d, %s>\n",token,yytext);
      break;
    case CHAR_CONSTANT : printf("<CHARACTER CONSTANT, %d, %s>\n",token,yytext);
      break;
    case STRING_LITERAL : printf("<STRING LITERAL, %d, %s>\n",token,yytext);
      break;
    case PUNCTUATOR : printf("<PUNCTUATOR, %d, %s >\n",token, yytext); 
      break;
  case SINGLE_COMMENT : printf("<SINGLE COMMENT, %d, %s>\n",token,yytext);
      break;
    case MULTI_COMMENT : printf("<MULTI COMMENT, %d, %s>\n",token,yytext);
      break;
    }

  }
return 0;

}
