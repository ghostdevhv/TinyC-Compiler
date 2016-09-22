/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "ass5_13CS30015.y" /* yacc.c:339  */
 
#include "ass5_13CS30015_translator.h"
extern int yylex();
void yyerror(const char* s);

#line 72 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "y.tab.h".  */
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
#line 7 "ass5_13CS30015.y" /* yacc.c:355  */

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

#line 266 "y.tab.c" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 281 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  48
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   1074

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  95
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  76
/* YYNRULES -- Number of rules.  */
#define YYNRULES  211
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  361

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   325

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    85,     2,     2,     2,    86,    83,     2,
      75,    76,    72,    70,    82,    71,    79,    73,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    92,    94,
      87,    93,    88,    91,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    77,     2,    78,    89,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    80,    90,    81,    84,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    74
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,   161,   161,   180,   196,   214,   230,   237,   245,   252,
     285,   317,   319,   321,   344,   367,   369,   373,   379,   386,
     393,   402,   407,   430,   452,   571,   576,   583,   588,   593,
     598,   603,   608,   614,   618,   622,   639,   663,   687,   713,
     718,   726,   737,   742,   764,   788,   793,   803,   813,   823,
     835,   840,   850,   862,   867,   889,   894,   916,   921,   943,
     948,   959,   964,   975,   980,  1003,  1008,  1053,  1054,  1059,
    1064,  1069,  1074,  1079,  1084,  1089,  1094,  1099,  1106,  1111,
    1119,  1127,  1139,  1145,  1152,  1157,  1166,  1171,  1178,  1185,
    1191,  1196,  1203,  1208,  1223,  1227,  1232,  1237,  1244,  1250,
    1256,  1261,  1267,  1272,  1277,  1282,  1287,  1292,  1297,  1302,
    1307,  1314,  1320,  1328,  1335,  1341,  1346,  1350,  1357,  1363,
    1369,  1373,  1380,  1385,  1392,  1397,  1402,  1409,  1416,  1421,
    1488,  1497,  1502,  1576,  1581,  1586,  1591,  1609,  1616,  1622,
    1628,  1637,  1643,  1649,  1655,  1663,  1668,  1677,  1682,  1690,
    1695,  1702,  1707,  1714,  1720,  1727,  1732,  1739,  1749,  1754,
    1759,  1767,  1772,  1779,  1786,  1792,  1798,  1802,  1809,  1814,
    1822,  1827,  1832,  1837,  1842,  1847,  1854,  1859,  1864,  1871,
    1878,  1884,  1890,  1895,  1903,  1908,  1915,  1919,  1925,  1933,
    1948,  1965,  1973,  1987,  1997,  2013,  2021,  2026,  2031,  2036,
    2042,  2056,  2061,  2068,  2073,  2081,  2093,  2099,  2105,  2110,
    2117,  2128
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "ENUMERATION", "CHAR_CONSTANT", "STRING_LITERAL",
  "ELLIPSIS", "RIGHT_SHIFT_ASSIGN", "LEFT_SHIFT_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "MULT_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "RIGHT_SHIFT_OP", "LEFT_SHIFT_OP",
  "INCREMENT_OP", "DECREMENT_OP", "POINTER_OP", "LOGICAL_AND_OP",
  "LOGICAL_OR_OP", "LESS_EQUAL_OP", "GREATER_EQUAL_OP", "EQUAL_OP",
  "NOT_EQUAL_OP", "SINGLE_COMMENT", "MULTI_COMMENT", "AUTO_KEYWORD",
  "ENUM_KEYWORD", "RESTRICT_KEYWORD", "UNSIGNED_KEYWORD", "BREAK_KEYWORD",
  "EXTERN_KEYWORD", "RETURN_KEYWORD", "VOID_KEYWORD", "CASE_KEYWORD",
  "FLOAT_KEYWORD", "SHORT_KEYWORD", "VOLATILE_KEYWORD", "CHAR_KEYWORD",
  "FOR_KEYWORD", "SIGNED_KEYWORD", "WHILE_KEYWORD", "CONST_KEYWORD",
  "GOTO_KEYWORD", "SIZEOF_KEYWORD", "BOOL_KEYWORD", "CONTINUE_KEYWORD",
  "IF_KEYWORD", "STATIC_KEYWORD", "COMPLEX_KEYWORD", "DEFAULT_KEYWORD",
  "INLINE_KEYWORD", "STRUCT_KEYWORD", "IMAGINARY_KEYWORD", "DO_KEYWORD",
  "INT_KEYWORD", "SWITCH_KEYWORD", "DOUBLE_KEYWORD", "LONG_KEYWORD",
  "TYPEDEF_KEYWORD", "ELSE_KEYWORD", "REGISTER_KEYWORD", "UNION_KEYWORD",
  "'+'", "'-'", "'*'", "'/'", "UNARY", "'('", "')'", "'['", "']'", "'.'",
  "'{'", "'}'", "','", "'&'", "'~'", "'!'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "':'", "'='", "';'", "$accept", "primary_expression",
  "postfix_expression", "argument_expression_list_opt",
  "argument_expression_list", "unary_expression", "unary_operator",
  "cast_expression", "multiplicative_expression", "additive_expression",
  "shift_expression", "relational_expression", "equality_expression",
  "AND_expression", "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "assignment_operator",
  "expression", "constant_expression", "declaration",
  "init_declarator_list_opt", "declaration_specifiers",
  "declaration_specifiers_opt", "init_declarator_list", "init_declarator",
  "storage_class_specifier", "type_specifier", "specifier_qualifier_list",
  "specifier_qualifier_list_opt", "enum_specifier", "identifier_opt",
  "enumerator_list", "enumerator", "type_qualifier", "function_specifier",
  "declarator", "direct_declarator", "parameter_type_list_opt",
  "identifier_list_opt", "type_qualifier_list_opt",
  "assignment_expression_opt", "pointer", "type_qualifier_list",
  "parameter_type_list", "parameter_list", "parameter_declaration",
  "identifier_list", "type_name", "initializer", "initializer_list",
  "designation", "designation_opt", "designator_list", "designator",
  "statement", "labeled_statement", "compound_statement",
  "block_item_list_opt", "block_item_list", "block_item",
  "expression_statement", "expression_opt", "selection_statement",
  "iteration_statement", "jump_statement", "translation_unit",
  "external_declaration", "function_definition", "declaration_list_opt",
  "declaration_list", "M", "N", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
      43,    45,    42,    47,   325,    40,    41,    91,    93,    46,
     123,   125,    44,    38,   126,    33,    37,    60,    62,    94,
     124,    63,    58,    61,    59
};
# endif

#define YYPACT_NINF -221

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-221)))

