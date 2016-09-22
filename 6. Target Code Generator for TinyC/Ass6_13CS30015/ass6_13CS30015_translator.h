#ifndef ASS6_13CS300415_TRANSLATOR_H
#define ASS6_13CS30015_TRANSLATOR_H

#include<bits/stdc++.h>
using namespace std;


using namespace std;

#define SIZE_OF_INT     8
#define SIZE_OF_DOUBLE  8
#define SIZE_OF_CHAR    8
#define SIZE_OF_VOID    0
#define SIZE_OF_PTR     8
#define SIZE_OF_BOOL    1
#define SIZE_OF_FUNC    0


// using enum to define the basic types
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

// enum for supported opcodes
typedef enum{
    // For Binary Assignment Instructions
    // Arithmetic
    opcode_dec_PLUS=1,
    opcode_dec_MINUS,
    opcode_dec_MULT,
    opcode_dec_DIVIDE,
    opcode_dec_MODULO,
    
    // Shift
    opcode_dec_LEFT_SHIFT,
    opcode_dec_RIGHT_SHIFT,
    
    // Relational (Boolean)
    // opcode_dec_LOGICAL_AND,
    // opcode_dec_LOGICAL_OR,
    
    // Bitwise
    opcode_dec_BITWISE_AND,
    opcode_dec_BITWISE_OR,
    opcode_dec_BITWISE_XOR,

    // Unary 
    opcode_dec_UNARY_MINUS,
//  opcode_dec_UNARY_PLUS,
    opcode_dec_BITWISE_COMPLEMENT,
//  opcode_dec_LOGICAL_NOT,

    // Copy Assignment Instruction
    opcode_dec_ASSIGN,

    // Unconditional Jump
    opcode_dec_GOTO,

    // Conditional Jump
    opcode_dec_IF_EXP,
    opcode_dec_IF_NOT_EXP,
    opcode_dec_LESS_THAN,
    opcode_dec_GREATER_THAN,
    opcode_dec_LESS_OR_EQUAL,
    opcode_dec_GRTER_OR_EQUAL,
    opcode_dec_EQUAL,
    opcode_dec_NOT_EQUAL,

    // Procedure Call
    opcode_dec_PARAM,
    opcode_dec_CALL,

    // Return Value
    opcode_dec_RETURN,
    opcode_dec_RETURN_VAL,

    // Array
    // opcode for instruction of x[z] = y type
    opcode_dec_L_INDEX,
    // opcode for instruction of x = y[z] type
    opcode_dec_R_INDEX,

    // Address and Pointer Assignment Instruction
    opcode_dec_L_VAL_AT,
    opcode_dec_R_VAL_AT,
    opcode_dec_ADDRESS,

    // type conversions opcode
    opcode_dec_INT2DBL,
    opcode_dec_DBL2INT,
    opcode_dec_INT2CHAR,
    opcode_dec_CHAR2INT,

    opcode_dec_FUNC_START,
    opcode_dec_FUNC_END
}opcode_declare;


// structure for a individual quad
struct quad{
    opcode_declare op;
    string arg1,arg2,result;

    int labelIdx;

    void print();

    quad(string res, string s1, opcode_declare o, string s2);
    quad(string res, int n, opcode_declare o);
    quad(string res, double d, opcode_declare o);
    quad(string res, char c, opcode_declare o);

    void setTarget(int addr);

    void genTargetCode();
};

// structure for type
struct symbol_type;

// struct for array of quads
struct quad_array{
    // List of Quads
    vector<quad> vec;
    // Index of next quad to be generated i.e. global pointer to array of quads.
    int nxt_instr;
    // pointer of current type
    symbol_type * type;
    // width of current type
    int width;
    
    void emit(quad q);
    void print();
};

// quad_arr is the variable externed so that it is used to for referencing to array of quads
extern quad_array quad_arr;

// structure for storing all possible types
struct symbol_type{
    // This is the basic type like int,double,etc.
    type_declare type_d;
    // size of this type
    int size;
    // next in case of pointer and arrays
    symbol_type * next;
    // function to print the specific type like int,double,etc.
    void print();
    // Constructors
    symbol_type();
    symbol_type(type_declare b);
    // Copy Constuctor
    symbol_type(const symbol_type &t);
    // Function to get the size of type
    int getSize();

};

