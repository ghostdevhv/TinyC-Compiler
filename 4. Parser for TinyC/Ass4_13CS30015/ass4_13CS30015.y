/* C Declarations and Definitions */

%{ 
    
    #include<iostream>
    using namespace std;
    extern int yylex();
    void yyerror(string s);
%}

%union 
{
    int intval;
    float floatval;
    char *charval;
}

// Define all the tokens

%token <intval> IDENTIFIER;
%token <intval>  INTEGER_CONSTANT;
%token <floatval> FLOAT_CONSTANT;
%token <intval> ENUMERATION;
%token <charval> CHAR_CONSTANT;
%token <charval> STRING_LITERAL;

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

%expect 1
%start translation_unit

%%

/* Phase Structure Grammer of C */


/* ----------------- 1. Expressions -------------------  */


// Primary-Expressions
primary_expression: 
    IDENTIFIER | INTEGER_CONSTANT | FLOAT_CONSTANT | ENUMERATION
    | CHAR_CONSTANT | STRING_LITERAL | '(' expression ')' ;

//Postfix-Expressions    
postfix_expression: 
    primary_expression | postfix_expression '[' expression ']'
    | postfix_expression '(' ')' | postfix_expression '(' argument_expression_list ')'
    | postfix_expression '.' IDENTIFIER | postfix_expression POINTER_OP IDENTIFIER
    | postfix_expression INCREMENT_OP | postfix_expression DECREMENT_OP
    | '(' type_name ')' '{' initializer_list '}' 
    | '(' type_name ')' '{' initializer_list ',' '}' ;

// Argument-Expression-List
argument_expression_list: 
    assignment_expression | argument_expression_list ',' assignment_expression ;

// Unary-Expression
unary_expression: 
    postfix_expression | INCREMENT_OP unary_expression | DECREMENT_OP unary_expression
    | unary_operator cast_expression | SIZEOF_KEYWORD unary_expression
    | SIZEOF_KEYWORD '(' type_name ')' ;

// Unary-Operator
unary_operator: 
    '&' | '*' | '+' | '-' | '~' | '!' ;

// Cast-Expression
cast_expression: 
    unary_expression | '(' type_name ')' cast_expression ;

// MultiplicativeExpression
multiplicative_expression: 
    cast_expression | multiplicative_expression '*' cast_expression
    | multiplicative_expression '/' cast_expression
    | multiplicative_expression '%' cast_expression ;

// Additive-Expression
additive_expression: 
    multiplicative_expression | additive_expression '+' multiplicative_expression
    | additive_expression '-' multiplicative_expression ;

// Shift-Expression
shift_expression: 
    additive_expression | shift_expression LEFT_SHIFT_OP additive_expression
    | shift_expression RIGHT_SHIFT_OP additive_expression ;

// Relational-Expression    
relational_expression: 
    shift_expression | relational_expression '<' shift_expression
    | relational_expression '>' shift_expression
    | relational_expression LESS_EQUAL_OP shift_expression
    | relational_expression GREATER_EQUAL_OP shift_expression ;

// Equality-Expression    
equality_expression: 
    relational_expression | equality_expression EQUAL_OP relational_expression
    | equality_expression NOT_EQUAL_OP relational_expression ;

// And-Expression
AND_expression: 
    equality_expression | AND_expression '&' equality_expression ;

// Exclusive-Or-Operation
exclusive_OR_expression: 
    AND_expression | exclusive_OR_expression '^' AND_expression ;

// Inclusive-Or-Expression
inclusive_OR_expression: 
    exclusive_OR_expression | inclusive_OR_expression '|' exclusive_OR_expression ;

// Logical-And-Expression
logical_AND_expression: 
    inclusive_OR_expression | logical_AND_expression LOGICAL_AND_OP inclusive_OR_expression ;

// Logical-Or-Expression
logical_OR_expression: 
    logical_AND_expression | logical_OR_expression LOGICAL_OR_OP logical_AND_expression ;

