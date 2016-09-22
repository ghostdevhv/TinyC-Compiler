/* C Declarations and Definitions */
%{ 
	#include <stdio.h>
	
	extern int yylex();
	void yyerror(char *s);
%}

%union {
  int intval;
  float floatval;
  char *charval;
}

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

%token <intval> IDENTIFIER;
%token <intval>  INTEGER_CONSTANT;
%token <floatval> FLOAT_CONSTANT;
%token <intval> ENUMERATION;
%token <charval> CHAR_CONSTANT;
%token <charval> STRING_LITERAL;
%token PUNCTUATOR;

%%

statement : ;

%%

void yyerror(char *s) 
{
	printf("%s",s);
}