// union for storing the initial value of symbol entries
union init_val {
    int intVal;
    double doubleVal;
    char charVal;
};

// structure for symbol table
struct symbol_table;

// structure for symbol table entry
struct symbol_entry{
    // name of the variable or function
    string name;
    // type
    symbol_type * type;
    // initial value if initialised
    init_val init;
    // scope - local, temp, global
    string scope;
    // if this was initialised
    bool was_Init;
    // size
    int size;
    // offset w.r.t its symbol table
    int offset;
    // nested table (in case of functions)
    symbol_table * nestedTable;

    // constructor with default argument "local"
    symbol_entry(string s = "local");

    // function to print the symbol table entry
    void print();
};

// count of temporary variables generated
extern int tempvarCount;

// number of functions
extern int func_count;

// structure for Symbol Table
class symbol_table{
public:
    // offset value
    int offset;
    // name of the table
    string table_name;
    // list of entries of the table
    vector<symbol_entry *> entries;

    // list of entries of table
    int sizeLocal;

    int sizeParam;

    // Constructors
    symbol_table();
    symbol_table(string s);

    // Functions for maintenance or creation of Symbol table Entries
    symbol_entry * lookUp(string name);
    symbol_entry * genTemp(symbol_type * type);

    // Function to update the symbol table entry sy
    void update(symbol_entry * sy, symbol_type * t, int _size);
    void update(symbol_entry * sy, init_val init);

    // Function to print symbol table
    void print();

    // Function to see whether symbol table entry named s_name exits or not
    bool isPresent(string s_name);
};

// Variables for global symbol table and current symbol table
extern symbol_table * glob_sym_table;
extern symbol_table * curr_sym_table;

// Two variables for handling the labels. It stores information of labels.
extern map <string, int> uniqueLabels;
extern vector <string> strLabels;

// node for a list, stores the index of quad
class list_node{
public:
    // index of the quad
    int Idx;
    // pointer of the next node
    list_node * next;

    // Constructors
    list_node(int idx);
    list_node();
};

// List of nodes, used for truelist, false list, nextlist etc
class list_nodes {
public:
    // index of the quad
    int quad_Idx;
    // head of the list (first node)
    list_node * head;
    // tail of the list (last node)
    list_node * tail;

    // Constructors
    list_nodes(int idx);
    list_nodes();

    // Function to clear the list
    void clear();

    // Function to print the list used for debugging of nextlist,etc.
    void print();

};

// Function to merge lists l1 and l2 
list_nodes * mergeList(list_nodes * l1, list_nodes * l2);

// Function to convert integer into string
string i2s(int n);

// attribute for expression type non terminals
class expression_type{
public:
    // true list
    list_nodes * trueList;
    // false list
    list_nodes * falseList;
    // pointer to entry in symbol table
    symbol_entry * loc;
    // pointer to entry of base array in symbol table
    symbol_entry * array;
    // pointer of type
    symbol_type * type;
    // flag to store if this is of array type
    bool isArrayType;
    // flag to store if this is of pointer type
    bool isPtrType;
    // flag to store whether it is of string type
    bool isString;

    int strLabel;
};

// attribute for declaration type non terminals
class declaration_type{
public:
    // Type of attribute of declaration used for assigning types to variables
    symbol_type * type;
    // Width of the given type detected
    int width;
};

// attribute for identifier
class id_type{
public:
    // name
    string * strVal;
    // pointer to entry in symbol table
    symbol_entry * loc;
};

// Function to see whether types t1 and t2 are equal or not
bool areEqual(symbol_type * t1, symbol_type * t2);

// Convert expression attributes to bool
void conv2Bool(expression_type * e);

// Convert to integer
void convBool2Int(expression_type * e);

// Function used to put index addr into target of quads with thier quad numbers in list pointed to by p
void backPatch(list_nodes * & p, int addr);

// Checking the type of two attribute types
bool typeCheck(expression_type * e1, expression_type * e2, bool isAssignment);

// Function for checking the parameters of the function called
bool checkParams(expression_type e, vector <expression_type * > * v);

#endif