// Conditional-Expression
conditional_expression: 
    logical_OR_expression | logical_OR_expression '?' expression ':' conditional_expression ;

// Assignment-Expression    
assignment_expression: 
    conditional_expression | unary_expression assignment_operator assignment_expression ;

// Assignment-Operator
assignment_operator: 
    '=' | MULT_ASSIGN | DIV_ASSIGN | MOD_ASSIGN | ADD_ASSIGN | SUB_ASSIGN | LEFT_SHIFT_ASSIGN
    | RIGHT_SHIFT_ASSIGN | AND_ASSIGN | XOR_ASSIGN | OR_ASSIGN ;

// Expression    
expression: 
    assignment_expression | expression ',' assignment_expression ;

// Constant-Expression    
constant_expression: 
    conditional_expression ;


/* -------------------- 2. DECLARATIONS -------------------------- */    


// Declaration
declaration: 
    declaration_specifiers ';' | declaration_specifiers init_declarator_list ';' ;

// Declaration-Specifiers
declaration_specifiers: 
    storage_class_specifier | storage_class_specifier declaration_specifiers
    | type_specifier | type_specifier declaration_specifiers | type_qualifier
    | type_qualifier declaration_specifiers | function_specifier
    | function_specifier declaration_specifiers ;

// Init-Declarator-List
init_declarator_list: 
    init_declarator | init_declarator_list ',' init_declarator ;

// Init-Declarator
init_declarator: 
    declarator | declarator '=' initializer ;

// Storage-Class-Specifier    
storage_class_specifier: 
    TYPEDEF_KEYWORD | EXTERN_KEYWORD | STATIC_KEYWORD | AUTO_KEYWORD | REGISTER_KEYWORD ;

// Type-Specifier
type_specifier: 
    VOID_KEYWORD | CHAR_KEYWORD | SHORT_KEYWORD | INT_KEYWORD | LONG_KEYWORD
    | FLOAT_KEYWORD | DOUBLE_KEYWORD | SIGNED_KEYWORD | UNSIGNED_KEYWORD
    | BOOL_KEYWORD | COMPLEX_KEYWORD | IMAGINARY_KEYWORD | enum_specifier ;

// Specifier-Qualifier-List
specifier_qualifier_list: 
    type_specifier specifier_qualifier_list | type_specifier
    | type_qualifier specifier_qualifier_list | type_qualifier ;

// Enum-Specifier    
enum_specifier: 
    ENUM_KEYWORD '{' enumerator_list '}' | ENUM_KEYWORD IDENTIFIER '{' enumerator_list '}'
    | ENUM_KEYWORD '{' enumerator_list ',' '}' | ENUM_KEYWORD IDENTIFIER '{' enumerator_list ',' '}'
    | ENUM_KEYWORD IDENTIFIER ;

// Enumerator-List    
enumerator_list: 
    enumerator | enumerator_list ',' enumerator ;

// Enumerator    
enumerator: 
    enumeration_constant | enumeration_constant '=' constant_expression ;

// Enumeration-Constant    
enumeration_constant: 
    IDENTIFIER ;

// Type-Qualifier
type_qualifier: 
    CONST_KEYWORD | RESTRICT_KEYWORD | VOLATILE_KEYWORD ;

// Function-Specifier
function_specifier
    : INLINE_KEYWORD;

// Declarator
declarator: 
    pointer direct_declarator | direct_declarator ;

// Direct-Declarator
direct_declarator : 
    IDENTIFIER | '(' declarator ')'
	| direct_declarator '[' type_qualifier_list assignment_expression ']'
    | direct_declarator '[' assignment_expression ']'
    | direct_declarator '[' type_qualifier_list ']' | direct_declarator '[' ']'
    | direct_declarator '[' STATIC_KEYWORD type_qualifier_list assignment_expression ']'
    | direct_declarator '[' STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' type_qualifier_list STATIC_KEYWORD assignment_expression ']'
	| direct_declarator '[' type_qualifier_list '*' ']' | direct_declarator '[' '*' ']'
	| direct_declarator '(' parameter_type_list ')' | direct_declarator '(' identifier_list ')'
    | direct_declarator '(' ')' ;

