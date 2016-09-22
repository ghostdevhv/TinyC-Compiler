/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    IDENTIFIER = 258,
    INTEGER_CONSTANT = 259,
    FLOAT_CONSTANT = 260,
    ENUMERATION = 261,
    CHAR_CONSTANT = 262,
    STRING_LITERAL = 263,
    ELLIPSIS = 264,
    RIGHT_SHIFT_ASSIGN = 265,
    LEFT_SHIFT_ASSIGN = 266,
    ADD_ASSIGN = 267,
    SUB_ASSIGN = 268,
    MULT_ASSIGN = 269,
    DIV_ASSIGN = 270,
    MOD_ASSIGN = 271,
    AND_ASSIGN = 272,
    XOR_ASSIGN = 273,
    OR_ASSIGN = 274,
    RIGHT_SHIFT_OP = 275,
    LEFT_SHIFT_OP = 276,
    INCREMENT_OP = 277,
    DECREMENT_OP = 278,
    POINTER_OP = 279,
    LOGICAL_AND_OP = 280,
    LOGICAL_OR_OP = 281,
    LESS_EQUAL_OP = 282,
    GREATER_EQUAL_OP = 283,
    EQUAL_OP = 284,
    NOT_EQUAL_OP = 285,
    SINGLE_COMMENT = 286,
    MULTI_COMMENT = 287,
    AUTO_KEYWORD = 288,
    ENUM_KEYWORD = 289,
    RESTRICT_KEYWORD = 290,
    UNSIGNED_KEYWORD = 291,
    BREAK_KEYWORD = 292,
    EXTERN_KEYWORD = 293,
    RETURN_KEYWORD = 294,
    VOID_KEYWORD = 295,
    CASE_KEYWORD = 296,
    FLOAT_KEYWORD = 297,
    SHORT_KEYWORD = 298,
    VOLATILE_KEYWORD = 299,
    CHAR_KEYWORD = 300,
    FOR_KEYWORD = 301,
    SIGNED_KEYWORD = 302,
    WHILE_KEYWORD = 303,
    CONST_KEYWORD = 304,
    GOTO_KEYWORD = 305,
    SIZEOF_KEYWORD = 306,
    BOOL_KEYWORD = 307,
    CONTINUE_KEYWORD = 308,
    IF_KEYWORD = 309,
    STATIC_KEYWORD = 310,
    COMPLEX_KEYWORD = 311,
    DEFAULT_KEYWORD = 312,
    INLINE_KEYWORD = 313,
    STRUCT_KEYWORD = 314,
    IMAGINARY_KEYWORD = 315,
    DO_KEYWORD = 316,
    INT_KEYWORD = 317,
    SWITCH_KEYWORD = 318,
    DOUBLE_KEYWORD = 319,
    LONG_KEYWORD = 320,
    TYPEDEF_KEYWORD = 321,
    ELSE_KEYWORD = 322,
    REGISTER_KEYWORD = 323,
    UNION_KEYWORD = 324,
    UNARY = 325
  };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define INTEGER_CONSTANT 259
#define FLOAT_CONSTANT 260
#define ENUMERATION 261
#define CHAR_CONSTANT 262
#define STRING_LITERAL 263
#define ELLIPSIS 264
#define RIGHT_SHIFT_ASSIGN 265
#define LEFT_SHIFT_ASSIGN 266
#define ADD_ASSIGN 267
#define SUB_ASSIGN 268
#define MULT_ASSIGN 269
#define DIV_ASSIGN 270
#define MOD_ASSIGN 271
#define AND_ASSIGN 272
#define XOR_ASSIGN 273
#define OR_ASSIGN 274
#define RIGHT_SHIFT_OP 275
#define LEFT_SHIFT_OP 276
#define INCREMENT_OP 277
#define DECREMENT_OP 278
#define POINTER_OP 279
#define LOGICAL_AND_OP 280
#define LOGICAL_OR_OP 281
#define LESS_EQUAL_OP 282
#define GREATER_EQUAL_OP 283
#define EQUAL_OP 284
#define NOT_EQUAL_OP 285
#define SINGLE_COMMENT 286
#define MULTI_COMMENT 287
#define AUTO_KEYWORD 288
#define ENUM_KEYWORD 289
#define RESTRICT_KEYWORD 290
#define UNSIGNED_KEYWORD 291
#define BREAK_KEYWORD 292
#define EXTERN_KEYWORD 293
#define RETURN_KEYWORD 294
#define VOID_KEYWORD 295
#define CASE_KEYWORD 296
#define FLOAT_KEYWORD 297
#define SHORT_KEYWORD 298
#define VOLATILE_KEYWORD 299
#define CHAR_KEYWORD 300
#define FOR_KEYWORD 301
#define SIGNED_KEYWORD 302
#define WHILE_KEYWORD 303
#define CONST_KEYWORD 304
#define GOTO_KEYWORD 305
#define SIZEOF_KEYWORD 306
#define BOOL_KEYWORD 307
#define CONTINUE_KEYWORD 308
#define IF_KEYWORD 309
#define STATIC_KEYWORD 310
#define COMPLEX_KEYWORD 311
#define DEFAULT_KEYWORD 312
#define INLINE_KEYWORD 313
#define STRUCT_KEYWORD 314
#define IMAGINARY_KEYWORD 315
#define DO_KEYWORD 316
#define INT_KEYWORD 317
#define SWITCH_KEYWORD 318
#define DOUBLE_KEYWORD 319
#define LONG_KEYWORD 320
#define TYPEDEF_KEYWORD 321
#define ELSE_KEYWORD 322
#define REGISTER_KEYWORD 323
#define UNION_KEYWORD 324
#define UNARY 325

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 7 "ass5_13CS30015.y" /* yacc.c:1909  */

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

#line 208 "y.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