#define YYTABLE_NINF -212

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     974,  -221,    55,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
    -221,  -221,  -221,    33,   974,   974,  -221,   974,   974,   295,
    -221,  -221,   -19,   -15,  -221,    91,    33,    24,    -7,  -221,
     899,    79,     7,  -221,  -221,  -221,  -221,  -221,  -221,  -221,
     125,  -221,    50,    91,    65,  -221,    33,   618,  -221,    33,
      75,   974,   863,    -9,    79,    73,   -40,  -221,  -221,  -221,
    -221,  -221,    93,  -221,  -221,  -221,  -221,  -221,   714,   714,
     737,  -221,  -221,  -221,   523,   -62,  -221,  -221,  -221,  -221,
     129,   231,   788,  -221,   -34,    67,   158,    44,   153,    85,
      99,   104,   108,    23,  -221,  -221,  -221,   229,  -221,  -221,
    -221,    33,   121,   127,  -221,   131,  -221,   133,    91,   810,
     140,   788,  -221,    28,   523,  -221,  -221,   523,  -221,  -221,
     -26,  1009,  -221,  1009,   144,   788,   204,   110,  -221,   618,
     -56,  -221,  -221,  -221,   219,   788,   788,   225,  -221,  -221,
    -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,  -221,   788,
    -221,  -221,   788,   788,   788,   788,   788,   788,   788,   788,
     788,   788,   788,   788,   788,   788,   788,   788,  -221,  -221,
     148,   143,   146,   303,   788,   179,   181,   254,   165,   185,
     196,  -221,   221,   216,  -221,  -221,  -221,  -221,   222,   224,
    -221,  -221,   208,  -221,  -221,  -221,  -221,  -221,  -221,   938,
     312,   788,   238,  -221,   239,   788,  -221,  -221,  -221,  -221,
     242,   243,  -221,   788,  -221,  -221,  -221,   692,   244,  -221,
    -221,    36,  -221,  -221,  -221,  -221,   245,   250,  -221,   -60,
    -221,  -221,  -221,  -221,  -221,   -34,   -34,    67,    67,   158,
     158,   158,   158,    44,    44,   153,    85,    99,   788,   788,
    -221,   596,  -221,  -221,   -66,   228,   450,  -221,   233,  -221,
     788,   596,   596,   788,  -221,   376,  -221,  -221,  -221,  -221,
     256,  -221,  -221,   258,   261,   261,  -221,   -62,  -221,  -221,
    -221,   618,  -221,   788,  -221,   104,   108,   788,  -221,  -221,
     596,   788,   249,   788,  -221,   216,  -221,   297,   -23,  -221,
    -221,  -221,   119,  -221,  -221,   216,  -221,   252,  -221,   216,
     272,   274,   596,  -221,    83,   260,   788,   788,   280,  -221,
    -221,  -221,  -221,  -221,   282,  -221,  -221,   596,   788,   788,
     596,   267,   596,  -221,     1,  -221,  -221,  -221,  -221,   298,
     268,   788,  -221,  -221,  -221,   596,   288,  -221,  -221,   596,
    -221
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    96,   119,   125,   106,    94,    98,   103,   100,   126,
      99,   105,   124,   107,    95,   108,   127,   109,   101,   104,
     102,    97,   204,    83,    89,    89,   110,    89,    89,     0,
     201,   203,   117,     0,   130,   142,     0,     0,    82,    90,
      92,   128,     0,    88,    84,    85,    86,    87,     1,   202,
       0,   147,   145,   141,     0,    81,     0,     0,   208,    83,
       0,   206,   139,   142,   129,   122,     0,   120,   146,   148,
     131,    91,    92,     2,     3,     4,     5,     6,     0,     0,
       0,    29,    30,    28,     0,   165,    27,    31,    32,     8,
      21,    33,     0,    35,    39,    42,    45,    50,    53,    55,
      57,    59,    61,    63,    65,   158,    93,   181,   205,   209,
     155,   154,     0,     0,   138,   149,   151,   140,   142,   144,
     141,     0,   115,     0,     0,    22,    23,     0,    25,    78,
       0,   114,   157,   114,     0,     0,     0,     0,   164,     0,
       0,   166,    13,    14,     0,    18,     0,     0,    74,    73,
      71,    72,    68,    69,    70,    75,    76,    77,    67,     0,
      33,    24,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   210,   210,
       0,     2,     0,     0,     0,     0,     0,     0,     0,     0,
       0,   210,     0,   187,   184,   185,   170,   171,     0,   210,
     182,   172,     0,   173,   174,   175,   153,   136,   137,     0,
       0,     0,    28,   143,     0,     0,    80,   123,   116,   121,
       0,     0,     7,     0,   113,   111,   112,     0,     0,   169,
     159,   165,   161,   163,   167,    12,     0,    17,    19,     0,
      11,    66,    36,    37,    38,    40,    41,    44,    43,    48,
      49,    46,    47,    51,    52,    54,    56,    58,     0,     0,
     210,   188,   198,   199,     0,     0,   188,   210,     0,   197,
       0,   188,   188,     0,   179,   188,   186,   150,   152,   156,
       0,   135,   132,     0,     0,    26,    79,   165,    34,   168,
     160,     0,    10,   144,     9,    60,    62,     0,   176,   200,
     188,   188,     0,     0,   196,   211,   178,     0,     0,   183,
     133,   134,     0,   162,    20,   211,   177,     0,   210,   211,
       0,     0,   188,    15,   165,     0,   188,   188,     0,   210,
     210,   191,    16,   210,     0,   211,   210,   188,     0,     0,
     188,     0,   188,   211,     0,    64,   195,   210,   192,   189,
       0,   188,   210,   193,   211,   188,     0,   190,   210,   188,
     194
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -221,  -221,  -221,  -221,  -221,   -78,  -221,   -84,    53,    58,
      40,    57,   191,   192,   190,   111,   112,  -221,  -115,   -38,
    -221,   -80,  -122,   -37,  -221,     5,   120,  -221,   314,  -221,
      43,    32,   257,  -221,  -221,  -221,   253,    -8,  -221,   -11,
     330,  -221,  -221,   -54,    84,   333,   319,  -221,  -221,   180,
    -221,   -73,  -132,   105,  -221,  -220,  -221,   251,  -198,  -221,
     334,  -221,  -221,   118,  -221,  -155,  -221,  -221,  -221,  -221,
     366,  -221,  -221,  -221,  -131,  -185
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    89,    90,   236,   237,    91,    92,    93,    94,    95,
      96,    97,    98,    99,   100,   101,   102,   103,   104,   129,
     159,   193,   217,    22,    37,    59,    44,    38,    39,    24,
      25,   132,   225,    26,    33,    66,    67,    27,    28,    72,
      41,   112,   113,    52,   214,    42,    53,   114,   115,   116,
     117,   134,   106,   137,   138,   139,   140,   141,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,   205,    29,
      30,    31,    60,    61,   258,   180
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     125,   126,   128,    58,   130,    23,   216,   232,   161,   119,
      34,   291,    40,   228,   160,   135,   223,   136,   294,   105,
     216,   135,   223,   136,   109,    54,     3,    51,   299,    43,
      43,    65,    43,    43,    23,     9,    34,   233,   162,   163,
      12,   122,   123,   160,   130,    69,   118,   130,   259,   179,
     222,   220,   164,   322,   221,    51,   223,   160,    32,   223,
     272,  -118,   265,   298,   211,    50,   239,   111,   275,   216,
     194,   169,   170,   306,   307,    56,   133,   350,   242,   243,
     244,   213,    36,   223,   160,   160,   160,   160,   160,   160,
     160,   160,   160,   160,   160,   160,   160,   160,   160,   160,
     206,   105,   316,   264,   291,    35,   160,   238,    36,   218,
      51,   302,    69,   135,  -211,   136,   133,   290,    55,   133,
     320,   241,    35,   133,   331,   133,     3,   131,    65,   297,
     325,   171,   172,   178,   328,     9,   303,   165,   166,   343,
      12,    70,   346,   288,   348,    45,   317,    46,    47,   160,
     341,   142,   143,   144,    62,   107,    63,   357,   349,   313,
     135,   360,   136,   224,   332,   224,   121,   131,   175,   356,
     131,   334,   335,   280,   131,     3,   131,   283,   167,   168,
     160,   160,   173,   174,     9,   286,    57,   327,   176,    12,
     305,   230,   231,   308,   177,   215,   354,   207,   337,   338,
     323,   324,   339,   208,   145,   342,   146,   229,   147,   249,
     250,   251,   252,   209,   111,   210,   351,   315,   245,   246,
     227,   355,   235,   319,   345,   247,   248,   359,   240,   301,
     253,   254,   181,    74,    75,   261,    76,    77,   194,   260,
     262,   148,   149,   150,   151,   152,   153,   154,   155,   156,
     157,    78,    79,   105,   266,   213,   267,   268,   344,   269,
     270,   160,     1,     2,     3,     4,   182,     5,   183,     6,
     184,     7,     8,     9,    10,   185,    11,   186,    12,   187,
      80,    13,   188,   189,    14,    15,   190,    16,   271,    17,
     191,    18,   192,    19,    20,    48,   273,    21,   223,    81,
      82,    83,   276,   274,    84,  -180,    73,    74,    75,   107,
      76,    77,    86,    87,    88,   279,   281,   282,   284,   285,
     300,   292,   289,  -188,   158,    78,    79,   304,     1,     2,
       3,     4,   293,     5,   310,     6,   311,     7,     8,     9,
      10,   287,    11,   318,    12,   321,   326,    13,   329,   330,
      14,    15,   333,    16,    80,    17,   336,    18,   340,    19,
      20,   347,   353,    21,   358,   352,   255,   257,   256,   295,
      71,   296,    64,    81,    82,    83,   219,   314,    84,   181,
      74,    75,   120,    76,    77,    68,    86,    87,    88,   278,
     226,   234,   312,   309,   108,    49,     0,   263,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
       2,     3,     4,   182,     5,   183,     6,   184,     7,     8,
       9,    10,   185,    11,   186,    12,   187,    80,    13,   188,
     189,    14,    15,   190,    16,     0,    17,   191,    18,   192,
      19,    20,     0,     0,    21,     0,    81,    82,    83,     0,
       0,    84,     0,    73,    74,    75,   107,    76,    77,    86,
      87,    88,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     1,     2,     3,     4,     0,     5,     0,
       6,     0,     7,     8,     9,    10,     0,    11,     0,    12,
       0,    80,    13,     0,     0,    14,    15,     0,    16,     0,
      17,     0,    18,     0,    19,    20,     0,     0,    21,     0,
      81,    82,    83,     0,     0,    84,    73,    74,    75,     0,
      76,    77,     0,    86,    87,    88,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    78,    79,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     2,     3,     4,
       0,     0,     0,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,     0,    80,    13,     0,     0,     0,    15,
       0,     0,     0,    17,     0,    18,     0,    19,    20,     0,
       0,     0,     0,    81,    82,    83,     0,     0,    84,   181,
      74,    75,     0,    76,    77,     0,    86,    87,    88,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    78,    79,
       0,    73,    74,    75,     0,    76,    77,     0,     0,     0,
       0,     0,     0,   182,     0,   183,     0,   184,     0,     0,
      78,    79,   185,     0,   186,     0,   187,    80,     0,   188,
     189,     0,     0,   190,     0,     0,     0,   191,     0,   192,
       0,     0,     0,     0,     0,     0,    81,    82,    83,    80,
       0,    84,     0,     0,     0,     0,   107,     0,     0,    86,
      87,    88,     0,     0,     0,     0,     0,     0,    81,    82,
      83,     0,     0,    84,     0,    73,    74,    75,    85,    76,
      77,    86,    87,    88,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    78,    79,     0,    73,    74,    75,
       0,    76,    77,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    78,    79,     0,     0,
      73,    74,    75,    80,    76,    77,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    78,
      79,     0,    81,    82,    83,    80,     0,    84,     0,     0,
       0,     0,   287,     0,     0,    86,    87,    88,     0,     0,
       0,     0,     0,     0,    81,    82,    83,     0,    80,   124,
       0,    73,    74,    75,     0,    76,    77,    86,    87,    88,
       0,     0,     0,     0,     0,     0,     0,    81,    82,    83,
      78,    79,   127,    73,    74,    75,     0,    76,    77,     0,
      86,    87,    88,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    78,    79,     0,     0,     0,     0,     0,    80,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    81,    82,
      83,    80,     0,    84,     0,     0,   110,     0,     0,     0,
       0,    86,    87,    88,     0,     0,     0,     0,     0,     0,
      81,    82,   212,     0,     0,    84,     0,     0,     0,     0,
       0,     0,     0,    86,    87,    88,     1,     2,     3,     4,
       0,     5,     0,     6,     0,     7,     8,     9,    10,     0,
      11,     0,    12,     0,     0,    13,     0,     0,    14,    15,
       0,    16,     0,    17,     0,    18,     0,    19,    20,     0,
       0,    21,     1,     2,     3,     4,     0,     5,     0,     6,
       0,     7,     8,     9,    10,     0,    11,   277,    12,     0,
       0,    13,     0,     0,    14,    15,     0,    16,     0,    17,
       0,    18,     0,    19,    20,     0,     0,    21,     0,     0,
       0,     1,     2,     3,     4,     0,     5,     0,     6,  -207,
       7,     8,     9,    10,     0,    11,     0,    12,     0,     0,
      13,     0,    57,    14,    15,     0,    16,     0,    17,     0,
      18,     0,    19,    20,     0,     0,    21,     1,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     8,     9,    10,
       0,    11,     0,    12,     0,     0,    13,     0,     0,    14,
      15,     0,    16,     0,    17,     0,    18,     0,    19,    20,
       0,     0,    21,     2,     3,     4,     0,     0,     0,     6,
       0,     7,     8,     9,    10,     0,    11,     0,    12,     0,
       0,    13,     0,     0,     0,    15,     0,     0,     0,    17,
       0,    18,     0,    19,    20
};