// Pointer
pointer: 
	'*' | '*' type_qualifier_list | '*' pointer | '*' type_qualifier_list pointer ;

// Type-Qualifier-List
type_qualifier_list: 
	type_qualifier | type_qualifier_list type_qualifier ;

// Parameter-Type-List
parameter_type_list: 
	parameter_list | parameter_list ',' ELLIPSIS ;

// Parameter-List    
parameter_list: 
	parameter_declaration | parameter_list ',' parameter_declaration ;

// Parameter-Declaration    
parameter_declaration: 
	declaration_specifiers declarator | declaration_specifiers ;

// Identifier-List
identifier_list: 
	IDENTIFIER | identifier_list ',' IDENTIFIER ;

// Type-Name
type_name: 
	specifier_qualifier_list ;

// Initializer
initializer: 
	assignment_expression | '{' initializer_list '}' | '{' initializer_list ',' '}' ;

// Initializer-List
initializer_list: 
	initializer | initializer_list ',' initializer | designation initializer
    | initializer_list ',' designation initializer ;

// Designation
designation: 
	designator_list '=' ;

// Designator_List
designator_list: 
	designator | designator_list designator ;

// Designator    
designator: 
	'[' constant_expression ']' | '.' IDENTIFIER ;


/* -------------------------- 3. STATEMENTS -------------------------------------- */


// Statement
statement: 
	labeled_statement | compound_statement | expression_statement | selection_statement
    | iteration_statement | jump_statement ;

// Labeled-Statement    
labeled_statement: 
	IDENTIFIER ':' statement | CASE_KEYWORD constant_expression ':' statement
    | DEFAULT_KEYWORD ':' statement ;

// Compound-Statement
compound_statement:
	'{' block_item_list '}' |'{' '}' ;

// Block-Item-List
block_item_list: 
	block_item | block_item_list block_item ;

// Block-Item    
block_item: 
	declaration | statement ;

// Expression-Statement    
expression_statement: 
	';' | expression ';' ;

// Selection-Statement    
selection_statement: 
	IF_KEYWORD '(' expression ')' statement
    | IF_KEYWORD '(' expression ')' statement ELSE_KEYWORD statement
    | SWITCH_KEYWORD '(' expression ')' statement ;

// Iteration-Statement   
iteration_statement: 
	WHILE_KEYWORD '(' expression ')' statement
	| DO_KEYWORD statement WHILE_KEYWORD '(' expression ')' ';'
    | FOR_KEYWORD '(' expression_statement expression_statement ')' statement
    | FOR_KEYWORD '(' expression_statement expression_statement expression ')' statement 
    | FOR_KEYWORD '(' declaration expression ';' expression ')' statement
    | FOR_KEYWORD '(' declaration ';' expression ')' statement
    | FOR_KEYWORD '(' declaration expression ';' ')' statement
    | FOR_KEYWORD '(' declaration ';' ')' statement

// Jump-Statement    
jump_statement: 
	GOTO_KEYWORD IDENTIFIER ';' | CONTINUE_KEYWORD ';' | BREAK_KEYWORD ';'
    | RETURN_KEYWORD ';' | RETURN_KEYWORD expression ';' ;


/* ------------------- 3. EXTERNAL DEFINITIONS ----------------------------- */


// Translation-Unit
translation_unit: 
	external_declaration | translation_unit external_declaration ;

// External-Declaration
external_declaration: 
	function_definition | declaration ;

// Function-Definition
function_definition: 
	declaration_specifiers declarator declaration_list compound_statement
    | declaration_specifiers declarator compound_statement ;

// Declaration-List   
declaration_list:
	declaration |declaration_list declaration ;


%%
void yyerror(string s) {
	cout<<s<<endl;
}




