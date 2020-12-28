
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
#include "parser.h"
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
     CONSTANT_STRING = 264,
     PTR_OP = 265,
     INC_OP = 266,
     DEC_OP = 267,
     LEFT_OP = 268,
     RIGHT_OP = 269,
     LE_OP = 270,
     GE_OP = 271,
     EQ_OP = 272,
     NE_OP = 273,
     AND_OP = 274,
     OR_OP = 275,
     MUL_ASSIGN = 276,
     DIV_ASSIGN = 277,
     MOD_ASSIGN = 278,
     ADD_ASSIGN = 279,
     SUB_ASSIGN = 280,
     LEFT_ASSIGN = 281,
     RIGHT_ASSIGN = 282,
     AND_ASSIGN = 283,
     XOR_ASSIGN = 284,
     OR_ASSIGN = 285,
     TYPE_NAME = 286,
     CHAR = 287,
     INT = 288,
     DOUBLE = 289,
     VOID = 290,
     BOOL = 291,
     STRING = 292,
     CASE = 293,
     IF = 294,
     ELSE = 295,
     SWITCH = 296,
     WHILE = 297,
     DO = 298,
     FOR = 299,
     GOTO = 300,
     CONTINUE = 301,
     BREAK = 302,
     RETURN = 303,
     TRUE = 304,
     FALSE = 305,
     LOWER_THAN_ELSE = 306
   };
#endif
/* Tokens.  */
#define IDENTIFIER 258
#define CONSTANT 259
#define STRING_LITERAL 260
#define SIZEOF 261
#define CONSTANT_INT 262
#define CONSTANT_DOUBLE 263
#define CONSTANT_STRING 264
#define PTR_OP 265
#define INC_OP 266
#define DEC_OP 267
#define LEFT_OP 268
#define RIGHT_OP 269
#define LE_OP 270
#define GE_OP 271
#define EQ_OP 272
#define NE_OP 273
#define AND_OP 274
#define OR_OP 275
#define MUL_ASSIGN 276
#define DIV_ASSIGN 277
#define MOD_ASSIGN 278
#define ADD_ASSIGN 279
#define SUB_ASSIGN 280
#define LEFT_ASSIGN 281
#define RIGHT_ASSIGN 282
#define AND_ASSIGN 283
#define XOR_ASSIGN 284
#define OR_ASSIGN 285
#define TYPE_NAME 286
#define CHAR 287
#define INT 288
#define DOUBLE 289
#define VOID 290
#define BOOL 291
#define STRING 292
#define CASE 293
#define IF 294
#define ELSE 295
#define SWITCH 296
#define WHILE 297
#define DO 298
#define FOR 299
#define GOTO 300
#define CONTINUE 301
#define BREAK 302
#define RETURN 303
#define TRUE 304
#define FALSE 305
#define LOWER_THAN_ELSE 306




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 21 "compiler.y"

	struct gramTree* gt;