static const yytype_int16 yycheck[] =
{
      78,    79,    80,    40,    84,     0,   121,   139,    92,    63,
       3,   231,    23,   135,    92,    77,    82,    79,    78,    57,
     135,    77,    82,    79,    61,    36,    35,    35,    94,    24,
      25,     3,    27,    28,    29,    44,     3,    93,    72,    73,
      49,    81,    82,   121,   124,    53,    55,   127,   179,    26,
      76,   124,    86,    76,   127,    63,    82,   135,     3,    82,
     191,    80,   184,   261,   118,    80,   146,    62,   199,   184,
     107,    27,    28,   271,   272,    82,    84,    76,   162,   163,
     164,   119,    75,    82,   162,   163,   164,   165,   166,   167,
     168,   169,   170,   171,   172,   173,   174,   175,   176,   177,
     111,   139,   300,   183,   324,    72,   184,   145,    75,    81,
     118,   266,   120,    77,    91,    79,   124,    81,    94,   127,
     305,   159,    72,   131,   322,   133,    35,    84,     3,   260,
     315,    87,    88,    25,   319,    44,   267,    70,    71,   337,
      49,    76,   340,   227,   342,    25,   301,    27,    28,   227,
     335,    22,    23,    24,    75,    80,    77,   355,   343,   291,
      77,   359,    79,   131,    81,   133,    93,   124,    83,   354,
     127,   326,   327,   211,   131,    35,   133,   215,    20,    21,
     258,   259,    29,    30,    44,   223,    93,   318,    89,    49,
     270,    81,    82,   273,    90,    55,   351,    76,   329,   330,
      81,    82,   333,    76,    75,   336,    77,     3,    79,   169,
     170,   171,   172,    82,   209,    82,   347,   297,   165,   166,
      76,   352,     3,   303,   339,   167,   168,   358,     3,   266,
     173,   174,     3,     4,     5,    92,     7,     8,   275,    91,
      94,    10,    11,    12,    13,    14,    15,    16,    17,    18,
      19,    22,    23,   291,    75,   293,    75,     3,   338,    94,
      75,   339,    33,    34,    35,    36,    37,    38,    39,    40,
      41,    42,    43,    44,    45,    46,    47,    48,    49,    50,
      51,    52,    53,    54,    55,    56,    57,    58,    92,    60,
      61,    62,    63,    64,    65,     0,    75,    68,    82,    70,
      71,    72,    94,    81,    75,    81,     3,     4,     5,    80,
       7,     8,    83,    84,    85,     3,    78,    78,    76,    76,
      92,    76,    78,    94,    93,    22,    23,    94,    33,    34,
      35,    36,    82,    38,    78,    40,    78,    42,    43,    44,
      45,    80,    47,    94,    49,    48,    94,    52,    76,    75,
      55,    56,    92,    58,    51,    60,    76,    62,    76,    64,
      65,    94,    94,    68,    76,    67,   175,   177,   176,   258,
      56,   259,    42,    70,    71,    72,   123,   293,    75,     3,
       4,     5,    63,     7,     8,    52,    83,    84,    85,   209,
     133,   140,   287,   275,    60,    29,    -1,    94,    22,    23,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    -1,    60,    61,    62,    63,
      64,    65,    -1,    -1,    68,    -1,    70,    71,    72,    -1,
      -1,    75,    -1,     3,     4,     5,    80,     7,     8,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    33,    34,    35,    36,    -1,    38,    -1,
      40,    -1,    42,    43,    44,    45,    -1,    47,    -1,    49,
      -1,    51,    52,    -1,    -1,    55,    56,    -1,    58,    -1,
      60,    -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,
      70,    71,    72,    -1,    -1,    75,     3,     4,     5,    -1,
       7,     8,    -1,    83,    84,    85,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    34,    35,    36,
      -1,    -1,    -1,    40,    -1,    42,    43,    44,    45,    -1,
      47,    -1,    49,    -1,    51,    52,    -1,    -1,    -1,    56,
      -1,    -1,    -1,    60,    -1,    62,    -1,    64,    65,    -1,
      -1,    -1,    -1,    70,    71,    72,    -1,    -1,    75,     3,
       4,     5,    -1,     7,     8,    -1,    83,    84,    85,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,    23,
      -1,     3,     4,     5,    -1,     7,     8,    -1,    -1,    -1,
      -1,    -1,    -1,    37,    -1,    39,    -1,    41,    -1,    -1,
      22,    23,    46,    -1,    48,    -1,    50,    51,    -1,    53,
      54,    -1,    -1,    57,    -1,    -1,    -1,    61,    -1,    63,
      -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,    51,
      -1,    75,    -1,    -1,    -1,    -1,    80,    -1,    -1,    83,
      84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    -1,    -1,    75,    -1,     3,     4,     5,    80,     7,
       8,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    22,    23,    -1,     3,     4,     5,
      -1,     7,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    22,    23,    -1,    -1,
       3,     4,     5,    51,     7,     8,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    22,
      23,    -1,    70,    71,    72,    51,    -1,    75,    -1,    -1,
      -1,    -1,    80,    -1,    -1,    83,    84,    85,    -1,    -1,
      -1,    -1,    -1,    -1,    70,    71,    72,    -1,    51,    75,
      -1,     3,     4,     5,    -1,     7,     8,    83,    84,    85,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,    72,
      22,    23,    75,     3,     4,     5,    -1,     7,     8,    -1,
      83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    22,    23,    -1,    -1,    -1,    -1,    -1,    51,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    70,    71,
      72,    51,    -1,    75,    -1,    -1,     3,    -1,    -1,    -1,
      -1,    83,    84,    85,    -1,    -1,    -1,    -1,    -1,    -1,
      70,    71,    72,    -1,    -1,    75,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    83,    84,    85,    33,    34,    35,    36,
      -1,    38,    -1,    40,    -1,    42,    43,    44,    45,    -1,
      47,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,    56,
      -1,    58,    -1,    60,    -1,    62,    -1,    64,    65,    -1,
      -1,    68,    33,    34,    35,    36,    -1,    38,    -1,    40,
      -1,    42,    43,    44,    45,    -1,    47,     9,    49,    -1,
      -1,    52,    -1,    -1,    55,    56,    -1,    58,    -1,    60,
      -1,    62,    -1,    64,    65,    -1,    -1,    68,    -1,    -1,
      -1,    33,    34,    35,    36,    -1,    38,    -1,    40,    80,
      42,    43,    44,    45,    -1,    47,    -1,    49,    -1,    -1,
      52,    -1,    93,    55,    56,    -1,    58,    -1,    60,    -1,
      62,    -1,    64,    65,    -1,    -1,    68,    33,    34,    35,
      36,    -1,    38,    -1,    40,    -1,    42,    43,    44,    45,
      -1,    47,    -1,    49,    -1,    -1,    52,    -1,    -1,    55,
      56,    -1,    58,    -1,    60,    -1,    62,    -1,    64,    65,
      -1,    -1,    68,    34,    35,    36,    -1,    -1,    -1,    40,
      -1,    42,    43,    44,    45,    -1,    47,    -1,    49,    -1,
      -1,    52,    -1,    -1,    -1,    56,    -1,    -1,    -1,    60,
      -1,    62,    -1,    64,    65
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    33,    34,    35,    36,    38,    40,    42,    43,    44,
      45,    47,    49,    52,    55,    56,    58,    60,    62,    64,
      65,    68,   118,   120,   124,   125,   128,   132,   133,   164,
     165,   166,     3,   129,     3,    72,    75,   119,   122,   123,
     134,   135,   140,   120,   121,   121,   121,   121,     0,   165,
      80,   132,   138,   141,   134,    94,    82,    93,   118,   120,
     167,   168,    75,    77,   135,     3,   130,   131,   140,   132,
      76,   123,   134,     3,     4,     5,     7,     8,    22,    23,
      51,    70,    71,    72,    75,    80,    83,    84,    85,    96,
      97,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   147,    80,   155,   118,
       3,   120,   136,   137,   142,   143,   144,   145,    55,   138,
     141,    93,    81,    82,    75,   100,   100,    75,   100,   114,
     116,   125,   126,   132,   146,    77,    79,   148,   149,   150,
     151,   152,    22,    23,    24,    75,    77,    79,    10,    11,
      12,    13,    14,    15,    16,    17,    18,    19,    93,   115,
     100,   102,    72,    73,    86,    70,    71,    20,    21,    27,
      28,    87,    88,    29,    30,    83,    89,    90,    25,    26,
     170,     3,    37,    39,    41,    46,    48,    50,    53,    54,
      57,    61,    63,   116,   118,   153,   154,   155,   156,   157,
     158,   159,   160,   161,   162,   163,   134,    76,    76,    82,
      82,   138,    72,   114,   139,    55,   113,   117,    81,   131,
     146,   146,    76,    82,   126,   127,   127,    76,   117,     3,
      81,    82,   147,    93,   152,     3,    98,    99,   114,   116,
       3,   114,   102,   102,   102,   103,   103,   104,   104,   105,
     105,   105,   105,   106,   106,   107,   108,   109,   169,   169,
      91,    92,    94,    94,   116,   117,    75,    75,     3,    94,
      75,    92,   169,    75,    81,   169,    94,     9,   144,     3,
     114,    78,    78,   114,    76,    76,   114,    80,   102,    78,
      81,   150,    76,    82,    78,   110,   111,   169,   153,    94,
      92,   118,   160,   169,    94,   116,   153,   153,   116,   158,
      78,    78,   148,   147,   139,   116,   153,   160,    94,   116,
     170,    48,    76,    81,    82,   170,    94,   169,   170,    76,
      75,   153,    81,    92,   160,   160,    76,   169,   169,   169,
      76,   170,   169,   153,   116,   113,   153,    94,   153,   170,
      76,   169,    67,    94,   160,   169,   170,   153,    76,   169,
     153
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    95,    96,    96,    96,    96,    96,    96,    97,    97,
      97,    97,    97,    97,    97,    97,    97,    98,    98,    99,
      99,   100,   100,   100,   100,   100,   100,   101,   101,   101,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   104,
     104,   104,   105,   105,   105,   106,   106,   106,   106,   106,
     107,   107,   107,   108,   108,   109,   109,   110,   110,   111,
     111,   112,   112,   113,   113,   114,   114,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,   115,   116,   116,
     117,   118,   119,   119,   120,   120,   120,   120,   121,   121,
     122,   122,   123,   123,   124,   124,   124,   124,   125,   125,
     125,   125,   125,   125,   125,   125,   125,   125,   125,   125,
     125,   126,   126,   127,   127,   128,   128,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   132,   133,   134,   134,
     135,   135,   135,   135,   135,   135,   135,   135,   136,   136,
     137,   138,   138,   139,   139,   140,   140,   141,   141,   142,
     142,   143,   143,   144,   144,   145,   145,   146,   147,   147,
     147,   148,   148,   149,   150,   150,   151,   151,   152,   152,
     153,   153,   153,   153,   153,   153,   154,   154,   154,   155,
     156,   156,   157,   157,   158,   158,   159,   160,   160,   161,
     161,   161,   162,   162,   162,   162,   163,   163,   163,   163,
     163,   164,   164,   165,   165,   166,   167,   167,   168,   168,
     169,   170
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     3,     1,     4,
       4,     3,     3,     2,     2,     6,     7,     1,     0,     1,
       3,     1,     2,     2,     2,     2,     4,     1,     1,     1,
       1,     1,     1,     1,     4,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     1,     3,     3,     3,     3,
       1,     3,     3,     1,     3,     1,     3,     1,     3,     1,
       4,     1,     4,     1,     9,     1,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     3,
       1,     3,     1,     0,     2,     2,     2,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     2,     2,     1,     0,     5,     6,     2,     1,     0,
       1,     3,     1,     3,     1,     1,     1,     1,     1,     2,
       1,     3,     5,     6,     6,     5,     4,     4,     1,     0,
       1,     1,     0,     1,     0,     2,     3,     1,     2,     1,
       3,     1,     3,     2,     1,     1,     3,     1,     1,     3,
       4,     2,     4,     2,     1,     0,     1,     2,     3,     2,
       1,     1,     1,     1,     1,     1,     3,     4,     3,     3,
       1,     0,     1,     3,     1,     1,     2,     1,     0,     8,
      11,     5,     8,     9,    14,     8,     3,     2,     2,     2,
       3,     1,     2,     1,     1,     4,     1,     0,     1,     2,
       0,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 162 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// Check if this is a global function
		if(!glob_sym_table->isPresent(*((yyvsp[0].id).strVal)))
		{
			(yyval.exxp).loc = curr_sym_table->lookUp(*((yyvsp[0].id).strVal));
		}
		else
		{
			(yyval.exxp).loc = glob_sym_table->lookUp(*((yyvsp[0].id).strVal));
		}

		// Initialise array and type
		(yyval.exxp).array = (yyval.exxp).loc;
		(yyval.exxp).type = (yyval.exxp).loc->type;
		(yyval.exxp).trueList = NULL;
		(yyval.exxp).falseList = NULL;
	}
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 181 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// Generate a new temporary variable of type int
  		(yyval.exxp).loc = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
  		(yyval.exxp).type = (yyval.exxp).loc->type;
  		(yyval.exxp).trueList = NULL;
  		(yyval.exxp).falseList = NULL;
  		// generating initial value
  		init_val init;
  		init.intVal = (yyvsp[0].intVal);
  		// update the initial value of the temp variable generated
  		curr_sym_table->update((yyval.exxp).loc,init);
  		// emit a quad assigning the value i.e. emit for E.loc = num.val
  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].intVal), opcode_dec_ASSIGN));
  	}
