
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "compiler.y"

#include <cstdlib>
#include <cstdio>
#include <string>
#include "tree.h"
#include "block.h"
#include "Praser.h"
using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*); 


/* Line 189 of yacc.c  */
#line 94 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     IDENTIFIER = 258,
     CONSTANT = 259,
     STRING_LITERAL = 260,
     SIZEOF = 261,
     CONSTANT_INT = 262,
     CONSTANT_DOUBLE = 263,
     PTR_OP = 264,
     INC_OP = 265,
     DEC_OP = 266,
     LEFT_OP = 267,
     RIGHT_OP = 268,
     LE_OP = 269,
     GE_OP = 270,
     EQ_OP = 271,
     NE_OP = 272,
     AND_OP = 273,
     OR_OP = 274,
     MUL_ASSIGN = 275,
     DIV_ASSIGN = 276,
     MOD_ASSIGN = 277,
     ADD_ASSIGN = 278,
     SUB_ASSIGN = 279,
     LEFT_ASSIGN = 280,
     RIGHT_ASSIGN = 281,
     AND_ASSIGN = 282,
     XOR_ASSIGN = 283,
     OR_ASSIGN = 284,
     TYPE_NAME = 285,
     CHAR = 286,
     INT = 287,
     DOUBLE = 288,
     VOID = 289,
     BOOL = 290,
     CASE = 291,
     IF = 292,
     ELSE = 293,
     SWITCH = 294,
     WHILE = 295,
     DO = 296,
     FOR = 297,
     GOTO = 298,
     CONTINUE = 299,
     BREAK = 300,
     RETURN = 301,
     TRUE = 302,
     FALSE = 303,
     LOWER_THAN_ELSE = 304
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define CONSTANT_INT 262
#define CONSTANT_DOUBLE 263
#define PTR_OP 264
#define INC_OP 265
#define DEC_OP 266
#define LEFT_OP 267
#define RIGHT_OP 268
#define LE_OP 269
#define GE_OP 270
#define EQ_OP 271
#define NE_OP 272
#define AND_OP 273
#define OR_OP 274
#define MUL_ASSIGN 275
#define DIV_ASSIGN 276
#define MOD_ASSIGN 277
#define ADD_ASSIGN 278
#define SUB_ASSIGN 279
#define LEFT_ASSIGN 280
#define RIGHT_ASSIGN 281
#define AND_ASSIGN 282
#define XOR_ASSIGN 283
#define OR_ASSIGN 284
#define TYPE_NAME 285
#define CHAR 286
#define INT 287
#define DOUBLE 288
#define VOID 289
#define BOOL 290
#define CASE 291
#define IF 292
#define ELSE 293
#define SWITCH 294
#define WHILE 295
#define DO 296
#define FOR 297
#define GOTO 298
#define CONTINUE 299
#define BREAK 300
#define RETURN 301
#define TRUE 302
#define FALSE 303
#define LOWER_THAN_ELSE 304




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 21 "compiler.y"

	struct gramTree* gt;