/* Line 214 of yacc.c  */
#line 238 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 250 "y.tab.c"

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
#define YYFINAL  13
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   732

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  76
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  47
/* YYNRULES -- Number of rules.  */
#define YYNRULES  156
/* YYNRULES -- Number of states.  */
#define YYNSTATES  271

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   306

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    59,     2,     2,     2,    65,    58,     2,
      73,    74,    63,    62,    52,    61,    57,    64,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    53,    51,
      66,    54,    67,    70,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    55,     2,    56,    68,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    71,    69,    72,    60,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    75
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,     9,    11,    13,    15,    19,
      21,    23,    28,    32,    37,    40,    43,    45,    49,    51,
      54,    57,    60,    62,    64,    66,    68,    70,    74,    78,
      82,    84,    88,    92,    94,    98,   102,   104,   108,   112,
     116,   120,   122,   126,   130,   132,   136,   138,   142,   144,
     148,   150,   154,   156,   160,   162,   166,   168,   170,   172,
     174,   176,   178,   180,   182,   184,   186,   188,   190,   194,
     197,   201,   203,   207,   209,   213,   215,   217,   219,   221,
     223,   225,   227,   231,   236,   241,   245,   250,   255,   259,
     261,   265,   268,   271,   273,   275,   279,   283,   286,   290,
     294,   299,   303,   308,   311,   315,   319,   324,   326,   330,
     335,   337,   340,   344,   349,   352,   354,   357,   361,   364,
     366,   368,   370,   372,   374,   376,   380,   385,   388,   392,
     394,   397,   399,   401,   403,   406,   412,   420,   426,   432,
     440,   447,   455,   462,   470,   474,   477,   480,   483,   487,
     489,   492,   494,   496,   501,   505,   507
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      77,     0,    -1,   119,    -1,     3,    -1,    49,    -1,    50,
      -1,     7,    -1,     8,    -1,    73,    95,    74,    -1,     9,
      -1,    78,    -1,    79,    55,    95,    56,    -1,    79,    73,
      74,    -1,    79,    73,    80,    74,    -1,    79,    11,    -1,
      79,    12,    -1,    93,    -1,    80,    52,    93,    -1,    79,
      -1,    11,    81,    -1,    12,    81,    -1,    82,    81,    -1,
      62,    -1,    61,    -1,    60,    -1,    59,    -1,    81,    -1,
      83,    63,    81,    -1,    83,    64,    81,    -1,    83,    65,
      81,    -1,    83,    -1,    84,    62,    83,    -1,    84,    61,
      83,    -1,    84,    -1,    85,    13,    84,    -1,    85,    14,
      84,    -1,    85,    -1,    86,    66,    85,    -1,    86,    67,
      85,    -1,    86,    15,    85,    -1,    86,    16,    85,    -1,
      86,    -1,    87,    17,    86,    -1,    87,    18,    86,    -1,
      87,    -1,    88,    58,    87,    -1,    88,    -1,    89,    68,
      88,    -1,    89,    -1,    90,    69,    89,    -1,    90,    -1,
      91,    19,    90,    -1,    91,    -1,    92,    20,    91,    -1,
      92,    -1,    81,    94,    93,    -1,    54,    -1,    21,    -1,
      22,    -1,    23,    -1,    24,    -1,    25,    -1,    26,    -1,
      27,    -1,    28,    -1,    29,    -1,    30,    -1,    93,    -1,
      95,    52,    93,    -1,    99,    51,    -1,    99,    97,    51,
      -1,    98,    -1,    97,    52,    98,    -1,   100,    -1,   100,
      54,   105,    -1,    35,    -1,    32,    -1,    33,    -1,    34,
      -1,    36,    -1,    37,    -1,     3,    -1,    73,   100,    74,
      -1,   100,    55,    93,    56,    -1,   100,    55,    63,    56,
      -1,   100,    55,    56,    -1,   100,    73,   101,    74,    -1,
     100,    73,   103,    74,    -1,   100,    73,    74,    -1,   102,
      -1,   101,    52,   102,    -1,    99,   100,    -1,    99,   104,
      -1,    99,    -1,     3,    -1,   103,    52,     3,    -1,    73,
     104,    74,    -1,    55,    56,    -1,    55,    93,    56,    -1,
     104,    55,    56,    -1,   104,    55,    93,    56,    -1,    55,
      63,    56,    -1,   104,    55,    63,    56,    -1,    73,    74,
      -1,    73,   101,    74,    -1,   104,    73,    74,    -1,   104,
      73,   101,    74,    -1,    93,    -1,    71,   106,    72,    -1,
      71,   106,    52,    72,    -1,   105,    -1,   107,   105,    -1,
     106,    52,   105,    -1,   106,    52,   107,   105,    -1,   108,
      54,    -1,   109,    -1,   108,   109,    -1,    55,    92,    56,
      -1,    57,     3,    -1,   111,    -1,   112,    -1,   115,    -1,
     116,    -1,   117,    -1,   118,    -1,     3,    53,   110,    -1,
      38,    92,    53,   110,    -1,    71,    72,    -1,    71,   113,
      72,    -1,   114,    -1,   113,   114,    -1,    96,    -1,   110,
      -1,    51,    -1,    95,    51,    -1,    39,    73,    95,    74,
     110,    -1,    39,    73,    95,    74,   110,    40,   110,    -1,
      41,    73,    95,    74,   110,    -1,    42,    73,    95,    74,
     110,    -1,    43,   110,    42,    73,    95,    74,    51,    -1,
      44,    73,   115,   115,    74,   110,    -1,    44,    73,   115,
     115,    95,    74,   110,    -1,    44,    73,    96,   115,    74,
     110,    -1,    44,    73,    96,   115,    95,    74,   110,    -1,
      45,     3,    51,    -1,    46,    51,    -1,    47,    51,    -1,
      48,    51,    -1,    48,    95,    51,    -1,   120,    -1,   119,
     120,    -1,   121,    -1,    96,    -1,    99,   100,   122,   112,
      -1,    99,   100,   112,    -1,    96,    -1,   122,    96,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    61,    61,    68,    72,    76,    79,    82,    85,    88,
      95,    98,   102,   106,   110,   114,   121,   124,   131,   135,
     139,   143,   150,   153,   156,   159,   166,   169,   172,   175,
     182,   185,   188,   195,   198,   202,   210,   213,   216,   219,
     223,   231,   234,   238,   245,   248,   255,   258,   265,   268,
     275,   278,   286,   289,   297,   301,   308,   311,   315,   319,
     323,   327,   331,   335,   339,   343,   347,   355,   359,   367,
     370,   377,   380,   386,   389,   397,   400,   403,   406,   409,
     412,   420,   424,   428,   433,   437,   441,   445,   449,   458,
     461,   467,   470,   473,   479,   482,   488,   491,   494,   497,
     500,   503,   506,   509,   512,   515,   518,   525,   528,   532,
     539,   542,   545,   548,   554,   560,   563,   569,   572,   579,
     582,   585,   588,   591,   594,   601,   604,   611,   614,   620,
     623,   629,   632,   638,   641,   648,   651,   654,   661,   664,
     667,   670,   673,   676,   683,   686,   689,   692,   695,   701,
     704,   710,   715,   723,   726,   732,   735
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT",
  "STRING_LITERAL", "SIZEOF", "CONSTANT_INT", "CONSTANT_DOUBLE",
  "CONSTANT_STRING", "PTR_OP", "INC_OP", "DEC_OP", "LEFT_OP", "RIGHT_OP",
  "LE_OP", "GE_OP", "EQ_OP", "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN",
  "DIV_ASSIGN", "MOD_ASSIGN", "ADD_ASSIGN", "SUB_ASSIGN", "LEFT_ASSIGN",
  "RIGHT_ASSIGN", "AND_ASSIGN", "XOR_ASSIGN", "OR_ASSIGN", "TYPE_NAME",
  "CHAR", "INT", "DOUBLE", "VOID", "BOOL", "STRING", "CASE", "IF", "ELSE",
  "SWITCH", "WHILE", "DO", "FOR", "GOTO", "CONTINUE", "BREAK", "RETURN",
  "TRUE", "FALSE", "';'", "','", "':'", "'='", "'['", "']'", "'.'", "'&'",
  "'!'", "'~'", "'-'", "'+'", "'*'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "'{'", "'}'", "'('", "')'", "LOWER_THAN_ELSE", "$accept",
  "Program", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "and_expression",
  "exclusive_or_expression", "inclusive_or_expression",
  "logical_and_expression", "logical_or_expression",
  "assignment_expression", "assignment_operator", "expression",
  "declaration", "init_declarator_list", "init_declarator",
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
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,    59,    44,    58,    61,    91,    93,    46,    38,    33,
     126,    45,    43,    42,    47,    37,    60,    62,    94,   124,
      63,   123,   125,    40,    41,   306
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    76,    77,    78,    78,    78,    78,    78,    78,    78,
      79,    79,    79,    79,    79,    79,    80,    80,    81,    81,
      81,    81,    82,    82,    82,    82,    83,    83,    83,    83,
      84,    84,    84,    85,    85,    85,    86,    86,    86,    86,
      86,    87,    87,    87,    88,    88,    89,    89,    90,    90,
      91,    91,    92,    92,    93,    93,    94,    94,    94,    94,
      94,    94,    94,    94,    94,    94,    94,    95,    95,    96,
      96,    97,    97,    98,    98,    99,    99,    99,    99,    99,
      99,   100,   100,   100,   100,   100,   100,   100,   100,   101,
     101,   102,   102,   102,   103,   103,   104,   104,   104,   104,
     104,   104,   104,   104,   104,   104,   104,   105,   105,   105,
     106,   106,   106,   106,   107,   108,   108,   109,   109,   110,
     110,   110,   110,   110,   110,   111,   111,   112,   112,   113,
     113,   114,   114,   115,   115,   116,   116,   116,   117,   117,
     117,   117,   117,   117,   118,   118,   118,   118,   118,   119,
     119,   120,   120,   121,   121,   122,   122
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     4,     3,     4,     2,     2,     1,     3,     1,     2,
       2,     2,     1,     1,     1,     1,     1,     3,     3,     3,
       1,     3,     3,     1,     3,     3,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     3,     1,     3,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     1,     3,     4,     4,     3,     4,     4,     3,     1,
       3,     2,     2,     1,     1,     3,     3,     2,     3,     3,
       4,     3,     4,     2,     3,     3,     4,     1,     3,     4,
       1,     2,     3,     4,     2,     1,     2,     3,     2,     1,
       1,     1,     1,     1,     1,     3,     4,     2,     3,     1,
       2,     1,     1,     1,     2,     5,     7,     5,     5,     7,
       6,     7,     6,     7,     3,     2,     2,     2,     3,     1,
       2,     1,     1,     4,     3,     1,     2
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    76,    77,    78,    75,    79,    80,     0,   152,     0,
       2,   149,   151,     1,    81,    69,     0,     0,    71,    73,
     150,     0,    70,     0,     0,     0,     0,     0,   155,     0,
     154,     0,    82,    72,    73,     3,     6,     7,     9,     0,
       0,     4,     5,    25,    24,    23,    22,     0,     0,    10,
      18,    26,     0,    30,    33,    36,    41,    44,    46,    48,
      50,    52,    54,   107,    74,    85,     0,     0,     3,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,   133,
     127,    67,     0,   131,   132,   119,   120,     0,   129,   121,
     122,   123,   124,    94,    88,    93,     0,    89,     0,   156,
     153,    19,    20,     0,     0,   110,     0,     0,     0,   115,
       0,    14,    15,     0,     0,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    56,     0,    21,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    83,     0,    26,
       0,     0,     0,     0,     0,     0,     0,   145,   146,   147,
       0,   134,     0,   128,   130,     0,     0,    91,    92,     0,
      86,     0,    87,     0,   118,     0,   108,   111,   114,   116,
       8,     0,    12,     0,    16,    55,    27,    28,    29,    32,
      31,    34,    35,    39,    40,    37,    38,    42,    43,    45,
      47,    49,    51,    53,   125,     0,     0,     0,     0,     0,
       0,     0,   144,   148,    68,    97,     0,     0,   103,     0,
       0,     0,     0,    90,    95,   117,   109,   112,     0,    11,
       0,    13,   126,     0,     0,     0,     0,     0,     0,   101,
      98,   104,    96,    99,     0,     0,   105,     0,   113,    17,
     135,   137,   138,     0,     0,     0,     0,     0,   102,   100,
     106,     0,     0,   142,     0,   140,     0,   136,   139,   143,
     141
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     7,    49,    50,   183,    51,    52,    53,    54,    55,
      56,    57,    58,    59,    60,    61,    62,    81,   126,    82,
       8,    17,    18,    29,    21,    96,    97,    98,   168,    64,
     106,   107,   108,   109,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    10,    11,    12,    31
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -134
static const yytype_int16 yypact[] =
{
     191,  -134,  -134,  -134,  -134,  -134,  -134,    15,  -134,     6,
     191,  -134,  -134,  -134,  -134,  -134,     4,   -21,  -134,   495,
    -134,   -36,  -134,     4,   644,   551,   248,    19,  -134,     6,
    -134,   145,  -134,  -134,   148,  -134,  -134,  -134,  -134,   659,
     659,  -134,  -134,  -134,  -134,  -134,  -134,   484,   659,  -134,
      56,   314,   659,   -29,    72,   159,    89,   249,   -35,     1,
      13,    75,    97,  -134,  -134,  -134,    70,    74,   122,   659,
      85,   120,   124,   382,   131,   184,   111,   144,   322,  -134,
    -134,  -134,   217,  -134,  -134,  -134,  -134,   315,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,    10,   -34,  -134,    28,  -134,
    -134,  -134,  -134,   659,   206,  -134,    55,   644,   175,  -134,
      54,  -134,  -134,   659,    36,  -134,  -134,  -134,  -134,  -134,
    -134,  -134,  -134,  -134,  -134,  -134,   659,  -134,   659,   659,
     659,   659,   659,   659,   659,   659,   659,   659,   659,   659,
     659,   659,   659,   659,   659,   659,  -134,  -134,   382,  -134,
      -4,   659,   659,   659,   171,   449,   180,  -134,  -134,  -134,
     219,  -134,   659,  -134,  -134,   566,    26,   -27,    35,   191,
    -134,   251,  -134,    -6,  -134,   464,  -134,  -134,  -134,  -134,
    -134,   -31,  -134,    66,  -134,  -134,  -134,  -134,  -134,   -29,
     -29,    72,    72,   159,   159,   159,   159,    89,    89,   249,
     -35,     1,    13,    75,  -134,   382,    69,    79,    86,   185,
     389,   389,  -134,  -134,  -134,  -134,   205,   222,  -134,   102,
      46,   581,   114,  -134,  -134,  -134,  -134,  -134,   644,  -134,
     659,  -134,  -134,   382,   382,   382,   659,    63,   203,  -134,
    -134,  -134,  -134,  -134,   223,   232,  -134,   109,  -134,  -134,
     262,  -134,  -134,   115,   382,   116,   382,   118,  -134,  -134,
    -134,   382,   252,  -134,   382,  -134,   382,  -134,  -134,  -134,
    -134
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -134,  -134,  -134,  -134,  -134,   105,  -134,   141,   167,    82,
     135,   163,   164,   162,   168,   166,   -61,   -23,  -134,   -37,
     -14,  -134,   290,     0,    -3,  -133,   146,  -134,   150,   -43,
    -134,   139,  -134,   209,   -70,  -134,   140,  -134,   241,  -123,
    -134,  -134,  -134,  -134,   335,  -134,  -134
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       9,    63,    67,   154,   105,    28,    19,    14,   150,    14,
       9,   110,    83,    14,   145,    13,   145,    99,   169,    25,
      34,   162,    93,   141,    63,   229,    34,    95,    25,    14,
      22,    23,   211,   219,   128,   129,   130,    27,    32,    35,
     170,   160,   173,    36,    37,    38,    27,    39,    40,   205,
     225,     1,     2,     3,     4,     5,     6,    15,     1,     2,
       3,     4,     5,     6,   177,   165,    35,   111,   112,   142,
      36,    37,    38,    83,    39,    40,   181,    16,   204,    16,
     171,   165,   143,   166,    63,    41,    42,   237,   238,   247,
     221,   184,   167,    94,   144,    43,    44,    45,    46,   166,
     218,   221,   172,   185,   135,   136,   162,   175,   222,    48,
     182,   113,    41,    42,   206,   207,   208,   145,   230,   222,
     242,   162,    43,    44,    45,    46,   146,   176,   180,   114,
     147,   162,   227,   131,   132,   232,    48,   254,   162,   214,
     231,   210,   217,   233,   101,   102,     1,     2,     3,     4,
       5,     6,    63,   234,   169,   137,   138,   127,   151,    30,
     235,   169,   157,   250,   251,   252,    95,   162,   162,    95,
     162,   100,   133,   134,   149,   148,   241,     1,     2,     3,
       4,     5,     6,   260,   263,   248,   265,   156,   246,   262,
     264,   267,   266,   152,   269,   158,   270,   153,   245,   253,
     255,   257,    24,    25,   155,    63,    35,   249,   149,   174,
      36,    37,    38,   209,    39,    40,    26,   193,   194,   195,
     196,    27,    95,     1,     2,     3,     4,     5,     6,   178,
     103,   212,   104,   186,   187,   188,   149,   149,   149,   149,
     149,   149,   149,   149,   149,   149,   149,   149,   149,   149,
     149,    68,    41,    42,   224,    36,    37,    38,   236,    39,
      40,   239,    43,    44,    45,    46,   139,   140,   161,   162,
     213,   162,   189,   190,   197,   198,    48,   256,   240,   258,
       1,     2,     3,     4,     5,     6,    69,    70,   259,    71,
      72,    73,    74,    75,    76,    77,    78,    41,    42,    79,
     191,   192,   261,   268,   199,   201,   200,    43,    44,    45,
      46,   203,   202,    33,   228,   223,   220,   179,    68,    26,
      80,    48,    36,    37,    38,    35,    39,    40,   164,    36,
      37,    38,     0,    39,    40,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,    20,     0,     1,     2,     3,
       4,     5,     6,    69,    70,     0,    71,    72,    73,    74,
      75,    76,    77,    78,    41,    42,    79,     0,   125,     0,
       0,    41,    42,   159,    43,    44,    45,    46,     0,     0,
       0,    43,    44,    45,    46,    68,    26,   163,    48,    36,
      37,    38,    35,    39,    40,    48,    36,    37,    38,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,     0,    71,    72,    73,    74,    75,    76,    77,
      78,    41,    42,    79,     0,     0,     0,     0,    41,    42,
      79,    43,    44,    45,    46,     0,     0,     0,    43,    44,
      45,    46,    35,    26,     0,    48,    36,    37,    38,     0,
      39,    40,    48,     0,     0,     0,     0,    35,     0,     0,
       0,    36,    37,    38,     0,    39,    40,     0,     0,     0,
       0,     1,     2,     3,     4,     5,     6,    35,     0,     0,
       0,    36,    37,    38,     0,    39,    40,     0,    41,    42,
      79,     0,     0,     0,     0,     0,     0,     0,    43,    44,
      45,    46,     0,    41,    42,     0,     0,     0,     0,   103,
       0,   104,    48,    43,    44,    45,    46,     1,     2,     3,
       4,     5,     6,    41,    42,    47,   226,    48,     0,   103,
       0,   104,     0,    43,    44,    45,    46,     0,     0,    24,
      25,     0,     0,     0,    35,    47,     0,    48,    36,    37,
      38,     0,    39,    40,     0,     0,    26,     0,    27,    35,
       0,     0,     0,    36,    37,    38,     0,    39,    40,     0,
       0,     0,     0,     0,    35,     0,     0,     0,    36,    37,
      38,     0,    39,    40,     0,     0,     0,     0,     0,     0,
      41,    42,     0,     0,     0,     0,     0,    65,     0,     0,
      43,    44,    45,    46,    66,    41,    42,     0,     0,     0,
       0,     0,   215,     0,    48,    43,    44,    45,    46,   216,
      41,    42,     0,     0,     0,     0,     0,   243,     0,    48,
      43,    44,    45,    46,   244,     0,     0,    35,     0,     0,
       0,    36,    37,    38,    48,    39,    40,     0,     0,     0,
       0,     0,    35,     0,     0,     0,    36,    37,    38,     0,
      39,    40,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    41,    42,     0,     0,     0,     0,     0,
       0,     0,     0,    43,    44,    45,    46,     0,    41,    42,
       0,     0,     0,     0,     0,    47,     0,    48,    43,    44,
      45,    46,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    48
};