#line 1839 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 197 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// Generate a new temporary variable of type double
  		(yyval.exxp).loc = curr_sym_table->genTemp(new symbol_type(type_dec_DOUBLE));
  		(yyval.exxp).type = (yyval.exxp).loc->type;
  		(yyval.exxp).trueList = NULL;
  		(yyval.exxp).falseList = NULL;
  		// generating initial value
  		init_val init;
  		init.doubleVal = (yyvsp[0].doubleVal);
  		// update the initial value of the temp variable generated
  		curr_sym_table->update((yyval.exxp).loc,init);
  		// emit a quad assigning the value i.e. emit for E.loc = num.val
  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].doubleVal), opcode_dec_ASSIGN));
  	}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 215 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// Generate a new temporary variable of type char
		(yyval.exxp).loc = curr_sym_table->genTemp(new symbol_type(type_dec_CHAR));
		(yyval.exxp).type = (yyval.exxp).loc->type;
		(yyval.exxp).trueList = NULL;
		(yyval.exxp).falseList = NULL;
		// generating initial value
		init_val init;
		init.charVal = (yyvsp[0].charVal);
		// update the initial value of the temp variable generated
		curr_sym_table->update((yyval.exxp).loc,init);
		// emit a quad assigning the value i.e. emit for E.loc = num.val
		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].charVal), opcode_dec_ASSIGN));
	}
#line 1877 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 231 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.exxp).type = new symbol_type(type_dec_PTR);
  		(yyval.exxp).type->next = new symbol_type(type_dec_CHAR);
  		(yyval.exxp).isString = true;
  	}
#line 1887 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 238 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// Copy the attribute of expression to primary_expression
  		(yyval.exxp) = (yyvsp[-1].exxp);
  	}
#line 1896 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 246 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// Copy the attribute of primary_expression to postfix_expression
		(yyval.exxp) = (yyvsp[0].exxp);
		(yyval.exxp).isArrayType = false;
	}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 253 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[-3].exxp);
		
		if(!((yyval.exxp).isArrayType))
		{
			// If this was not array type,
			// we need to create a temporary variable to store offset i.e. $$.loc
			(yyval.exxp).isArrayType = true;
			// Initializing a temporary variable to store the array offset
			(yyval.exxp).loc = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-1].exxp).loc->name, opcode_dec_MULT, i2s((yyvsp[-3].exxp).type->next->getSize())));
		}
		else
		{
			if((yyvsp[-3].exxp).type->next == NULL)
			{
				yyerror("error: subscripted value is neither array nor pointer nor vector");
  			exit(1);
			}

			// Updating the array offset
			symbol_entry * temp = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
			(yyval.exxp).loc = curr_sym_table->genTemp(new symbol_type(type_dec_INT));
			quad_arr.emit(quad(temp->name, (yyvsp[-1].exxp).loc->name, opcode_dec_MULT, i2s((yyvsp[-3].exxp).type->next->getSize())));
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-3].exxp).loc->name, opcode_dec_PLUS, temp->name));
		}

		// now the type of $$ is the type of its element
		(yyval.exxp).type = (yyvsp[-3].exxp).type->next;

	}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 286 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// check if this is a valid call to a sfunction
		// check the types of parameters and return type and number of arguments
		(yyval.exxp) = (yyvsp[-3].exxp);
		if((yyvsp[-3].exxp).loc->nestedTable == NULL || !checkParams((yyvsp[-3].exxp), (yyvsp[-1].args)))
		{
			char _error[100];
			sprintf(_error, "Error in calling function %s. Parameters type do not match.\n",(yyvsp[-3].exxp).loc->name.c_str());
			// yyerror(_error);
			// exit(1);
		}
		else
		{
			// output all the parameters in the quad
			for(int i = (int)(yyvsp[-1].args)->size() - 1 ; i >= 0 ; i--)
			{
				quad_arr.emit(quad((*(yyvsp[-1].args))[i]->loc->name,"",opcode_dec_PARAM,""));
			}

			char buff[10];
			sprintf(buff, "%d", (int)(yyvsp[-1].args)->size());
			(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[-3].exxp).loc->nestedTable->entries[0]->type);
			(yyval.exxp).type = (yyval.exxp).loc->type;
			(yyval.exxp).trueList = NULL;
			(yyval.exxp).falseList = NULL;
			(yyval.exxp).isArrayType = false;
			// calling the function
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-3].exxp).loc->name, opcode_dec_CALL, buff));
		}
	}
#line 1977 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 317 "ass5_13CS30015.y" /* yacc.c:1646  */
    {}
#line 1983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 319 "ass5_13CS30015.y" /* yacc.c:1646  */
    {}
#line 1989 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 322 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// Generate a temporary variable
		(yyval.exxp) = (yyvsp[-1].exxp);
		(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[-1].exxp).type);
		(yyval.exxp).type = (yyval.exxp).loc->type;

		if((yyvsp[-1].exxp).isArrayType)
		{
			// if it is array type we need to dereference the array first and then increment
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-1].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[-1].exxp).loc->name));
			symbol_entry * sy = curr_sym_table->genTemp((yyvsp[-1].exxp).type);
			quad_arr.emit(quad(sy->name, (yyval.exxp).loc->name, opcode_dec_PLUS, "1"));
	  		quad_arr.emit(quad((yyvsp[-1].exxp).array->name, (yyvsp[-1].exxp).loc->name, opcode_dec_L_INDEX, sy->name));
		}
		else
		{
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-1].exxp).loc->name, opcode_dec_ASSIGN, ""));
			quad_arr.emit(quad((yyvsp[-1].exxp).loc->name, (yyvsp[-1].exxp).loc->name ,opcode_dec_PLUS, "1"));
		}
		(yyval.exxp).isArrayType = false;
	}
#line 2015 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 345 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// Generate a temporary variable
		(yyval.exxp) = (yyvsp[-1].exxp);
		(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[-1].exxp).type);
		(yyval.exxp).type = (yyval.exxp).loc->type;

		if((yyvsp[-1].exxp).isArrayType)
		{
			// if it is array type we need to dereference the array first and then increment
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-1].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[-1].exxp).loc->name));
			symbol_entry * sy = curr_sym_table->genTemp((yyvsp[-1].exxp).type);
			quad_arr.emit(quad(sy->name, (yyval.exxp).loc->name, opcode_dec_MINUS, "1"));
		  		quad_arr.emit(quad((yyvsp[-1].exxp).array->name, (yyvsp[-1].exxp).loc->name, opcode_dec_L_INDEX, sy->name));
		}
		else
		{
			quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-1].exxp).loc->name, opcode_dec_ASSIGN, ""));
			quad_arr.emit(quad((yyvsp[-1].exxp).loc->name, (yyvsp[-1].exxp).loc->name ,opcode_dec_MINUS, "1"));
		}
		(yyval.exxp).isArrayType = false;
	}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 367 "ass5_13CS30015.y" /* yacc.c:1646  */
    {}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 369 "ass5_13CS30015.y" /* yacc.c:1646  */
    {}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 374 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	(yyval.args) = (yyvsp[0].args);
	}
#line 2061 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 379 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
 		// initialise parameter list
 		(yyval.args) = new vector <expression_type * >();
	}
#line 2070 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 387 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	// initialize parameter list
	 	(yyval.args) = new vector <expression_type * >();
	 	(yyval.args)->push_back(new expression_type((yyvsp[0].exxp)));
	}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 394 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	// merge parameter list
	 	(yyval.args) = (yyvsp[-2].args);
	 	(yyval.args)->push_back(new expression_type((yyvsp[0].exxp)));
	}
#line 2090 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 403 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.exxp) = (yyvsp[0].exxp);
  	}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 408 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// Generate temporary variable
  		(yyval.exxp) = (yyvsp[0].exxp);
  	  	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  	  	(yyval.exxp).type = (yyval.exxp).loc->type;

  	  	if((yyvsp[0].exxp).isArrayType)
  	  	{
  	  		// we need to dereference the array
  	  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
  	  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyval.exxp).loc->name, opcode_dec_PLUS, "1"));
  	  		quad_arr.emit(quad((yyvsp[0].exxp).array->name, (yyvsp[0].exxp).loc->name, opcode_dec_L_INDEX, (yyval.exxp).loc->name));
  	  	}
  	  	else
  	  	{
  	  		quad_arr.emit(quad((yyvsp[0].exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_PLUS, "1"));
  	  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ASSIGN,""));
  	  	}

  	  	(yyval.exxp).isArrayType = false;
  	}