/* Line 214 of yacc.c  */
#line 234 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 246 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   790

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  75
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  155
/* YYNRULES -- Number of states.  */
#define YYNSTATES  270

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   304

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    57,     2,     2,    73,    63,    56,     2,
      71,    72,    61,    60,    50,    59,    55,    62,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    51,    49,
      64,    52,    65,    68,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    53,     2,    54,    66,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,    67,    70,    58,     2,     2,     2,
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
      45,    46,    47,    48,    74
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    26,    30,    35,    38,    41,    43,    47,    49,    52,
      55,    58,    60,    62,    64,    66,    68,    70,    74,    78,
      82,    84,    88,    92,    94,    98,   102,   104,   108,   112,
     116,   120,   122,   126,   130,   132,   136,   138,   142,   144,
     148,   150,   154,   156,   160,   162,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   194,
     197,   201,   203,   207,   209,   213,   215,   217,   219,   221,
     223,   225,   229,   234,   239,   243,   248,   253,   257,   259,
     263,   266,   269,   271,   273,   277,   281,   284,   288,   292,
     297,   301,   306,   309,   313,   317,   322,   324,   328,   333,
     335,   338,   342,   347,   350,   352,   355,   359,   362,   364,
     366,   368,   370,   372,   374,   378,   383,   386,   390,   392,
     395,   397,   399,   401,   404,   410,   418,   424,   430,   438,
     445,   453,   460,   468,   472,   475,   478,   481,   485,   487,
     490,   492,   494,   499,   503,   505
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      76,     0,    -1,   118,    -1,     3,    -1,    47,    -1,    48,
      -1,     7,    -1,     8,    -1,    71,    94,    72,    -1,    77,
      -1,    78,    53,    94,    54,    -1,    78,    71,    72,    -1,
      78,    71,    79,    72,    -1,    78,    10,    -1,    78,    11,
      -1,    92,    -1,    79,    50,    92,    -1,    78,    -1,    10,
      80,    -1,    11,    80,    -1,    81,    80,    -1,    60,    -1,
      59,    -1,    58,    -1,    57,    -1,    73,    -1,    80,    -1,
      82,    61,    80,    -1,    82,    62,    80,    -1,    82,    63,
      80,    -1,    82,    -1,    83,    60,    82,    -1,    83,    59,
      82,    -1,    83,    -1,    84,    12,    83,    -1,    84,    13,
      83,    -1,    84,    -1,    85,    64,    84,    -1,    85,    65,
      84,    -1,    85,    14,    84,    -1,    85,    15,    84,    -1,
      85,    -1,    86,    16,    85,    -1,    86,    17,    85,    -1,
      86,    -1,    87,    56,    86,    -1,    87,    -1,    88,    66,
      87,    -1,    88,    -1,    89,    67,    88,    -1,    89,    -1,
      90,    18,    89,    -1,    90,    -1,    91,    19,    90,    -1,
      91,    -1,    80,    93,    92,    -1,    52,    -1,    20,    -1,
      21,    -1,    22,    -1,    23,    -1,    24,    -1,    25,    -1,
      26,    -1,    27,    -1,    28,    -1,    29,    -1,    92,    -1,
      94,    50,    92,    -1,    98,    49,    -1,    98,    96,    49,
      -1,    97,    -1,    96,    50,    97,    -1,    99,    -1,    99,
      52,   104,    -1,    34,    -1,    31,    -1,    32,    -1,    33,
      -1,    35,    -1,     3,    -1,    71,    99,    72,    -1,    99,
      53,    92,    54,    -1,    99,    53,    61,    54,    -1,    99,
      53,    54,    -1,    99,    71,   100,    72,    -1,    99,    71,
     102,    72,    -1,    99,    71,    72,    -1,   101,    -1,   100,
      50,   101,    -1,    98,    99,    -1,    98,   103,    -1,    98,
      -1,     3,    -1,   102,    50,     3,    -1,    71,   103,    72,
      -1,    53,    54,    -1,    53,    92,    54,    -1,   103,    53,
      54,    -1,   103,    53,    92,    54,    -1,    53,    61,    54,
      -1,   103,    53,    61,    54,    -1,    71,    72,    -1,    71,
     100,    72,    -1,   103,    71,    72,    -1,   103,    71,   100,
      72,    -1,    92,    -1,    69,   105,    70,    -1,    69,   105,
      50,    70,    -1,   104,    -1,   106,   104,    -1,   105,    50,
     104,    -1,   105,    50,   106,   104,    -1,   107,    52,    -1,
     108,    -1,   107,   108,    -1,    53,    91,    54,    -1,    55,
       3,    -1,   110,    -1,   111,    -1,   114,    -1,   115,    -1,
     116,    -1,   117,    -1,     3,    51,   109,    -1,    36,    91,
      51,   109,    -1,    69,    70,    -1,    69,   112,    70,    -1,
     113,    -1,   112,   113,    -1,    95,    -1,   109,    -1,    49,
      -1,    94,    49,    -1,    37,    71,    94,    72,   109,    -1,
      37,    71,    94,    72,   109,    38,   109,    -1,    39,    71,
      94,    72,   109,    -1,    40,    71,    94,    72,   109,    -1,
      41,   109,    40,    71,    94,    72,    49,    -1,    42,    71,
     114,   114,    72,   109,    -1,    42,    71,   114,   114,    94,
      72,   109,    -1,    42,    71,    95,   114,    72,   109,    -1,
      42,    71,    95,   114,    94,    72,   109,    -1,    43,     3,
      49,    -1,    44,    49,    -1,    45,    49,    -1,    46,    49,
      -1,    46,    94,    49,    -1,   119,    -1,   118,   119,    -1,
     120,    -1,    95,    -1,    98,    99,   121,   111,    -1,    98,
      99,   111,    -1,    95,    -1,   121,    95,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    68,    72,    78,    83,    90,    95,   102,
     105,   109,   113,   117,   121,   128,   131,   138,   142,   146,
     150,   157,   160,   163,   166,   169,   176,   179,   182,   185,
     192,   195,   198,   205,   208,   212,   220,   223,   226,   229,
     233,   241,   244,   248,   255,   258,   265,   268,   275,   278,
     285,   288,   296,   299,   307,   311,   318,   321,   325,   329,
     333,   337,   341,   345,   349,   353,   357,   365,   369,   377,
     380,   387,   390,   396,   399,   407,   410,   413,   416,   419,
     427,   431,   435,   440,   444,   448,   452,   456,   465,   468,
     474,   477,   480,   486,   489,   495,   498,   501,   504,   507,
     510,   513,   516,   519,   522,   525,   532,   535,   539,   546,
     549,   552,   555,   561,   567,   570,   576,   579,   586,   589,
     592,   595,   598,   601,   608,   611,   618,   621,   627,   630,
     636,   639,   645,   648,   655,   658,   661,   668,   671,   674,
     677,   680,   683,   690,   693,   696,   699,   702,   708,   711,
     717,   722,   730,   733,   739,   742
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE", "PTR_OP",
  "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "MOD_ASSIGN",
  "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN", "RIGHT_ASSIGN", "AND_ASSIGN",
  "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME", "CHAR", "INT", "DOUBLE", "VOID",
  "BOOL", "CASE", "IF", "ELSE", "SWITCH", "WHILE", "DO", "FOR", "GOTO",
  "CONTINUE", "BREAK", "RETURN", "TRUE", "FALSE", "';'", "','", "':'",
  "'='", "'['", "']'", "'.'", "'&'", "'!'", "'~'", "'-'", "'+'", "'*'",
  "'/'", "'%'", "'<'", "'>'", "'^'", "'|'", "'?'", "'{'", "'}'", "'('",
  "')'", "'$'", "LOWER_THAN_ELSE", "$accept", "Program",
  "primary_expression", "postfix_expression", "argument_expression_list",
  "unary_expression", "unary_operator", "multiplicative_expression",
  "additive_expression", "shift_expression", "relational_expression",
  "equality_expression", "and_expression", "exclusive_or_expression",
  "inclusive_or_expression", "logical_and_expression",
  "logical_or_expression", "assignment_expression", "assignment_operator",
  "expression", "declaration", "init_declarator_list", "init_declarator",
  "type_specifier", "declarator", "parameter_list",
  "parameter_declaration", "identifier_list", "abstract_declarator",
  "initializer", "initializer_list", "designation", "designator_list",
  "designator", "statement", "labeled_statement", "compound_statement",
  "block_item_list", "block_item", "expression_statement",
  "selection_statement", "iteration_statement", "jump_statement",
  "translation_unit", "external_declaration", "function_definition",
  "declaration_list", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,    59,
      44,    58,    61,    91,    93,    46,    38,    33,   126,    45,
      43,    42,    47,    37,    60,    62,    94,   124,    63,   123,
     125,    40,    41,    36,   304
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    75,    76,    77,    77,    77,    77,    77,    77,    78,
      78,    78,    78,    78,    78,    79,    79,    80,    80,    80,
      80,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      83,    83,    83,    84,    84,    84,    85,    85,    85,    85,
      85,    86,    86,    86,    87,    87,    88,    88,    89,    89,
      90,    90,    91,    91,    92,    92,    93,    93,    93,    93,
      93,    93,    93,    93,    93,    93,    93,    94,    94,    95,
      95,    96,    96,    97,    97,    98,    98,    98,    98,    98,
      99,    99,    99,    99,    99,    99,    99,    99,   100,   100,
     101,   101,   101,   102,   102,   103,   103,   103,   103,   103,
     103,   103,   103,   103,   103,   103,   104,   104,   104,   105,
     105,   105,   105,   106,   107,   107,   108,   108,   109,   109,
     109,   109,   109,   109,   110,   110,   111,   111,   112,   112,
     113,   113,   114,   114,   115,   115,   115,   116,   116,   116,
     116,   116,   116,   117,   117,   117,   117,   117,   118,   118,
     119,   119,   120,   120,   121,   121
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     3,     4,     4,     3,     1,     3,
       2,     2,     1,     1,     3,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     2,     3,     1,     2,
       1,     1,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     6,     7,     3,     2,     2,     2,     3,     1,     2,
       1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    76,    77,    78,    75,    79,     0,   151,     0,     2,
     148,   150,     1,    80,    69,     0,     0,    71,    73,   149,
       0,    70,     0,     0,     0,     0,     0,   154,     0,   153,
       0,    81,    72,    73,     3,     6,     7,     0,     0,     4,
       5,    24,    23,    22,    21,     0,     0,    25,     9,    17,
      26,     0,    30,    33,    36,    41,    44,    46,    48,    50,
      52,    54,   106,    74,    84,     0,     0,     3,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   132,   126,
      67,     0,   130,   131,   118,   119,     0,   128,   120,   121,
     122,   123,    93,    87,    92,     0,    88,     0,   155,   152,
      18,    19,     0,     0,   109,     0,     0,     0,   114,     0,
      13,    14,     0,     0,    57,    58,    59,    60,    61,    62,
      63,    64,    65,    66,    56,     0,    20,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    83,    82,     0,    26,     0,
       0,     0,     0,     0,     0,     0,   144,   145,   146,     0,
     133,     0,   127,   129,     0,     0,    90,    91,     0,    85,
       0,    86,     0,   117,     0,   107,   110,   113,   115,     8,
       0,    11,     0,    15,    55,    27,    28,    29,    32,    31,
      34,    35,    39,    40,    37,    38,    42,    43,    45,    47,
      49,    51,    53,   124,     0,     0,     0,     0,     0,     0,
       0,   143,   147,    68,    96,     0,     0,   102,     0,     0,
       0,     0,    89,    94,   116,   108,   111,     0,    10,     0,
      12,   125,     0,     0,     0,     0,     0,     0,   100,    97,
     103,    95,    98,     0,     0,   104,     0,   112,    16,   134,
     136,   137,     0,     0,     0,     0,     0,   101,    99,   105,
       0,     0,   141,     0,   139,     0,   135,   138,   142,   140
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    48,    49,   182,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    80,   125,    81,
       7,    16,    17,    28,    20,    95,    96,    97,   167,    63,
     105,   106,   107,   108,    83,    84,    85,    86,    87,    88,
      89,    90,    91,     9,    10,    11,    30
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -156
static const yytype_int16 yypact[] =
{
     231,  -156,  -156,  -156,  -156,  -156,    27,  -156,    12,   231,
    -156,  -156,  -156,  -156,  -156,    28,   161,  -156,    92,  -156,
     111,  -156,    28,   548,   454,   212,    16,  -156,    12,  -156,
     143,  -156,  -156,   117,  -156,  -156,  -156,   717,   717,  -156,
    -156,  -156,  -156,  -156,  -156,   436,   717,  -156,  -156,    34,
     279,   717,   118,   127,   201,    44,   200,   -14,    -1,    25,
      76,    94,  -156,  -156,  -156,    48,    67,    53,   717,    59,
      75,    96,   350,   113,   151,    49,   109,   590,  -156,  -156,
    -156,   218,  -156,  -156,  -156,  -156,   281,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,    36,   -37,  -156,   -36,  -156,  -156,
    -156,  -156,   717,   186,  -156,   -29,   548,    95,  -156,   -12,
    -156,  -156,   717,   617,  -156,  -156,  -156,  -156,  -156,  -156,
    -156,  -156,  -156,  -156,  -156,   717,  -156,   717,   717,   717,
     717,   717,   717,   717,   717,   717,   717,   717,   717,   717,
     717,   717,   717,   717,   717,  -156,  -156,   350,  -156,     1,
     717,   717,   717,   153,    22,   142,  -156,  -156,  -156,   228,
    -156,   717,  -156,  -156,   513,    43,   -31,    14,   231,  -156,
     198,  -156,   -11,  -156,   367,  -156,  -156,  -156,  -156,  -156,
      47,  -156,    50,  -156,  -156,  -156,  -156,  -156,   118,   118,
     127,   127,   201,   201,   201,   201,    44,    44,   200,   -14,
      -1,    25,    76,  -156,   350,    56,    79,    81,   132,   623,
     623,  -156,  -156,  -156,  -156,   152,   164,  -156,    83,   137,
     531,    85,  -156,  -156,  -156,  -156,  -156,   548,  -156,   717,
    -156,  -156,   350,   350,   350,   717,   690,   696,  -156,  -156,
    -156,  -156,  -156,   170,   196,  -156,    84,  -156,  -156,   252,
    -156,  -156,    87,   350,    88,   350,    90,  -156,  -156,  -156,
     350,   246,  -156,   350,  -156,   350,  -156,  -156,  -156,  -156
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -156,  -156,  -156,  -156,  -156,    98,  -156,   149,   154,   139,
     155,   156,   157,   167,   168,   166,   -34,   -22,  -156,   -40,
     -13,  -156,   275,     0,    -4,  -155,   165,  -156,   169,   -42,
    -156,   145,  -156,   225,   -61,  -156,    -2,  -156,   249,  -147,
    -156,  -156,  -156,  -156,   327,  -156,  -156
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       8,    62,    66,   104,    18,    27,   109,   210,   144,     8,
     218,   153,    82,   168,   170,    13,    29,    98,    33,    92,
     144,   174,    24,    62,    33,    34,    94,    12,    99,    35,
      36,    13,    37,    38,   149,   169,   171,   159,   161,    13,
      26,   175,   140,   224,   110,   111,    13,     1,     2,     3,
       4,     5,   204,     1,     2,     3,     4,     5,   134,   135,
     179,    14,   236,   237,   176,   141,   246,   220,   172,    39,
      40,    78,   180,    82,     1,     2,     3,     4,     5,    41,
      42,    43,    44,    15,    62,   221,   203,   112,    93,   164,
     166,   183,   142,    46,   143,    47,   164,   161,   156,    15,
     229,   228,   145,   184,   147,   113,   161,   165,   136,   137,
     205,   206,   207,   144,   165,   217,     1,     2,     3,     4,
       5,   146,   230,     1,     2,     3,     4,     5,   232,   161,
     150,   161,   226,   168,   168,   100,   101,   161,   161,   213,
     161,   209,   216,   231,    23,    24,   151,   177,   102,   126,
     103,   233,    62,   234,   155,   240,   259,   245,   157,   261,
     263,    25,   265,    26,    24,    94,   148,   152,    94,    23,
      24,   249,   250,   251,     1,     2,     3,     4,     5,   127,
     128,   129,    26,    31,   154,   247,   130,   131,    26,   173,
     220,   211,   262,   208,   264,   252,   254,   256,   244,   266,
     148,   223,   268,   235,   269,    62,   238,   248,   221,   241,
      21,    22,    25,   132,   133,    67,   138,   139,   239,    35,
      36,    94,    37,    38,   257,   185,   186,   187,   148,   148,
     148,   148,   148,   148,   148,   148,   148,   148,   148,   148,
     148,   148,   148,     1,     2,     3,     4,     5,    68,    69,
     258,    70,    71,    72,    73,    74,    75,    76,    77,    39,
      40,    78,     1,     2,     3,     4,     5,   160,   161,    41,
      42,    43,    44,   192,   193,   194,   195,   212,   161,   188,
     189,    25,    79,    46,    67,    47,   190,   191,    35,    36,
     260,    37,    38,   196,   197,   267,   198,    32,   199,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   200,
     202,   201,     1,     2,     3,     4,     5,    68,    69,   227,
      70,    71,    72,    73,    74,    75,    76,    77,    39,    40,
      78,   124,   178,   222,   219,   163,    19,     0,    41,    42,
      43,    44,     0,     0,     0,     0,     0,     0,     0,     0,
      25,   162,    46,    67,    47,     0,     0,    35,    36,     0,
      37,    38,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    35,    36,     0,    37,    38,     0,
       0,     0,     0,     0,     0,     0,    68,    69,     0,    70,
      71,    72,    73,    74,    75,    76,    77,    39,    40,    78,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,     0,     0,     0,    39,    40,     0,     0,     0,    25,
     102,    46,   103,    47,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,    45,   225,    46,    34,
      47,     0,     0,    35,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    34,     0,     0,
       0,    35,    36,     0,    37,    38,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    39,    40,     0,     0,     0,     0,   102,
       0,   103,     0,    41,    42,    43,    44,     0,     0,     0,
       0,    39,    40,     0,     0,    45,     0,    46,    64,    47,
       0,    41,    42,    43,    44,    65,    34,     0,     0,     0,
      35,    36,     0,    37,    38,    46,     0,    47,     0,     0,
       0,     0,     0,     0,    34,     0,     0,     0,    35,    36,
       0,    37,    38,     0,     0,     0,     0,     0,     0,     0,
       0,    34,     0,     0,     0,    35,    36,     0,    37,    38,
      39,    40,     0,     0,     0,     0,     0,   214,     0,     0,
      41,    42,    43,    44,   215,     0,     0,     0,    39,    40,
       0,     0,     0,     0,    46,   242,    47,     0,    41,    42,
      43,    44,   243,    34,     0,    39,    40,    35,    36,     0,
      37,    38,    46,     0,    47,    41,    42,    43,    44,     0,
       0,     0,     0,     0,     0,     0,     0,    45,     0,    46,
      34,    47,     0,     0,    35,    36,    34,    37,    38,     0,
      35,    36,     0,    37,    38,     0,     0,    39,    40,   158,
       0,     0,     0,     0,     0,     0,     0,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,     0,    47,    39,    40,     0,     0,     0,     0,
      39,    40,    78,     0,    41,    42,    43,    44,     0,     0,
      41,    42,    43,    44,     0,     0,     0,     0,    46,   181,
      47,     0,     0,    34,    46,     0,    47,    35,    36,    34,
      37,    38,     0,    35,    36,     0,    37,    38,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      34,     0,     0,     0,    35,    36,     0,    37,    38,     0,
       0,     0,     0,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,    39,    40,     0,     0,    41,    42,    43,
      44,     0,     0,    41,    42,    43,    44,     0,     0,     0,
       0,    46,   253,    47,    39,    40,     0,    46,   255,    47,
       0,     0,     0,     0,    41,    42,    43,    44,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      47
};