static const yytype_int16 yycheck[] =
{
       0,    24,    25,    73,    47,    19,     9,     3,    69,     3,
      10,    48,    26,     3,    20,     0,    20,    31,    52,    55,
      23,    52,     3,    58,    47,    56,    29,    27,    55,     3,
      51,    52,   155,   166,    63,    64,    65,    73,    74,     3,
      74,    78,   103,     7,     8,     9,    73,    11,    12,    53,
      56,    32,    33,    34,    35,    36,    37,    51,    32,    33,
      34,    35,    36,    37,   107,    55,     3,    11,    12,    68,
       7,     8,     9,    87,    11,    12,   113,    73,   148,    73,
      52,    55,    69,    73,   107,    49,    50,   210,   211,   222,
      55,   114,    95,    74,    19,    59,    60,    61,    62,    73,
      74,    55,    74,   126,    15,    16,    52,    52,    73,    73,
      74,    55,    49,    50,   151,   152,   153,    20,    52,    73,
      74,    52,    59,    60,    61,    62,    56,    72,    74,    73,
      56,    52,   175,    61,    62,   205,    73,    74,    52,   162,
      74,   155,   165,    74,    39,    40,    32,    33,    34,    35,
      36,    37,   175,    74,    52,    66,    67,    52,    73,    19,
      74,    52,    51,   233,   234,   235,   166,    52,    52,   169,
      52,    31,    13,    14,    69,    53,    74,    32,    33,    34,
      35,    36,    37,    74,   254,   228,   256,     3,    74,    74,
      74,   261,    74,    73,   264,    51,   266,    73,   221,   236,
     237,   238,    54,    55,    73,   228,     3,   230,   103,     3,
       7,     8,     9,    42,    11,    12,    71,   135,   136,   137,
     138,    73,   222,    32,    33,    34,    35,    36,    37,    54,
      55,    51,    57,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,     3,    49,    50,     3,     7,     8,     9,    73,    11,
      12,    56,    59,    60,    61,    62,    17,    18,    51,    52,
      51,    52,   131,   132,   139,   140,    73,    74,    56,    56,
      32,    33,    34,    35,    36,    37,    38,    39,    56,    41,
      42,    43,    44,    45,    46,    47,    48,    49,    50,    51,
     133,   134,    40,    51,   141,   143,   142,    59,    60,    61,
      62,   145,   144,    23,   175,   169,   166,   108,     3,    71,
      72,    73,     7,     8,     9,     3,    11,    12,    87,     7,
       8,     9,    -1,    11,    12,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    10,    -1,    32,    33,    34,
      35,    36,    37,    38,    39,    -1,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    54,    -1,
      -1,    49,    50,    51,    59,    60,    61,    62,    -1,    -1,
      -1,    59,    60,    61,    62,     3,    71,    72,    73,     7,
       8,     9,     3,    11,    12,    73,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      38,    39,    -1,    41,    42,    43,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    49,    50,
      51,    59,    60,    61,    62,    -1,    -1,    -1,    59,    60,
      61,    62,     3,    71,    -1,    73,     7,     8,     9,    -1,
      11,    12,    73,    -1,    -1,    -1,    -1,     3,    -1,    -1,
      -1,     7,     8,     9,    -1,    11,    12,    -1,    -1,    -1,
      -1,    32,    33,    34,    35,    36,    37,     3,    -1,    -1,
      -1,     7,     8,     9,    -1,    11,    12,    -1,    49,    50,
      51,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    59,    60,
      61,    62,    -1,    49,    50,    -1,    -1,    -1,    -1,    55,
      -1,    57,    73,    59,    60,    61,    62,    32,    33,    34,
      35,    36,    37,    49,    50,    71,    72,    73,    -1,    55,
      -1,    57,    -1,    59,    60,    61,    62,    -1,    -1,    54,
      55,    -1,    -1,    -1,     3,    71,    -1,    73,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    71,    -1,    73,     3,
      -1,    -1,    -1,     7,     8,     9,    -1,    11,    12,    -1,
      -1,    -1,    -1,    -1,     3,    -1,    -1,    -1,     7,     8,
       9,    -1,    11,    12,    -1,    -1,    -1,    -1,    -1,    -1,
      49,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,    -1,
      59,    60,    61,    62,    63,    49,    50,    -1,    -1,    -1,
      -1,    -1,    56,    -1,    73,    59,    60,    61,    62,    63,
      49,    50,    -1,    -1,    -1,    -1,    -1,    56,    -1,    73,
      59,    60,    61,    62,    63,    -1,    -1,     3,    -1,    -1,
      -1,     7,     8,     9,    73,    11,    12,    -1,    -1,    -1,
      -1,    -1,     3,    -1,    -1,    -1,     7,     8,     9,    -1,
      11,    12,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    49,    50,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    59,    60,    61,    62,    -1,    49,    50,
      -1,    -1,    -1,    -1,    -1,    71,    -1,    73,    59,    60,
      61,    62,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    73
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    32,    33,    34,    35,    36,    37,    77,    96,    99,
     119,   120,   121,     0,     3,    51,    73,    97,    98,   100,
     120,   100,    51,    52,    54,    55,    71,    73,    96,    99,
     112,   122,    74,    98,   100,     3,     7,     8,     9,    11,
      12,    49,    50,    59,    60,    61,    62,    71,    73,    78,
      79,    81,    82,    83,    84,    85,    86,    87,    88,    89,
      90,    91,    92,    93,   105,    56,    63,    93,     3,    38,
      39,    41,    42,    43,    44,    45,    46,    47,    48,    51,
      72,    93,    95,    96,   110,   111,   112,   113,   114,   115,
     116,   117,   118,     3,    74,    99,   101,   102,   103,    96,
     112,    81,    81,    55,    57,   105,   106,   107,   108,   109,
      95,    11,    12,    55,    73,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    54,    94,    81,    63,    64,
      65,    61,    62,    13,    14,    15,    16,    66,    67,    17,
      18,    58,    68,    69,    19,    20,    56,    56,    53,    81,
      92,    73,    73,    73,   110,    73,     3,    51,    51,    51,
      95,    51,    52,    72,   114,    55,    73,   100,   104,    52,
      74,    52,    74,    92,     3,    52,    72,   105,    54,   109,
      74,    95,    74,    80,    93,    93,    81,    81,    81,    83,
      83,    84,    84,    85,    85,    85,    85,    86,    86,    87,
      88,    89,    90,    91,   110,    53,    95,    95,    95,    42,
      96,   115,    51,    51,    93,    56,    63,    93,    74,   101,
     104,    55,    73,   102,     3,    56,    72,   105,   107,    56,
      52,    74,   110,    74,    74,    74,    73,   115,   115,    56,
      56,    74,    74,    56,    63,    93,    74,   101,   105,    93,
     110,   110,   110,    95,    74,    95,    74,    95,    56,    56,
      74,    40,    74,   110,    74,   110,    74,   110,    51,   110,
     110
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
	}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 76 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 79 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 82 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 85 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 88 "compiler.y"
    {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 95 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 98 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
		//数组调用
	}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 102 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
		//函数调用
	}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 106 "compiler.y"
    {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
		//函数调用
	}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 110 "compiler.y"
    {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 114 "compiler.y"
    {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 121 "compiler.y"
    {
		(yyval.gt) = create_tree("argument_expression_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 124 "compiler.y"
    {
		(yyval.gt) = create_tree("argument_expression_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 131 "compiler.y"
    {
		//printf("postfix");
		(yyval.gt) = create_tree("unary_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 135 "compiler.y"
    {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 139 "compiler.y"
    {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 143 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 150 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 153 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 156 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 159 "compiler.y"
    {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 166 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 169 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 172 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 175 "compiler.y"
    {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 182 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 185 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 188 "compiler.y"
    {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 195 "compiler.y"
    {
		(yyval.gt) = create_tree("shift_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 198 "compiler.y"
    {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 202 "compiler.y"
    {
		//<<
		(yyval.gt) = create_tree("shift_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 210 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 213 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 216 "compiler.y"
    {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 219 "compiler.y"
    {
		// <= 
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 223 "compiler.y"
    {
		// >=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 231 "compiler.y"
    {
		(yyval.gt) = create_tree("equality_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 234 "compiler.y"
    {
		// ==
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 238 "compiler.y"
    {
		// !=
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 245 "compiler.y"
    {
		(yyval.gt) = create_tree("and_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 248 "compiler.y"
    {
		(yyval.gt) = create_tree("and_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 255 "compiler.y"
    {
		(yyval.gt) = create_tree("exclusive_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 258 "compiler.y"
    {
		(yyval.gt) = create_tree("exclusive_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 265 "compiler.y"
    {
		(yyval.gt) = create_tree("inclusive_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 268 "compiler.y"
    {
		(yyval.gt) = create_tree("inclusive_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 275 "compiler.y"
    {
		(yyval.gt) = create_tree("logical_and_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 278 "compiler.y"
    {
		//&&
		(yyval.gt) = create_tree("logical_and_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 286 "compiler.y"
    {
		(yyval.gt) = create_tree("logical_or_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 289 "compiler.y"
    {
		//||
		(yyval.gt) = create_tree("logical_or_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 297 "compiler.y"
    {
		//条件表达式
		(yyval.gt) = create_tree("assignment_expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 301 "compiler.y"
    {
		(yyval.gt) = create_tree("assignment_expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 308 "compiler.y"
    {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 311 "compiler.y"
    {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 315 "compiler.y"
    {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 319 "compiler.y"
    {
		// %=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 323 "compiler.y"
    {
		// += 
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 327 "compiler.y"
    {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 331 "compiler.y"
    {
		// <<=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 335 "compiler.y"
    {
		// >>=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 339 "compiler.y"
    {
		// &=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 343 "compiler.y"
    {
		// ^=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 347 "compiler.y"
    {
		// |=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 355 "compiler.y"
    {
		//赋值表达式
		(yyval.gt) = create_tree("expression",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 359 "compiler.y"
    {
		//逗号表达式
		(yyval.gt) = create_tree("expression",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 367 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt)); //?
	}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 370 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 377 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 380 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 386 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 389 "compiler.y"
    {
		(yyval.gt) = create_tree("init_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 397 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 400 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 403 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 406 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));	
	}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 409 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 412 "compiler.y"
    {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 420 "compiler.y"
    {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 424 "compiler.y"
    {
		//.....
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 428 "compiler.y"
    {
		//数组
		//printf("assignment_expression");
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 433 "compiler.y"
    {
		//....
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 437 "compiler.y"
    {
		//数组
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 441 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 445 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 449 "compiler.y"
    {
		//函数
		(yyval.gt) = create_tree("declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 458 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 461 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 467 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 470 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 473 "compiler.y"
    {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 479 "compiler.y"
    {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 482 "compiler.y"
    {
		(yyval.gt) = create_tree("identifier_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 488 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 491 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 494 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 497 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 500 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 503 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 506 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 509 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 512 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 515 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 518 "compiler.y"
    {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 525 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 528 "compiler.y"
    {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 532 "compiler.y"
    {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 539 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 542 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 545 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 548 "compiler.y"
    {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt));
	}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 554 "compiler.y"
    {
		(yyval.gt) = create_tree("designation",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 560 "compiler.y"
    {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 563 "compiler.y"
    {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 569 "compiler.y"
    {
		(yyval.gt) = create_tree("designator",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 572 "compiler.y"
    {
		(yyval.gt) = create_tree("designator",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 579 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 582 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 585 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 588 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 123:

/* Line 1455 of yacc.c  */
#line 591 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 594 "compiler.y"
    {
		(yyval.gt) = create_tree("statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 601 "compiler.y"
    {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 604 "compiler.y"
    {
		(yyval.gt) = create_tree("labeled_statement",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 611 "compiler.y"
    {
		(yyval.gt) = create_tree("compound_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 614 "compiler.y"
    {
		(yyval.gt) = create_tree("compound_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 129:

/* Line 1455 of yacc.c  */
#line 620 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 623 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 629 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 632 "compiler.y"
    {
		(yyval.gt) = create_tree("block_item",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 638 "compiler.y"
    {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 641 "compiler.y"
    {
		(yyval.gt) = create_tree("expression_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 648 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 651 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 654 "compiler.y"
    {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 661 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",5,(yyvsp[(1) - (5)].gt),(yyvsp[(2) - (5)].gt),(yyvsp[(3) - (5)].gt),(yyvsp[(4) - (5)].gt),(yyvsp[(5) - (5)].gt));
	}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 664 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 667 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[(1) - (6)].gt),(yyvsp[(2) - (6)].gt),(yyvsp[(3) - (6)].gt),(yyvsp[(4) - (6)].gt),(yyvsp[(5) - (6)].gt),(yyvsp[(6) - (6)].gt));
	}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 670 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 673 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[(1) - (6)].gt),(yyvsp[(2) - (6)].gt),(yyvsp[(3) - (6)].gt),(yyvsp[(4) - (6)].gt),(yyvsp[(5) - (6)].gt),(yyvsp[(6) - (6)].gt));
	}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 676 "compiler.y"
    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[(1) - (7)].gt),(yyvsp[(2) - (7)].gt),(yyvsp[(3) - (7)].gt),(yyvsp[(4) - (7)].gt),(yyvsp[(5) - (7)].gt),(yyvsp[(6) - (7)].gt),(yyvsp[(7) - (7)].gt));
	}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 683 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt));
	}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 686 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 689 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 692 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 695 "compiler.y"
    {
		(yyval.gt) = create_tree("jump_statement",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 701 "compiler.y"
    {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 704 "compiler.y"
    {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 710 "compiler.y"
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[(1) - (1)].gt));
		//函数定义
		//printf("function_definition");
	}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 715 "compiler.y"
    {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[(1) - (1)].gt));
		//变量声明
		//printf("declaration");
	}
    break;

  case 153:

/* Line 1455 of yacc.c  */
#line 723 "compiler.y"
    {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[(1) - (4)].gt),(yyvsp[(2) - (4)].gt),(yyvsp[(3) - (4)].gt),(yyvsp[(4) - (4)].gt));
	}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 726 "compiler.y"
    {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[(1) - (3)].gt),(yyvsp[(2) - (3)].gt),(yyvsp[(3) - (3)].gt));
	}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 732 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[(1) - (1)].gt));
	}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 735 "compiler.y"
    {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[(1) - (2)].gt),(yyvsp[(2) - (2)].gt));
	}
    break;



/* Line 1455 of yacc.c  */
#line 3248 "y.tab.c"
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
#line 740 "compiler.y"



void yyerror(char const *s)
{
	fflush(stdout);
	printf("\n%*s\n%*s\n", column, "^", column, s);
}


int main(int argc,char* argv[]) {

	yyin = fopen(argv[1],"r");
	yyparse();
	printf("\n");
	Parser parser(root);
	freeGramTree(root);
	fclose(yyin);
	return 0;
}