#line 2124 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 431 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// Generate temporary variable
  		(yyval.exxp) = (yyvsp[0].exxp);
  	  	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  	  	(yyval.exxp).type = (yyval.exxp).loc->type;

  	  	if((yyvsp[0].exxp).isArrayType)
  	  	{
  	  		// we need to dereference the array
  	  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
  	  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyval.exxp).loc->name, opcode_dec_MINUS, "1"));
  	  		quad_arr.emit(quad((yyvsp[0].exxp).array->name, (yyvsp[0].exxp).loc->name, opcode_dec_L_INDEX, (yyval.exxp).loc->name));
  	  	}
  	  	else
  	  	{
  	  		quad_arr.emit(quad((yyvsp[0].exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_MINUS, "1"));
  	  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ASSIGN,""));
  	  	}
  	  	(yyval.exxp).isArrayType = false;
  	}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 453 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.exxp).trueList = NULL;
  		(yyval.exxp).falseList = NULL;

  		switch((yyvsp[-1].charVal))
  		{
  			case '&':
  					{
  						// address of operator
  						symbol_type * ptr = new symbol_type(type_dec_PTR);
  						ptr->next = (yyvsp[0].exxp).type;
  						(yyval.exxp).loc = curr_sym_table->genTemp(ptr);
  						(yyval.exxp).type = (yyval.exxp).loc->type;
  						if(!(yyvsp[0].exxp).isArrayType)
  						{
  							quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ADDRESS, ""));
  						}
  						else
  						{
  							quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).array->name, opcode_dec_PLUS, (yyvsp[0].exxp).loc->name));
  						}
  					}
  					break;

  			case '*':
  					{
  						// value of operator
  						if((yyvsp[0].exxp).type->next == NULL)
  						{
  							yyerror("Non Pointer type");
  							exit(1);
  						}
  						(yyval.exxp) = (yyvsp[0].exxp);
  						(yyval.exxp).type = (yyvsp[0].exxp).type->next;
  						(yyval.exxp).isPtrType = true;
  					}
  					break;

  			case '+':
  					{
  						if((yyvsp[0].exxp).isArrayType)
  						{
  							(yyvsp[0].exxp).isArrayType = false;
  							symbol_entry * sym = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  							quad_arr.emit(quad(sym->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
  							(yyvsp[0].exxp).loc = sym; 
  						}
  						else if((yyvsp[0].exxp).isPtrType)
  						{
  							(yyvsp[0].exxp).isPtrType = false;
  							symbol_entry * sym = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  							quad_arr.emit(quad(sym->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
  							(yyvsp[0].exxp).loc = sym;
  						}
  						(yyval.exxp) = (yyvsp[0].exxp);
  					}
  					break;

  			case '-':
  					{
  						// unary minus
  						if((yyvsp[0].exxp).isArrayType)
  						{
  							(yyvsp[0].exxp).isArrayType = false;
  							symbol_entry * sym = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  							quad_arr.emit(quad(sym->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
  							(yyvsp[0].exxp).loc = sym; 
  						}
  						else if((yyvsp[0].exxp).isPtrType)
  						{
  							(yyvsp[0].exxp).isPtrType = false;
  							symbol_entry * sym = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  							quad_arr.emit(quad(sym->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
  							(yyvsp[0].exxp).loc = sym;
  						}
  						(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  						(yyval.exxp).type = (yyval.exxp).loc->type;
  						quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_UNARY_MINUS,""));
  					}
  					break;

  			case '~':
  					{
  						// bitwise not
  						if((yyvsp[0].exxp).isArrayType)
  						{
  							(yyvsp[0].exxp).isArrayType = false;
  							symbol_entry * sym = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  							quad_arr.emit(quad(sym->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
  							(yyvsp[0].exxp).loc = sym; 
  						}
  						else if((yyvsp[0].exxp).isPtrType)
  						{
  							(yyvsp[0].exxp).isPtrType = false;
  							symbol_entry * sym = curr_sym_table->genTemp((yyvsp[0].exxp).type);
  							quad_arr.emit(quad(sym->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
  							(yyvsp[0].exxp).loc = sym;
  						}
  						if((yyvsp[0].exxp).type->type_d == type_dec_INT || (yyvsp[0].exxp).type->type_d == type_dec_CHAR || (yyvsp[0].exxp).type->type_d == type_dec_BOOL)
  						{
  							expression_type e;
  							e.type = new symbol_type(type_dec_INT);
  							(yyval.exxp).loc = curr_sym_table->genTemp(e.type);
  							(yyval.exxp).type = (yyval.exxp).loc->type;
  							typeCheck(&e, &((yyvsp[0].exxp)), true);
  							quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_BITWISE_COMPLEMENT,""));
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
#line 2271 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 572 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 2279 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 577 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 584 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.charVal) = '&';
	}
#line 2295 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 589 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.charVal) = '*';
  	}
#line 2303 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 594 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.charVal) = '+';
  	}
#line 2311 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 599 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.charVal) = '-';
  	}
#line 2319 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 604 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.charVal) = '~';
  	}
#line 2327 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 609 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.charVal) = '!';
  	}
#line 2335 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 615 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
				 	(yyval.exxp) = (yyvsp[0].exxp);
				 }
#line 2343 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 618 "ass5_13CS30015.y" /* yacc.c:1646  */
    {}
#line 2349 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 623 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	    (yyval.exxp) = (yyvsp[0].exxp);
   	  	if((yyvsp[0].exxp).isArrayType)
   	  	{
   	  	 	(yyvsp[0].exxp).isArrayType = false;
   	  	 	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
		 	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
   	  	}
   	  	else if((yyvsp[0].exxp).isPtrType)
   	  	{
   	  	 	(yyvsp[0].exxp).isPtrType = false;
   	  	 	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
   	  	}
   	}
#line 2369 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 640 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	if((yyvsp[0].exxp).isArrayType)
   	  	{
   	  	 	(yyvsp[0].exxp).isArrayType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad(sy->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
   	  	 	(yyvsp[0].exxp).loc = sy;
   	  	}
   	  	else if((yyvsp[0].exxp).isPtrType)
   	  	{
   	  	 	(yyvsp[0].exxp).isPtrType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad(sy->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
   	  	 	(yyvsp[0].exxp).loc = sy;
   	  	}

 	 	(yyval.exxp) = (yyvsp[-2].exxp);
   	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
   	  	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	(yyval.exxp).type = (yyval.exxp).loc->type;
   	  	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_MULT, (yyvsp[0].exxp).loc->name));
  	}
#line 2396 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 664 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	if((yyvsp[0].exxp).isArrayType)
   	  	{
   	  	 	(yyvsp[0].exxp).isArrayType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad(sy->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
   	  	 	(yyvsp[0].exxp).loc = sy;
   	  	}
   	  	else if((yyvsp[0].exxp).isPtrType)
   	  	{
   	  	 	(yyvsp[0].exxp).isPtrType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad(sy->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
  		 	(yyvsp[0].exxp).loc = sy;
   	  	}

  	  	(yyval.exxp) = (yyvsp[-2].exxp);
   	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
   	  	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	(yyval.exxp).type = (yyval.exxp).loc->type;
   	  	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_DIVIDE, (yyvsp[0].exxp).loc->name));
   	}
#line 2423 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 688 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	if((yyvsp[0].exxp).isArrayType)
   	  	{
   	  	 	(yyvsp[0].exxp).isArrayType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad(sy->name, (yyvsp[0].exxp).array->name, opcode_dec_R_INDEX, (yyvsp[0].exxp).loc->name));
   	  	 	(yyvsp[0].exxp).loc = sy;
   	  	}
   	  	else if((yyvsp[0].exxp).isPtrType)
   	  	{
   	  	 	(yyvsp[0].exxp).isPtrType = false;
   	  	 	symbol_entry * sy = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	 	quad_arr.emit(quad(sy->name, (yyvsp[0].exxp).array->name, opcode_dec_R_VAL_AT, (yyvsp[0].exxp).loc->name));
   	  	 	(yyvsp[0].exxp).loc = sy;
   	  	}

   	  	(yyval.exxp) = (yyvsp[-2].exxp);
	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
   	  	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[0].exxp).type);
   	  	(yyval.exxp).type = (yyval.exxp).loc->type;
   	  	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_MODULO, (yyvsp[0].exxp).loc->name));
   	}
#line 2450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 714 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	(yyval.exxp) = (yyvsp[0].exxp);
 	}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 719 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	(yyval.exxp) = (yyvsp[-2].exxp);
	 	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
	 	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[-2].exxp).type);
	 	(yyval.exxp).type = (yyval.exxp).loc->type;
	 	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_PLUS, (yyvsp[0].exxp).loc->name));
	}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 727 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
 	 	(yyval.exxp) = (yyvsp[-2].exxp);
 	 	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	 	(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[-2].exxp).type);
 	 	(yyval.exxp).type = (yyval.exxp).loc->type;
 	 	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_MINUS, (yyvsp[0].exxp).loc->name));
 	}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 738 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
 	  	(yyval.exxp) = (yyvsp[0].exxp);
  	}
#line 2490 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 743 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  	  	expression_type e;
 	  	e.type = new symbol_type(type_dec_INT);
 	  	if((yyvsp[-2].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exxp)), true))
 	  	{
 	      	yyerror("Invalid type for operator <<\n");
 		  	exit(1);
 	  	}
 	  	
 	  	if((yyvsp[0].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[0].exxp)), true))
 	  	{
 		  	yyerror("Invalid type for operator <<\n");
 		  	exit(1);
 	  	}
 	  	
 	  	(yyval.exxp) = (yyvsp[-2].exxp);
 	  	(yyval.exxp).loc = curr_sym_table->genTemp(e.type);
 	  	(yyval.exxp).type = (yyval.exxp).loc->type;
 	  	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_L_SHIFT, (yyvsp[0].exxp).loc->name));
  	}