static const yytype_int16 yycheck[] =
{
       0,    23,    24,    45,     8,    18,    46,   154,    19,     9,
     165,    72,    25,    50,    50,     3,    18,    30,    22,     3,
      19,    50,    53,    45,    28,     3,    26,     0,    30,     7,
       8,     3,    10,    11,    68,    72,    72,    77,    50,     3,
      71,    70,    56,    54,    10,    11,     3,    31,    32,    33,
      34,    35,    51,    31,    32,    33,    34,    35,    14,    15,
      72,    49,   209,   210,   106,    66,   221,    53,   102,    47,
      48,    49,   112,    86,    31,    32,    33,    34,    35,    57,
      58,    59,    60,    71,   106,    71,   147,    53,    72,    53,
      94,   113,    67,    71,    18,    73,    53,    50,    49,    71,
      50,    54,    54,   125,    51,    71,    50,    71,    64,    65,
     150,   151,   152,    19,    71,    72,    31,    32,    33,    34,
      35,    54,    72,    31,    32,    33,    34,    35,    72,    50,
      71,    50,   174,    50,    50,    37,    38,    50,    50,   161,
      50,   154,   164,   204,    52,    53,    71,    52,    53,    51,
      55,    72,   174,    72,     3,    72,    72,    72,    49,    72,
      72,    69,    72,    71,    53,   165,    68,    71,   168,    52,
      53,   232,   233,   234,    31,    32,    33,    34,    35,    61,
      62,    63,    71,    72,    71,   227,    59,    60,    71,     3,
      53,    49,   253,    40,   255,   235,   236,   237,   220,   260,
     102,     3,   263,    71,   265,   227,    54,   229,    71,    72,
      49,    50,    69,    12,    13,     3,    16,    17,    54,     7,
       8,   221,    10,    11,    54,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   138,   139,   140,   141,
     142,   143,   144,    31,    32,    33,    34,    35,    36,    37,
      54,    39,    40,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    31,    32,    33,    34,    35,    49,    50,    57,
      58,    59,    60,   134,   135,   136,   137,    49,    50,   130,
     131,    69,    70,    71,     3,    73,   132,   133,     7,     8,
      38,    10,    11,   138,   139,    49,   140,    22,   141,    20,
      21,    22,    23,    24,    25,    26,    27,    28,    29,   142,
     144,   143,    31,    32,    33,    34,    35,    36,    37,   174,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    52,   107,   168,   165,    86,     9,    -1,    57,    58,
      59,    60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      69,    70,    71,     3,    73,    -1,    -1,     7,     8,    -1,
      10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    36,    37,    -1,    39,
      40,    41,    42,    43,    44,    45,    46,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    69,
      53,    71,    55,    73,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    69,    70,    71,     3,
      73,    -1,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,     8,    -1,    10,    11,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    -1,    -1,    53,
      -1,    55,    -1,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    47,    48,    -1,    -1,    69,    -1,    71,    54,    73,
      -1,    57,    58,    59,    60,    61,     3,    -1,    -1,    -1,
       7,     8,    -1,    10,    11,    71,    -1,    73,    -1,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,
      -1,    10,    11,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,     3,    -1,    -1,    -1,     7,     8,    -1,    10,    11,
      47,    48,    -1,    -1,    -1,    -1,    -1,    54,    -1,    -1,
      57,    58,    59,    60,    61,    -1,    -1,    -1,    47,    48,
      -1,    -1,    -1,    -1,    71,    54,    73,    -1,    57,    58,
      59,    60,    61,     3,    -1,    47,    48,     7,     8,    -1,
      10,    11,    71,    -1,    73,    57,    58,    59,    60,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    69,    -1,    71,
       3,    73,    -1,    -1,     7,     8,     3,    10,    11,    -1,
       7,     8,    -1,    10,    11,    -1,    -1,    47,    48,    49,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    71,    -1,    73,    47,    48,    -1,    -1,    -1,    -1,
      47,    48,    49,    -1,    57,    58,    59,    60,    -1,    -1,
      57,    58,    59,    60,    -1,    -1,    -1,    -1,    71,    72,
      73,    -1,    -1,     3,    71,    -1,    73,     7,     8,     3,
      10,    11,    -1,     7,     8,    -1,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       3,    -1,    -1,    -1,     7,     8,    -1,    10,    11,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    47,    48,    -1,
      -1,    -1,    -1,    47,    48,    -1,    -1,    57,    58,    59,
      60,    -1,    -1,    57,    58,    59,    60,    -1,    -1,    -1,
      -1,    71,    72,    73,    47,    48,    -1,    71,    72,    73,
      -1,    -1,    -1,    -1,    57,    58,    59,    60,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    71,    -1,
      73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    31,    32,    33,    34,    35,    76,    95,    98,   118,
     119,   120,     0,     3,    49,    71,    96,    97,    99,   119,
      99,    49,    50,    52,    53,    69,    71,    95,    98,   111,
     121,    72,    97,    99,     3,     7,     8,    10,    11,    47,
      48,    57,    58,    59,    60,    69,    71,    73,    77,    78,
      80,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,   104,    54,    61,    92,     3,    36,    37,
      39,    40,    41,    42,    43,    44,    45,    46,    49,    70,
      92,    94,    95,   109,   110,   111,   112,   113,   114,   115,
     116,   117,     3,    72,    98,   100,   101,   102,    95,   111,
      80,    80,    53,    55,   104,   105,   106,   107,   108,    94,
      10,    11,    53,    71,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    52,    93,    80,    61,    62,    63,
      59,    60,    12,    13,    14,    15,    64,    65,    16,    17,
      56,    66,    67,    18,    19,    54,    54,    51,    80,    91,
      71,    71,    71,   109,    71,     3,    49,    49,    49,    94,
      49,    50,    70,   113,    53,    71,    99,   103,    50,    72,
      50,    72,    91,     3,    50,    70,   104,    52,   108,    72,
      94,    72,    79,    92,    92,    80,    80,    80,    82,    82,
      83,    83,    84,    84,    84,    84,    85,    85,    86,    87,
      88,    89,    90,   109,    51,    94,    94,    94,    40,    95,
     114,    49,    49,    92,    54,    61,    92,    72,   100,   103,
      53,    71,   101,     3,    54,    70,   104,   106,    54,    50,
      72,   109,    72,    72,    72,    71,   114,   114,    54,    54,
      72,    72,    54,    61,    92,    72,   100,   104,    92,   109,
     109,   109,    94,    72,    94,    72,    94,    54,    54,    72,
      38,    72,   109,    72,   109,    72,   109,    49,   109,   109
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 61 "compiler.y"
    {
		root = create_tree("Program",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 68 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 72 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 78 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 83 "compiler.y"
    {
		//printf("%d",$1->int_value);
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
		// $$->type = "int";
		// $$->int_value = $1->int_value;
		
	}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 90 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
		// $$->type = "double";
		// $$->double_value = $1->double_value;
	}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 95 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 102 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 105 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
		//数组调用
	}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 109 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
		//函数调用
	}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 113 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
		//函数调用
	}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 117 "compiler.y"
    {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 121 "compiler.y"
    {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 128 "compiler.y"
    {
		(yyval.gt) = create_tree("argument_expression_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 131 "compiler.y"
    {
		(yyval.gt) = create_tree("argument_expression_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 138 "compiler.y"
    {
		//printf("postfix");
		(yyval.gt) = create_tree("unary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 142 "compiler.y"
    {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 146 "compiler.y"
    {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 150 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 157 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 160 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 163 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 166 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 169 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 176 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 179 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 182 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 185 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 192 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 195 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 198 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 205 "compiler.y"
    {
		(yyval.gt) = create_tree("shift_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 208 "compiler.y"
    {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 212 "compiler.y"
    {
		//>>
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 220 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 223 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 226 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 229 "compiler.y"
    {
		// <= 
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 233 "compiler.y"
    {
		// >=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 241 "compiler.y"
    {
		(yyval.gt) = create_tree("equality_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 244 "compiler.y"
    {
		// ==
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 248 "compiler.y"
    {
		// !=
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 255 "compiler.y"
    {
		(yyval.gt) = create_tree("and_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 258 "compiler.y"
    {
		(yyval.gt) = create_tree("and_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 265 "compiler.y"
    {
		(yyval.gt) = create_tree("exclusive_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 268 "compiler.y"
    {
		(yyval.gt) = create_tree("exclusive_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 275 "compiler.y"
    {
		(yyval.gt) = create_tree("inclusive_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 278 "compiler.y"
    {
		(yyval.gt) = create_tree("inclusive_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 285 "compiler.y"
    {
		(yyval.gt) = create_tree("logical_and_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 288 "compiler.y"
    {
		//&&
		(yyval.gt) = create_tree("logical_and_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 296 "compiler.y"
    {
		(yyval.gt) = create_tree("logical_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 299 "compiler.y"
    {
		//||
		(yyval.gt) = create_tree("logical_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 307 "compiler.y"
    {
		//条件表达式
		(yyval.gt) = create_tree("assignment_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 311 "compiler.y"
    {
		(yyval.gt) = create_tree("assignment_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 318 "compiler.y"
    {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 321 "compiler.y"
    {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 325 "compiler.y"
    {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 329 "compiler.y"
    {
		// %=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 333 "compiler.y"
    {
		// += 
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 337 "compiler.y"
    {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 341 "compiler.y"
    {
		// <<=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 345 "compiler.y"
    {
		// >>=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 349 "compiler.y"
    {
		// &=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 353 "compiler.y"
    {
		// ^=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 357 "compiler.y"
    {
		// |=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 365 "compiler.y"
    {
		//赋值表达式
		(yyval.gt) = create_tree("expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 369 "compiler.y"
    {
		//逗号表达式
		(yyval.gt) = create_tree("expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 377 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt)); //?
	}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 380 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 387 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 390 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 396 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 399 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 407 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 410 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 413 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 416 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));	
	}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 419 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 427 "compiler.y"
    {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 431 "compiler.y"
    {
		//.....
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 435 "compiler.y"
    {
		//数组
		//printf("assignment_expression");
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 440 "compiler.y"
    {
		//....
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 444 "compiler.y"
    {
		//数组
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 448 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 452 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 456 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 465 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 468 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 474 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 477 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 480 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 486 "compiler.y"
    {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 489 "compiler.y"
    {
		(yyval.gt) = create_tree("identifier_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 495 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 498 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 501 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 504 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 507 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 510 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 513 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 516 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 519 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 522 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 525 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 532 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 535 "compiler.y"
    {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 539 "compiler.y"
    {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 546 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 549 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 552 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 555 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt));
	}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 561 "compiler.y"
    {
		(yyval.gt) = create_tree("designation",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 567 "compiler.y"
    {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 570 "compiler.y"
    {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 576 "compiler.y"
    {
		(yyval.gt) = create_tree("designator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 579 "compiler.y"
    {
		(yyval.gt) = create_tree("designator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 586 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 589 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 592 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 595 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 598 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 601 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 608 "compiler.y"
    {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 611 "compiler.y"
    {
		(yyval.gt) = create_tree("labeled_statement",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 618 "compiler.y"
    {
		(yyval.gt) = create_tree("compound_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 621 "compiler.y"
    {
		(yyval.gt) = create_tree("compound_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 627 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 630 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 636 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 639 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 645 "compiler.y"
    {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 648 "compiler.y"
    {
		(yyval.gt) = create_tree("expression_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 655 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 658 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 661 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 668 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 671 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 674 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[(1) - (6)].gt),(yyvsp[(2) - (6)].gt),(yyvsp[(3) - (6)].gt),(yyvsp[(4) - (6)].gt),(yyvsp[(5) - (6)].gt),(yyvsp[(6) - (6)].gt));
	}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 677 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 680 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[(1) - (6)].gt),(yyvsp[(2) - (6)].gt),(yyvsp[(3) - (6)].gt),(yyvsp[(4) - (6)].gt),(yyvsp[(5) - (6)].gt),(yyvsp[(6) - (6)].gt));
	}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 683 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 690 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt));
	}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 693 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 696 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 699 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 702 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 708 "compiler.y"
    {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 711 "compiler.y"
    {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 717 "compiler.y"
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[(1) - (1)].gt));
		//函数定义
		//printf("function_definition");
	}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 722 "compiler.y"
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[(1) - (1)].gt));
		//变量声明
		//printf("declaration");
	}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 730 "compiler.y"
    {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 733 "compiler.y"
    {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 739 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 742 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;



/* Line 1455 of yacc.c  */
#line 3253 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 747 "compiler.y"



void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	
	//freopen("output/output.txt","w", stdout);
	yyparse();
	printf("\n");
	eval(root,0);	//输出语法分析树

	Praser praser(root);

	freeGramTree(root);

	fclose(yyin);
	return 0;
}
