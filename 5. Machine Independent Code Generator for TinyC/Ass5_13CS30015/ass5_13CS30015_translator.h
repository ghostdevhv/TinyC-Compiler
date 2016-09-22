#ifndef __TRANSLATOR_H
#define __TRANSLATOR_H

#include<bits/stdc++.h>
using namespace std;

#define SIZE_OF_INT    4
#define SIZE_OF_DOUBLE  8
#define SIZE_OF_CHAR    1
#define SIZE_OF_VOID    0
#define SIZE_OF_PTR     4
#define SIZE_OF_BOOL    1
#define SIZE_OF_FUNC    0


// Enum for declaring all the basic types
typedef enum{
    type_dec_BOOL = 0,
    type_dec_INT,
    type_dec_CHAR,
    type_dec_DOUBLE,
    type_dec_ARR,
    type_dec_FUNC,
    type_dec_VOID,
    type_dec_PTR
}type_declare;

// Enum for declaring all the opcode types
typedef enum{

/* -------------------- BINARY ASSIGNMENT INSTRUCTIONS -------------------- */
	
    // Arithmetic operators
	opcode_dec_PLUS=1,
	opcode_dec_MINUS,
	opcode_dec_MULT,
	opcode_dec_DIVIDE,
	opcode_dec_MODULO,
	
	// Shift operators
	opcode_dec_L_SHIFT,
	opcode_dec_R_SHIFT,
	
	// Relational (Boolean)
	// opcode_dec_LOGICAL_AND,
	// opcode_dec_LOGICAL_OR,
	
	// Bit operators
	opcode_dec_BITWISE_AND,
	opcode_dec_BITWISE_OR,
	opcode_dec_BITWISE_XOR,

	// Unary operators
	opcode_dec_UNARY_MINUS,
//	opcode_dec_UNARY_PLUS,
	opcode_dec_BITWISE_COMPLEMENT,
//	opcode_dec_LOGICAL_NOT,

/* -------------------- COPY ASSIGNMENT INSTRUCTIONS -------------------- */
	
    // Copy Assignment Instruction
	opcode_dec_ASSIGN,

/* -------------------- UNCONDITIONAL JUMP -------------------- */	
    // Unconditional Jump
	opcode_dec_GOTO,

/* -------------------- CONDITIONAL JUMP -------------------- */
	
    // value-Based
	opcode_dec_IF_EXPRESSION,
	opcode_dec_IF_NOT_EXPRESSION,

    // Comparison-Based
	opcode_dec_LESS_THAN,
	opcode_dec_GREATER_THAN,
	opcode_dec_LESS_OR_EQUAL,
	opcode_dec_GRTER_OR_EQUAL,
	opcode_dec_EQUAL,
	opcode_dec_NOT_EQUAL,

/* -------------------- PROCEDURE CALL -------------------- */
	opcode_dec_PARAM,
	opcode_dec_CALL,

/* -------------------- RETURN VALUE -------------------- */
	opcode_dec_RETURN,
	opcode_dec_RETURN_VAL,

/* -------------------- INDEXED COPY INSTRUCTIONS -------------------- */
	opcode_dec_L_INDEX,
	opcode_dec_R_INDEX,

/* -------------------- ADDRESS AND POINTER ASSIGNMENT INSTRUCTIONS -------------------- */
	opcode_dec_L_VAL_AT,
	opcode_dec_R_VAL_AT,
	opcode_dec_ADDRESS,

/* -------------------- TYPE CONVERSION -------------------- */

	opcode_dec_INT2DBL,
	opcode_dec_DBL2INT,
	opcode_dec_INT2CHAR,
	opcode_dec_CHAR2INT,

	opcode_dec_FUNC_START,
	opcode_dec_FUNC_END
}opcode_declare;

// class for quad
class quad{
public:
	opcode_declare op;
	string arg1,arg2,result;
	void print();

	quad(string res, string s1, opcode_declare o, string s2);
	quad(string res, int n, opcode_declare o);
	quad(string res, double d, opcode_declare o);
	quad(string res, char c, opcode_declare o);

	void setTarget(int addr);
};


// class for array of quads
class quad_array{
public:

	vector<quad> vec;
    int nxt_instr;
    symbol_type * type;
    int width;

    void emit(quad q);
    void print();
};


class symbol_type;

extern quad_array quad_arr;

// class for storing all possible types
class symbol_type{
public:
    type_declare type_d;
    int size;
    symbol_type * next;
    void print();
    symbol_type();
    symbol_type(type_declare b);
    symbol_type(const symbol_type &t);
    int getSize();

};

// union for storing the initial value of symbol entries
union init_val {
    int intVal;
    double doubleVal;
    char charVal;
};

class symbol_table;

class symbol_entry{
public:

	string name;
	symbol_type * type;
    init_val init;
    string scope;
    bool was_Init;
    int size;
    int offset;
    symbol_table * nestedTable;

    symbol_entry(string s = "local");

    void print();
};

extern int tempvarCount;

class symbol_table{
public:

    int offset;
    string table_name;
    int sizeLocal;

    int sizeParam;

    vector<symbol_entry *> entries;

    symbol_table * parent;

    symbol_table();

    symbol_table(string s);

    symbol_entry * lookUp(string name);
    symbol_entry * genTemp(symbol_type * type);

    void update(symbol_entry * sy, symbol_type * t, int _size);

    void update(symbol_entry * sy, init_val init);

    void print();

    bool isPresent(string s_name);
};

extern symbol_table * glob_sym_table;
extern symbol_table * curr_sym_table;


// node for a list, stores the index of quad
class list_node{
public:

    int Idx;
    list_node * next;

    list_node(int idx);

    list_node();

};

// List of nodes, used for truelist, false list, nextlist etc
class list_nodes {
public:

    int quad_Idx;
    list_node * head;
    list_node * tail;

    list_nodes(int idx);

    list_nodes();

    void clear();

    void print();

};

list_nodes * mergeList(list_nodes * l1, list_nodes * l2);

string i2s(int n);

// attribute for expression type non terminals
class expression_type{
public:

    list_nodes * trueList;
 
    list_nodes * falseList;

    symbol_entry * loc;

    symbol_entry * array;
    symbol_type * type;

    bool isArrayType;
    bool isPtrType;

    bool isString;
};

// attribute for declaration type non terminals
class declaration_type{
public:
    symbol_type * type;
    int width;
};

// attribute for identifier
class id_type{
public:

    string * strVal;
    symbol_entry * loc;
};

bool areEqual(symbol_type * t1, symbol_type * t2);

void conv2Bool(expression_type * e);

void convBool2Int(expression_type * e);

void backPatch(list_nodes * & p, int addr);

bool typeCheck(expression_type * e1, expression_type * e2, bool isAssignment);

bool checkParams(expression_type e, vector <expression_type * > * v);

#endif