#line 2515 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 765 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  	  	expression_type e;
 	  	e.type = new symbol_type(type_dec_INT);
 	  	if((yyvsp[-2].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exxp)), true))
 	  	{
 	      	yyerror("Invalid type for operator >>\n");
 		  	exit(1);
 	  	}
 	  
 	  	if((yyvsp[0].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[0].exxp)), true))
 	  	{
 		  	yyerror("Invalid type for operator >>\n");
 		  	exit(1);
 	  	}
 	  
 	  	(yyval.exxp) = (yyvsp[-2].exxp);
 	  	(yyval.exxp).loc = curr_sym_table->genTemp(e.type);
 	  	(yyval.exxp).type = (yyval.exxp).loc->type;
 	  	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_R_SHIFT, (yyvsp[0].exxp).loc->name));
  	}
#line 2540 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 789 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	   (yyval.exxp) = (yyvsp[0].exxp);
   	}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 794 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	  	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
 	  	(yyval.exxp).trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", (yyvsp[-2].exxp).loc->name, opcode_dec_LESS_THAN, (yyvsp[0].exxp).loc->name));
 	  	(yyval.exxp).falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
#line 2561 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 804 "ass5_13CS30015.y" /* yacc.c:1646  */
    {	
   	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	  	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
 	  	(yyval.exxp).trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", (yyvsp[-2].exxp).loc->name, opcode_dec_GREATER_THAN, (yyvsp[0].exxp).loc->name));
 	  	(yyval.exxp).falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
#line 2574 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 814 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	  	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
 	  	(yyval.exxp).trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", (yyvsp[-2].exxp).loc->name, opcode_dec_LESS_OR_EQUAL, (yyvsp[0].exxp).loc->name));
 	  	(yyval.exxp).falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
#line 2587 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 824 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	  	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
 	  	(yyval.exxp).trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", (yyvsp[-2].exxp).loc->name, opcode_dec_GRTER_OR_EQUAL, (yyvsp[0].exxp).loc->name));
 	  	(yyval.exxp).falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	}
#line 2600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 836 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
        (yyval.exxp) = (yyvsp[0].exxp);
	}
#line 2608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 841 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
     	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	  	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
     	(yyval.exxp).trueList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("", (yyvsp[-2].exxp).loc->name, opcode_dec_EQUAL, (yyvsp[0].exxp).loc->name));
 	  	(yyval.exxp).falseList = new list_nodes(quad_arr.nxt_instr);
     	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
    }
#line 2621 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 851 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
     	typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), false);
 	  	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
 	  	(yyval.exxp).trueList = new list_nodes(quad_arr.nxt_instr);
     	quad_arr.emit(quad("", (yyvsp[-2].exxp).loc->name, opcode_dec_NOT_EQUAL, (yyvsp[0].exxp).loc->name));
 	  	(yyval.exxp).falseList = new list_nodes(quad_arr.nxt_instr);
 	  	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
    }
#line 2634 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 863 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	    (yyval.exxp) = (yyvsp[0].exxp);
	}
#line 2642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 868 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
    	expression_type e;
     	e.type = new symbol_type(type_dec_INT);
     	if((yyvsp[-2].exxp).type->type_d == type_dec_DOUBLE || 			!typeCheck(&e, &((yyvsp[-2].exxp)), true))
     	{
     		yyerror("Invalid type for operator &\n");
     		exit(1);
     	}
     	if((yyvsp[0].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[0].exxp)), true))
     	{
     		yyerror("Invalid type for operator &\n");
     		exit(1);
     	}
     	(yyval.exxp) = (yyvsp[-2].exxp);
     	(yyval.exxp).loc = curr_sym_table->genTemp(e.type);
     	(yyval.exxp).type = (yyval.exxp).loc->type;
     	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_BITWISE_AND, (yyvsp[0].exxp).loc->name));
    }
#line 2665 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 890 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	    (yyval.exxp) = (yyvsp[0].exxp);
    }
#line 2673 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 895 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
     	expression_type e;
     	e.type = new symbol_type(type_dec_INT);
     	if((yyvsp[-2].exxp).type->type_d == type_dec_DOUBLE || 	!typeCheck(&e, &((yyvsp[-2].exxp)), true))
     	{
     		yyerror("Invalid type for operator ^\n");
     		exit(1);
     	}
     	if((yyvsp[0].exxp).type->type_d == type_dec_DOUBLE || 	!typeCheck(&e, &((yyvsp[0].exxp)), true))
     	{
     		yyerror("Invalid type for operator ^\n");
     		exit(1);
     	}
     	(yyval.exxp) = (yyvsp[-2].exxp);
     	(yyval.exxp).loc = curr_sym_table->genTemp(e.type);
     	(yyval.exxp).type = (yyval.exxp).loc->type;
     	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_BITWISE_XOR, (yyvsp[0].exxp).loc->name));
    }
#line 2696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 917 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	    (yyval.exxp) = (yyvsp[0].exxp);
    }
#line 2704 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 922 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
 		expression_type e;
     	e.type = new symbol_type(type_dec_INT);
     	if((yyvsp[-2].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[-2].exxp)), true))
     	{
     		yyerror("Invalid type for operator |\n");
     		exit(1);
     	}
     	if((yyvsp[0].exxp).type->type_d == type_dec_DOUBLE || !typeCheck(&e, &((yyvsp[0].exxp)), true))
     	{
     		yyerror("Invalid type for operator |\n");
     		exit(1);
     	}
     	(yyval.exxp) = (yyvsp[-2].exxp);
     	(yyval.exxp).loc = curr_sym_table->genTemp(e.type);
     	(yyval.exxp).type = (yyval.exxp).loc->type;
     	quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-2].exxp).loc->name, opcode_dec_BITWISE_OR, (yyvsp[0].exxp).loc->name));
    }
#line 2727 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 944 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	    (yyval.exxp) = (yyvsp[0].exxp);
    }
#line 2735 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 949 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
    	backPatch((yyvsp[-3].exxp).trueList, (yyvsp[-1].instr));
    	(yyval.exxp).type = new symbol_type(type_dec_BOOL);
    	(yyval.exxp).trueList = (yyvsp[0].exxp).trueList;
    	(yyval.exxp).falseList = mergeList((yyvsp[-3].exxp).falseList, (yyvsp[0].exxp).falseList);
    }
#line 2746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 960 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	    (yyval.exxp) = (yyvsp[0].exxp);
   	}
#line 2754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 965 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   		backPatch((yyvsp[-3].exxp).falseList, (yyvsp[-1].instr));
   		(yyval.exxp).type = new symbol_type(type_dec_BOOL);
   		(yyval.exxp).trueList = mergeList((yyvsp[-3].exxp).trueList, (yyvsp[0].exxp).trueList);
   		(yyval.exxp).falseList = (yyvsp[0].exxp).falseList;
   	}
#line 2765 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 976 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 2773 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 981 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// N has been inserted to take care of fall through of expression
  		// N basically also is used to emit goto statement to goto to basic block
  		// which converts expression to bool
  		// M has been inserted to get the address of instruction for backpatching purposes
  		(yyval.exxp).loc = curr_sym_table->genTemp((yyvsp[-4].exxp).type);
  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ASSIGN, ""));
  		list_nodes * l = new list_nodes(quad_arr.nxt_instr);
  		quad_arr.emit(quad("","",opcode_dec_GOTO,""));
  		backPatch((yyvsp[-3].nextList), quad_arr.nxt_instr);
  		quad_arr.emit(quad((yyval.exxp).loc->name, (yyvsp[-4].exxp).loc->name, opcode_dec_ASSIGN, ""));
  		l = mergeList(l, new list_nodes(quad_arr.nxt_instr));
  		quad_arr.emit(quad("","",opcode_dec_GOTO,""));
  		backPatch((yyvsp[-7].nextList), quad_arr.nxt_instr);
  		conv2Bool(&((yyvsp[-8].exxp)));
  		backPatch((yyvsp[-8].exxp).trueList, (yyvsp[-5].instr));
  		backPatch((yyvsp[-8].exxp).falseList, (yyvsp[-1].instr));
  		backPatch(l, quad_arr.nxt_instr);
  	}
#line 2797 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 1004 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	   	(yyval.exxp) = (yyvsp[0].exxp);
   	}
#line 2805 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 1009 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	   	if((yyvsp[-2].exxp).type->type_d == type_dec_ARR)
   	   	{
   	   	  	yyerror("Assignment of arrays. Incompatible types");
	   	   	exit(1);
   	   	}
   	   	if((yyvsp[-2].exxp).type->type_d == type_dec_PTR)
   	   	{
   	   	  	if((yyvsp[0].exxp).type->type_d == type_dec_DOUBLE)
   	   		{
	   	  		yyerror("Assignment of pointer to double not allowed.");
   	   		}
   	   		else
	   		{
	   	  		quad_arr.emit(quad((yyvsp[-2].exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ASSIGN, ""));
	   		}
	   	}
		else
		{
	   	   	if(!typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), true))
	   	   	{
	   	   	  	yyerror("Incompatible types in assignment");
	   	   	  	exit(1);
	   	   	}
	   	   	if((yyvsp[-2].exxp).isArrayType)
			{
	   	   	  	(yyvsp[-2].exxp).isArrayType = false;
	   	   	  	quad_arr.emit(quad((yyvsp[-2].exxp).array->name, (yyvsp[-2].exxp).loc->name, opcode_dec_L_INDEX, (yyvsp[0].exxp).loc->name));
	   	   	}
			else if((yyvsp[-2].exxp).isPtrType)
			{
	   	   	  	(yyvsp[-2].exxp).isPtrType = false;
	   	   	  	quad_arr.emit(quad((yyvsp[-2].exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_L_VAL_AT, ""));
	   	   	}
	   	   	else
	   	   	{
	   	   	  	quad_arr.emit(quad((yyvsp[-2].exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ASSIGN, ""));
	   	   	}
	   	}
   	   	(yyval.exxp) = (yyvsp[0].exxp);
   	}
#line 2851 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 1055 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2859 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 1060 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 1065 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2875 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 1070 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2883 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 1075 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 1080 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2899 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 1085 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2907 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 1090 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 1095 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 2923 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 1100 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 2931 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 1107 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 2939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 1112 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.exxp) = (yyvsp[0].exxp);
  	}
#line 2947 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 1120 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 2955 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 1128 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	// create a new symbol table for the function
		if((yyvsp[-1].exxp).type->type_d == type_dec_FUNC)
	 	{
			curr_sym_table = new symbol_table();
		}
	}
#line 2967 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 1140 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	  	(yyval.exxp)=(yyvsp[0].exxp);
	}
#line 2975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 1145 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 2983 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 1153 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 2991 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 1158 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		// save the properties of current type found till now
  		(yyval.dec).type = (yyvsp[-1].dec).type;
  		(yyval.dec).width = (yyvsp[-1].dec).width;
  		quad_arr.type = (yyvsp[-1].dec).type;
  		quad_arr.width = (yyvsp[-1].dec).width;
  	}
#line 3003 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 1167 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 1172 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

 	}
#line 3019 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 1179 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.dec).type = (yyvsp[0].dec).type;
		(yyval.dec).width = (yyvsp[0].dec).width;
	}
#line 3028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 1185 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 1192 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  	 	(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 3044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 1197 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	  	(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 3052 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 1204 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 3060 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 1209 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// check whether they are of same types
		typeCheck(&((yyvsp[-2].exxp)), &((yyvsp[0].exxp)), true);
		// if its initial value was set in symbol table we need to update it in symbol table
		if((yyvsp[0].exxp).loc->was_Init)
		{
		 	curr_sym_table->update((yyvsp[-2].exxp).loc, (yyvsp[0].exxp).loc->init);
		}
		quad_arr.emit(quad((yyvsp[-2].exxp).loc->name, (yyvsp[0].exxp).loc->name, opcode_dec_ASSIGN, ""));
		(yyval.exxp) = (yyvsp[-2].exxp);			   	 	 
   	}
#line 3076 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 1224 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3084 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 1228 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 3092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 1233 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3100 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 1238 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

    }
#line 3108 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 1245 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.dec).type = new symbol_type(type_dec_VOID);
		(yyval.dec).width = SIZE_OF_VOID;
	}
#line 3117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 1251 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.dec).type = new symbol_type(type_dec_CHAR);
		(yyval.dec).width = SIZE_OF_CHAR;
  	}
#line 3126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 1257 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 1262 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.dec).type = new symbol_type(type_dec_INT);
		(yyval.dec).width = SIZE_OF_INT;
  	}
#line 3143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 1268 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3151 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 1273 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3159 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 1278 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.dec).type = new symbol_type(type_dec_DOUBLE);
		(yyval.dec).width = SIZE_OF_DOUBLE;
  	}
#line 3168 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 1283 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 1288 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

 	}
#line 3184 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 1293 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

 	}
#line 3192 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 1298 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 1303 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3208 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 1308 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3216 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 1315 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	  	(yyval.dec).type = (yyvsp[-1].dec).type;
	  	(yyval.dec).width = (yyvsp[-1].dec).width;
	}
#line 3225 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 1321 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 1329 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	  	(yyval.dec).type = (yyvsp[0].dec).type;
	  	(yyval.dec).width = (yyvsp[0].dec).width;
  	}
#line 3242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 1335 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3250 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 1342 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3258 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 1346 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 1351 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3274 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 1358 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3282 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 1363 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

  	}
#line 3290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 1370 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3298 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 1374 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3306 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 1381 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	
	}
#line 3314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 1386 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3322 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 1393 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3330 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 1398 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 1403 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3346 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 1410 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3354 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 1417 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 3362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 1422 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		// update the type of the direct_declarator i.e. convert it to pointer
      	// and then update its type, size, offset in symbol table
		symbol_type * head = new symbol_type(type_dec_VOID);
		symbol_type * to_Change;
		if((yyvsp[0].exxp).loc->nestedTable == NULL)
		{
			to_Change = (yyvsp[0].exxp).type;
		}
		else
		{
			to_Change = (yyvsp[0].exxp).loc->nestedTable->entries[0]->type;
		}

		head->next = to_Change;
		symbol_type * ptr = head;

		int oldSize = (yyvsp[0].exxp).loc->size;
		if((yyvsp[0].exxp).loc->nestedTable != NULL)
		{
			oldSize = (yyvsp[0].exxp).loc->nestedTable->entries[0]->size;
		}

		int newSize = SIZE_OF_PTR;

		while(ptr->next->next != NULL)
		{
			newSize *= ptr->size;
			ptr = ptr->next;
		}

		symbol_type * ptr1 = (yyvsp[-1].dec).type;
		while(ptr1->next != NULL)
		{
			ptr1 = ptr1->next;
		}
		ptr1->next = ptr->next;
		ptr->next = (yyvsp[-1].dec).type;

		if((yyvsp[0].exxp).loc->nestedTable == NULL)
		{
			curr_sym_table->offset += newSize - oldSize;
			(yyvsp[0].exxp).loc->type = head->next;
			(yyvsp[0].exxp).loc->size = newSize;
			(yyvsp[0].exxp).type = (yyvsp[0].exxp).loc->type;
		}
		else
		{
			// If the given is a function,
			// we need to change the offset values of all the entries in symbol_table of function after this
			for(int i = 1 ; i < (int)(yyvsp[0].exxp).loc->nestedTable->entries.size(); i++)
			{
				(yyvsp[0].exxp).loc->nestedTable->entries[i]->offset += newSize - oldSize;
			}
			(yyvsp[0].exxp).loc->nestedTable->entries[0]->type = head->next;
			(yyvsp[0].exxp).loc->nestedTable->entries[0]->size = newSize;
			(yyvsp[0].exxp).loc->nestedTable->offset += newSize - oldSize;
			(yyvsp[0].exxp).type = head->next;
		}
		(yyval.exxp) = (yyvsp[0].exxp);

		delete head;
	}
#line 3430 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 1489 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   		// find the identifier in the symbol table
   		// if its not present, insert it ; else return 
   		(yyval.exxp).loc = curr_sym_table->lookUp(*((yyvsp[0].id).strVal));
   		curr_sym_table->update((yyval.exxp).loc, quad_arr.type, quad_arr.width);
   		(yyval.exxp).type = (yyval.exxp).loc->type;
   	}
#line 3442 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 1498 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   		(yyval.exxp) = (yyvsp[-1].exxp);
   	}
#line 3450 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 1503 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   		symbol_type * p = new symbol_type(type_dec_ARR);
   		if((yyvsp[-1].exxp).loc == NULL)
   		{
			if((yyvsp[-4].exxp).type->type_d == type_dec_INT || (yyvsp[-4].exxp).type->type_d == type_dec_VOID || (yyvsp[-4].exxp).type->type_d == type_dec_CHAR || (yyvsp[-4].exxp).type->type_d == type_dec_DOUBLE)
   			{
				p = new symbol_type(type_dec_PTR);
   				p->next = (yyvsp[-4].exxp).type;
   				(yyvsp[-4].exxp).type = p;
   				(yyvsp[-4].exxp).loc->type = p;
   				int oldSize = (yyvsp[-4].exxp).loc->size;
   				(yyvsp[-4].exxp).loc->size += SIZE_OF_PTR - oldSize;
   				curr_sym_table->offset += SIZE_OF_PTR - oldSize;
   				(yyval.exxp) = (yyvsp[-4].exxp);
   			}
   			else
   			{
   				yyerror("Incomplete type for array\n");
   				exit(1);
   			}
   		}
   		else
   		{
   			if((yyvsp[-1].exxp).loc->type->type_d == type_dec_INT)
   			{
   				p->size = (yyvsp[-1].exxp).loc->init.intVal;
   			}
   			else
   			{
   				yyerror("Non integer type array size");
   				exit(1);
   			}

   			int oldSize = (yyvsp[-4].exxp).loc->size;

   			p->next = (yyvsp[-4].exxp).type;
   			symbol_type * head = new symbol_type();
   			head->next = (yyvsp[-4].exxp).type;
   			symbol_type * ptr = head;

   			while(ptr->next->next != NULL)
   			{
   				ptr = ptr->next;
   			}

   			p->next = ptr->next;
   			ptr->next = p;

   			int newSize;
   			if((yyvsp[-1].exxp).loc != NULL)
   			{
   				newSize = head->next->getSize();
   			}
   			else
   			{
   				newSize = SIZE_OF_PTR;
   			}
				   			
   			(yyvsp[-4].exxp).type = head->next;
   			(yyvsp[-4].exxp).loc->type = head->next;
   			(yyvsp[-4].exxp).loc->size = newSize;

   			for(int i = (int)curr_sym_table->entries.size() - 1 ; i >=0 ; --i)
   			{
   				if(curr_sym_table->entries[i] == (yyvsp[-4].exxp).loc) break;
   				curr_sym_table->entries[i]->offset += newSize - oldSize;
   			}

   			curr_sym_table->offset += newSize - oldSize;
   			(yyval.exxp) = (yyvsp[-4].exxp);
		}
   	}
#line 3527 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 1577 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 1582 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3543 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 1587 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3551 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 1592 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   		// this is a function declaration
		// save the return type of the function
		// save the nestedTable of the function
		// update its name in Global symbol table
   		symbol_entry * sym = glob_sym_table->lookUp((yyvsp[-3].exxp).loc->name);
   		glob_sym_table->update(sym, new symbol_type(type_dec_FUNC), SIZE_OF_FUNC);
   		sym->nestedTable = curr_sym_table;
   		curr_sym_table->table_name = "ST (" + (yyvsp[-3].exxp).loc->name + ")";
   		quad_arr.emit(quad((yyvsp[-3].exxp).loc->name, "", opcode_dec_FUNC_START, ""));
				   		
   		(yyvsp[-3].exxp).loc->name = "__retVal";
   		(yyvsp[-3].exxp).loc->scope = "return";
   		(yyval.exxp).loc = sym;
   		(yyval.exxp).type = (yyval.exxp).loc->type;
  	}
#line 3572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 1610 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3580 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 1617 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	
	}
#line 3588 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 1622 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

    }
#line 3596 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 1629 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3604 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 1638 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 1643 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 1650 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	(yyval.exxp) = (yyvsp[0].exxp);
   	}
#line 3628 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 1655 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp).trueList = NULL;
	 	(yyval.exxp).falseList = NULL;
 	  	(yyval.exxp).loc = NULL;
   	}
#line 3638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 1664 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
 		(yyval.dec).type = new symbol_type(type_dec_PTR);
	}
#line 3646 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 1669 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
 	 	(yyval.dec).type = new symbol_type(type_dec_PTR);
     	(yyval.dec).type->next = (yyvsp[0].dec).type;
	}
#line 3655 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 1678 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3663 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 1683 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3671 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 1691 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3679 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 1696 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3687 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 1703 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3695 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 1708 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3703 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 1715 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	 	// remembering the scope of read IDENTIFIER
	   	(yyvsp[0].exxp).loc->scope = "param";
	}
#line 3712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 1721 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 1728 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3728 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 1733 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 1740 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	// saving the latest width and type that are detected needed for declaration of variables
		(yyval.dec).type = (yyvsp[0].dec).type;
	   	(yyval.dec).width = (yyvsp[0].dec).width;
	}
#line 3746 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 1750 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 3754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 1755 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 1760 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3770 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 1768 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 1773 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 1780 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3794 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 1787 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 1792 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 1799 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3818 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 1803 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

   	}
#line 3826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 168:
#line 1810 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 169:
#line 1815 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3842 "y.tab.c" /* yacc.c:1646  */
    break;

  case 170:
#line 1823 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3850 "y.tab.c" /* yacc.c:1646  */
    break;

  case 171:
#line 1828 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	   	(yyval.nextList) = (yyvsp[0].nextList);
	}
#line 3858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 172:
#line 1833 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	(yyval.nextList) = NULL;
   	}
#line 3866 "y.tab.c" /* yacc.c:1646  */
    break;

  case 173:
#line 1838 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	(yyval.nextList) = (yyvsp[0].nextList);
   	}
#line 3874 "y.tab.c" /* yacc.c:1646  */
    break;

  case 174:
#line 1843 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	  	(yyval.nextList) = (yyvsp[0].nextList);
   	}
#line 3882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 175:
#line 1848 "ass5_13CS30015.y" /* yacc.c:1646  */
    { 
   	  	(yyval.nextList) = (yyvsp[0].nextList);
   	}
#line 3890 "y.tab.c" /* yacc.c:1646  */
    break;

  case 176:
#line 1855 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3898 "y.tab.c" /* yacc.c:1646  */
    break;

  case 177:
#line 1860 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 178:
#line 1865 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 3914 "y.tab.c" /* yacc.c:1646  */
    break;

  case 179:
#line 1872 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.nextList) = (yyvsp[-1].nextList);
	}
#line 3922 "y.tab.c" /* yacc.c:1646  */
    break;

  case 180:
#line 1879 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	(yyval.nextList) = (yyvsp[0].nextList);
	}
#line 3930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 181:
#line 1884 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.nextList) = NULL;
	}
#line 3938 "y.tab.c" /* yacc.c:1646  */
    break;

  case 182:
#line 1891 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.nextList) = (yyvsp[0].nextList);
	}
#line 3946 "y.tab.c" /* yacc.c:1646  */
    break;

  case 183:
#line 1896 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
     	// used for list of statements
     	backPatch((yyvsp[-2].nextList), (yyvsp[-1].instr));
     	(yyval.nextList) = (yyvsp[0].nextList);
     }
#line 3956 "y.tab.c" /* yacc.c:1646  */
    break;

  case 184:
#line 1904 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.nextList) = NULL;
	}
#line 3964 "y.tab.c" /* yacc.c:1646  */
    break;

  case 185:
#line 1909 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
    	(yyval.nextList) = (yyvsp[0].nextList);
    }
#line 3972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 187:
#line 1920 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		(yyval.exxp) = (yyvsp[0].exxp);
	}
#line 3980 "y.tab.c" /* yacc.c:1646  */
    break;

  case 188:
#line 1925 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		(yyval.exxp).type = new symbol_type(type_dec_BOOL);
  		(yyval.exxp).trueList = NULL;
  		(yyval.exxp).falseList = NULL;
  	}
#line 3990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 189:
#line 1934 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	// N has been inserted to take care of 'fall through' through expression
	 	// Hence, non-bool expressions are used as conditions by converting them to bool
	 	list_nodes * exit_exprss = mergeList((yyvsp[-1].nextList), new list_nodes(quad_arr.nxt_instr));
	 	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
	 	backPatch((yyvsp[-4].nextList), quad_arr.nxt_instr);
	 	// convert expression to bool
	 	conv2Bool(&((yyvsp[-5].exxp)));
		backPatch((yyvsp[-5].exxp).trueList, (yyvsp[-2].instr));
		// all dangling gotos are merged and stored for exiting the if condition
		(yyval.nextList) = mergeList((yyvsp[-5].exxp).falseList, exit_exprss);
		(yyval.nextList) = mergeList((yyval.nextList), (yyvsp[0].nextList));
	}
#line 4008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 190:
#line 1949 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
		//cout<<"debug+++++++++"<<"for if else here"<<endl;
		// N has been inserted to take care of 'fall through' through expression
		// Hence, non-bool expressions are used as conditions by converting them to bool
		list_nodes * exit_exprss = mergeList((yyvsp[-4].nextList), (yyvsp[-3].nextList));
		exit_exprss = mergeList(exit_exprss, new list_nodes(quad_arr.nxt_instr));
		quad_arr.emit(quad("","",opcode_dec_GOTO,""));
		backPatch((yyvsp[-7].nextList), quad_arr.nxt_instr);
		// convert expression to bool
		conv2Bool(&((yyvsp[-8].exxp)));
		backPatch((yyvsp[-8].exxp).trueList, (yyvsp[-5].instr));
		backPatch((yyvsp[-8].exxp).falseList, (yyvsp[-1].instr));
		// all dangling gotos are merged and stored for exiting the if condition
		(yyval.nextList) = mergeList(exit_exprss, (yyvsp[0].nextList));
	}
#line 4028 "y.tab.c" /* yacc.c:1646  */
    break;

  case 191:
#line 1966 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4036 "y.tab.c" /* yacc.c:1646  */
    break;

  case 192:
#line 1974 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	// N has been inserted to take care of 'fall through' through expression
   	 	// Hence, non-bool expressions are used as conditions by converting them to bool
	 	list_nodes * exit_exprss = mergeList((yyvsp[0].nextList), new list_nodes(quad_arr.nxt_instr));
	 	// emit a goto after statement to goto condition again
	 	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
	 	backPatch((yyvsp[-3].nextList), quad_arr.nxt_instr);
	 	conv2Bool(&((yyvsp[-4].exxp)));
	 	backPatch((yyvsp[-4].exxp).trueList, (yyvsp[-1].instr));
	 	backPatch(exit_exprss, (yyvsp[-5].instr));
	 	(yyval.nextList) = (yyvsp[-4].exxp).falseList;
	}
#line 4053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 193:
#line 1988 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
     	// N has been inserted to take care of 'fall through' through expression
   	 	// Hence, non-bool expressions are used as conditions by converting them to bool
     	conv2Bool(&((yyvsp[-2].exxp)));
	 	backPatch((yyvsp[-2].exxp).trueList, (yyvsp[-7].instr));
   	 	backPatch((yyvsp[-6].nextList), (yyvsp[-3].instr));
	 	(yyval.nextList) = (yyvsp[-2].exxp).falseList;
    }
#line 4066 "y.tab.c" /* yacc.c:1646  */
    break;

  case 194:
#line 1998 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
     	// N has been inserted to take care of 'fall through' through expression
   	 	// Hence, non-bool expressions are used as conditions by converting them to bool
   	 	list_nodes * exit_exprss = mergeList((yyvsp[0].nextList), new list_nodes(quad_arr.nxt_instr));
   	 	// emit a goto after body of for loop to goto increment part
   	 	// and also to go a block which does conversion from expression to bool
   	 	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
   	 	backPatch(exit_exprss, (yyvsp[-5].instr));
   	 	backPatch((yyvsp[-3].nextList), (yyvsp[-9].instr));
   	 	backPatch((yyvsp[-7].nextList), quad_arr.nxt_instr);
   	 	conv2Bool(&((yyvsp[-8].exxp)));
   	 	backPatch((yyvsp[-8].exxp).trueList, (yyvsp[-1].instr));
   	 	(yyval.nextList) = (yyvsp[-8].exxp).falseList;
    }
#line 4085 "y.tab.c" /* yacc.c:1646  */
    break;

  case 195:
#line 2014 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
   	 	// Not Required
   	}
#line 4093 "y.tab.c" /* yacc.c:1646  */
    break;

  case 196:
#line 2022 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 197:
#line 2027 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4109 "y.tab.c" /* yacc.c:1646  */
    break;

  case 198:
#line 2032 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4117 "y.tab.c" /* yacc.c:1646  */
    break;

  case 199:
#line 2037 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
  		quad_arr.emit(quad("","",opcode_dec_RETURN,""));
  		(yyval.nextList) = NULL;
  	}
#line 4126 "y.tab.c" /* yacc.c:1646  */
    break;

  case 200:
#line 2043 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
    	expression_type e;
    	e.type = curr_sym_table->entries[0]->type;
    	// convert the expression to the return type of the function
    	typeCheck(&e, &((yyvsp[-1].exxp)), true);
    	// TAC for return value
    	quad_arr.emit(quad((yyvsp[-1].exxp).loc->name,"",opcode_dec_RETURN_VAL,""));
    	(yyval.nextList) = NULL;
    }
#line 4140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 201:
#line 2057 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4148 "y.tab.c" /* yacc.c:1646  */
    break;

  case 202:
#line 2062 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4156 "y.tab.c" /* yacc.c:1646  */
    break;

  case 203:
#line 2069 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 204:
#line 2074 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	  	// quad_arr.vec.pop_back();
		// quad_arr.nxt_instr--;
	}
#line 4173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 205:
#line 2082 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	 	// save the nestedTable of the function in the global symbol table
	 	(yyvsp[-2].exxp).loc->nestedTable = curr_sym_table;
	 	curr_sym_table = new symbol_table();
	 	// backPatch all dangling gotos to the next instruction
	 	backPatch((yyvsp[0].nextList), quad_arr.nxt_instr);
	 	quad_arr.emit(quad((yyvsp[-2].exxp).loc->name,"",opcode_dec_FUNC_END,""));
	}
#line 4186 "y.tab.c" /* yacc.c:1646  */
    break;

  case 206:
#line 2094 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 207:
#line 2099 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4202 "y.tab.c" /* yacc.c:1646  */
    break;

  case 208:
#line 2106 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4210 "y.tab.c" /* yacc.c:1646  */
    break;

  case 209:
#line 2111 "ass5_13CS30015.y" /* yacc.c:1646  */
    {

	}
#line 4218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 210:
#line 2117 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	// Non-terminal to mark an entry point in 3-address code.
	// It stores the index of next quad to be generated and it is used in control statements
	// M.instr => Index of the quad generated at M
	cout<<"assiging M now"<<quad_arr.nxt_instr<<endl;
	(yyval.instr) = quad_arr.nxt_instr;
}
#line 4230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 211:
#line 2128 "ass5_13CS30015.y" /* yacc.c:1646  */
    {
	// Non-terminal to emit a goto to guard against fall through
	// It also stores the list of the index of goto
	(yyval.nextList) = new list_nodes(quad_arr.nxt_instr);
	quad_arr.emit(quad("","",opcode_dec_GOTO,""));
}
#line 4241 "y.tab.c" /* yacc.c:1646  */
    break;


#line 4245 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 2137 "ass5_13CS30015.y" /* yacc.c:1906  */


void yyerror(const char* s) {
	printf("%s", s);
}
