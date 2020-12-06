/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "../yacc/compiler.y"

#include <cstdlib>
#include <cstdio>
#include <string>
#include "../source/tree.h"
// #include "../source/StaticFlags.h"

using namespace std;

extern char *yytext;
extern int column;
extern FILE * yyin;
extern FILE * yyout;
gramTree *root;
extern int yylineno;

int yylex(void);
void yyerror(const char*);

#line 90 "y.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
    CONSTANT_INT = 259,
    CONSTANT_DOUBLE = 260,
    INC_OP = 261,
    DEC_OP = 262,
    LE_OP = 263,
    GE_OP = 264,
    EQ_OP = 265,
    NE_OP = 266,
    AND_OP = 267,
    OR_OP = 268,
    MUL_ASSIGN = 269,
    DIV_ASSIGN = 270,
    ADD_ASSIGN = 271,
    SUB_ASSIGN = 272,
    CHAR = 273,
    INT = 274,
    DOUBLE = 275,
    VOID = 276,
    BOOL = 277,
    CASE = 278,
    IF = 279,
    ELSE = 280,
    SWITCH = 281,
    WHILE = 282,
    DO = 283,
    FOR = 284,
    CONTINUE = 285,
    BREAK = 286,
    RETURN = 287,
    TRUE = 288,
    FALSE = 289,
    LOWER_THAN_ELSE = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 21 "../yacc/compiler.y"

	struct gramTree* gt;

#line 179 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);





#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_uint8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  12
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   621

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  60
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  46
/* YYNRULES -- Number of rules.  */
#define YYNRULES  144
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  255

#define YYUNDEFTOK  2
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    43,     2,     2,     2,    49,    42,     2,
      57,    58,    47,    46,    36,    45,    41,    48,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    37,    35,
      50,    38,    51,    54,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    39,     2,    40,    52,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    55,    53,    56,    44,     2,     2,     2,
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
      59
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    59,    59,    66,    70,    76,    81,    88,    93,   100,
     103,   107,   111,   115,   119,   126,   129,   136,   140,   144,
     148,   155,   158,   161,   164,   171,   174,   177,   180,   187,
     190,   193,   200,   203,   206,   209,   213,   221,   224,   228,
     235,   238,   245,   248,   255,   258,   265,   268,   276,   279,
     287,   291,   298,   301,   305,   309,   313,   321,   325,   333,
     336,   343,   346,   352,   355,   363,   366,   369,   372,   375,
     383,   387,   391,   396,   400,   404,   408,   412,   421,   424,
     430,   433,   436,   442,   445,   451,   454,   457,   460,   463,
     466,   469,   472,   475,   478,   481,   488,   491,   495,   502,
     505,   508,   511,   517,   523,   526,   532,   535,   542,   545,
     548,   551,   554,   557,   564,   567,   574,   577,   583,   586,
     592,   595,   601,   604,   611,   614,   617,   624,   627,   630,
     633,   636,   639,   646,   649,   652,   655,   661,   664,   670,
     675,   683,   686,   692,   695
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "IDENTIFIER", "CONSTANT_INT",
  "CONSTANT_DOUBLE", "INC_OP", "DEC_OP", "LE_OP", "GE_OP", "EQ_OP",
  "NE_OP", "AND_OP", "OR_OP", "MUL_ASSIGN", "DIV_ASSIGN", "ADD_ASSIGN",
  "SUB_ASSIGN", "CHAR", "INT", "DOUBLE", "VOID", "BOOL", "CASE", "IF",
  "ELSE", "SWITCH", "WHILE", "DO", "FOR", "CONTINUE", "BREAK", "RETURN",
  "TRUE", "FALSE", "';'", "','", "':'", "'='", "'['", "']'", "'.'", "'&'",
  "'!'", "'~'", "'-'", "'+'", "'*'", "'/'", "'%'", "'<'", "'>'", "'^'",
  "'|'", "'?'", "'{'", "'}'", "'('", "')'", "LOWER_THAN_ELSE", "$accept",
  "Program", "primary_expression", "postfix_expression",
  "argument_expression_list", "unary_expression", "unary_operator",
  "multiplicative_expression", "additive_expression",
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
  "declaration_list", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,    59,    44,    58,    61,    91,
      93,    46,    38,    33,   126,    45,    43,    42,    47,    37,
      60,    62,    94,   124,    63,   123,   125,    40,    41,   290
};
# endif

#define YYPACT_NINF (-149)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     191,  -149,  -149,  -149,  -149,  -149,    14,  -149,     7,   191,
    -149,  -149,  -149,  -149,  -149,    10,   215,  -149,   130,  -149,
     141,  -149,    10,   499,   429,   242,   103,  -149,     7,  -149,
     153,  -149,  -149,   195,  -149,  -149,  -149,   564,   564,  -149,
    -149,  -149,  -149,  -149,  -149,   410,   564,  -149,    79,    94,
     564,   189,   237,    47,   284,   -26,   -25,    -7,    51,    52,
    -149,  -149,  -149,    59,    62,    17,   564,    69,   100,   131,
     321,   140,    93,   102,   531,  -149,  -149,  -149,   265,  -149,
    -149,  -149,  -149,   286,  -149,  -149,  -149,  -149,  -149,  -149,
    -149,     9,   -30,  -149,   -14,  -149,  -149,  -149,  -149,   564,
     204,  -149,   -11,   499,   240,  -149,    42,  -149,  -149,   564,
      26,  -149,  -149,  -149,  -149,  -149,   564,  -149,   564,   564,
     564,   564,   564,   564,   564,   564,   564,   564,   564,   564,
     564,   564,   564,   564,  -149,  -149,   321,  -149,     4,   564,
     564,   564,   187,   365,  -149,  -149,  -149,   267,  -149,   564,
    -149,  -149,   454,    18,   200,   201,   191,  -149,   256,  -149,
      -6,  -149,   385,  -149,  -149,  -149,  -149,  -149,    65,  -149,
      57,  -149,  -149,  -149,  -149,  -149,   189,   189,   237,   237,
     237,   237,    47,    47,   284,   -26,   -25,    -7,    51,  -149,
     321,    71,    80,    81,   210,   546,   546,  -149,  -149,  -149,
     244,   271,  -149,    83,   196,   474,   124,  -149,  -149,  -149,
    -149,  -149,   499,  -149,   564,  -149,  -149,   321,   321,   321,
     564,    46,   198,  -149,  -149,  -149,  -149,  -149,   282,   283,
    -149,   118,  -149,  -149,   255,  -149,  -149,   119,   321,   126,
     321,   142,  -149,  -149,  -149,   321,   261,  -149,   321,  -149,
     321,  -149,  -149,  -149,  -149
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    66,    67,    68,    65,    69,     0,   140,     0,     2,
     137,   139,     1,    70,    59,     0,     0,    61,    63,   138,
       0,    60,     0,     0,     0,     0,     0,   143,     0,   142,
       0,    71,    62,    63,     3,     6,     7,     0,     0,     4,
       5,    24,    23,    22,    21,     0,     0,     9,    17,    25,
       0,    29,    32,    37,    40,    42,    44,    46,    48,    50,
      96,    64,    74,     0,     0,     3,     0,     0,     0,     0,
       0,     0,     0,     0,     0,   122,   116,    57,     0,   120,
     121,   108,   109,     0,   118,   110,   111,   112,   113,    83,
      77,    82,     0,    78,     0,   144,   141,    18,    19,     0,
       0,    99,     0,     0,     0,   104,     0,    13,    14,     0,
       0,    53,    54,    55,    56,    52,     0,    20,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    73,    72,     0,    25,     0,     0,
       0,     0,     0,     0,   133,   134,   135,     0,   123,     0,
     117,   119,     0,     0,    80,    81,     0,    75,     0,    76,
       0,   107,     0,    97,   100,   103,   105,     8,     0,    11,
       0,    15,    51,    26,    27,    28,    31,    30,    35,    36,
      33,    34,    38,    39,    41,    43,    45,    47,    49,   114,
       0,     0,     0,     0,     0,     0,     0,   136,    58,    86,
       0,     0,    92,     0,     0,     0,     0,    79,    84,   106,
      98,   101,     0,    10,     0,    12,   115,     0,     0,     0,
       0,     0,     0,    90,    87,    93,    85,    88,     0,     0,
      94,     0,   102,    16,   124,   126,   127,     0,     0,     0,
       0,     0,    91,    89,    95,     0,     0,   131,     0,   129,
       0,   125,   128,   132,   130
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -149,  -149,  -149,  -149,  -149,    97,  -149,   212,    41,   208,
     209,   207,   226,   214,   206,   -31,   -22,  -149,   -27,   -10,
    -149,   318,     0,    -4,  -148,   202,  -149,   220,   -42,  -149,
     197,  -149,   257,   -59,  -149,    44,  -149,   277,  -100,  -149,
    -149,  -149,  -149,   353,  -149,  -149
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     6,    47,    48,   170,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    77,   116,    78,     7,
      16,    17,    28,    20,    92,    93,    94,   155,    61,   102,
     103,   104,   105,    80,    81,    82,    83,    84,    85,    86,
      87,    88,     9,    10,    11,    30
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
       8,    60,    64,   101,    18,   203,   156,   133,    27,     8,
      13,   142,    13,    13,    12,    79,   129,   133,    33,   106,
      95,    13,   158,    60,    33,   162,    91,   130,   157,    34,
      35,    36,    37,    38,   209,   138,     1,     2,     3,     4,
       5,   190,    14,   196,   159,   163,   131,   147,   152,    34,
      35,    36,    37,    38,   136,   123,   124,   152,   231,    39,
      40,   164,    29,   132,    15,   133,   153,    15,   160,    41,
      42,    43,    44,    79,    96,   153,   202,   189,   149,    39,
      40,    60,   168,    46,   169,   107,   108,   154,   171,    41,
      42,    43,    44,   214,   172,   221,   222,   125,   126,   134,
     167,   149,   135,    46,   238,   213,    89,   149,   111,   112,
     113,   114,   191,   192,   193,   215,   149,   149,   109,   156,
     211,     1,     2,     3,     4,     5,   139,   198,   144,   217,
     201,   216,   115,   195,    97,    98,   110,   145,   218,   219,
      60,   225,     1,     2,     3,     4,     5,   117,     1,     2,
       3,     4,     5,    91,   156,   149,    91,   140,   234,   235,
     236,    90,   149,   137,   178,   179,   180,   181,    23,    24,
     232,     1,     2,     3,     4,     5,   244,   246,   149,   247,
      24,   249,   230,   229,   248,    25,   251,    26,   141,   253,
      60,   254,   233,   237,   239,   241,   137,   143,    26,    31,
     250,    34,    35,    36,    37,    38,    91,   161,    25,     1,
       2,     3,     4,     5,   194,   173,   174,   175,   137,   137,
     137,   137,   137,   137,   137,   137,   137,   137,   137,   137,
     137,    39,    40,    23,    24,   205,   118,   119,   120,    24,
     205,    41,    42,    43,    44,    65,    35,    36,    37,    38,
      21,    22,    26,   206,   226,    46,   240,    26,   206,   208,
       1,     2,     3,     4,     5,    66,    67,   220,    68,    69,
      70,    71,    72,    73,    74,    39,    40,    75,   165,    99,
     245,   100,   121,   122,   223,    41,    42,    43,    44,    65,
      35,    36,    37,    38,   127,   128,   252,    25,    76,    46,
     148,   149,   197,   149,     1,     2,     3,     4,     5,    66,
      67,   224,    68,    69,    70,    71,    72,    73,    74,    39,
      40,    75,   242,   243,    65,    35,    36,    37,    38,    41,
      42,    43,    44,   176,   177,   182,   183,   185,   184,   188,
      32,    25,   150,    46,    66,    67,   187,    68,    69,    70,
      71,    72,    73,    74,    39,    40,    75,   186,   207,   212,
     151,   166,    19,     0,    41,    42,    43,    44,    34,    35,
      36,    37,    38,   204,     0,     0,    25,     0,    46,     0,
       0,     0,     0,     1,     2,     3,     4,     5,    34,    35,
      36,    37,    38,     0,     0,     0,     0,     0,    39,    40,
      75,     0,     0,     0,     0,     0,     0,     0,    41,    42,
      43,    44,     0,    34,    35,    36,    37,    38,    39,    40,
       0,     0,    46,     0,    99,     0,   100,     0,    41,    42,
      43,    44,    34,    35,    36,    37,    38,     0,     0,     0,
      45,   210,    46,    39,    40,     0,     0,     0,     0,    99,
       0,   100,     0,    41,    42,    43,    44,    34,    35,    36,
      37,    38,    39,    40,     0,    45,     0,    46,     0,    62,
       0,     0,    41,    42,    43,    44,    63,    34,    35,    36,
      37,    38,     0,     0,     0,     0,    46,    39,    40,     0,
       0,     0,     0,     0,   199,     0,     0,    41,    42,    43,
      44,   200,    34,    35,    36,    37,    38,    39,    40,     0,
       0,    46,     0,     0,   227,     0,     0,    41,    42,    43,
      44,   228,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46,    39,    40,    34,    35,    36,    37,    38,     0,
       0,     0,    41,    42,    43,    44,     0,     0,     0,    34,
      35,    36,    37,    38,    45,     0,    46,     0,     0,     0,
       0,     0,     0,     0,    39,    40,   146,    34,    35,    36,
      37,    38,     0,     0,    41,    42,    43,    44,     0,    39,
      40,    75,     0,     0,     0,     0,     0,     0,    46,    41,
      42,    43,    44,     0,     0,     0,     0,    39,    40,     0,
       0,     0,     0,    46,     0,     0,     0,    41,    42,    43,
      44,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    46
};

static const yytype_int16 yycheck[] =
{
       0,    23,    24,    45,     8,   153,    36,    13,    18,     9,
       3,    70,     3,     3,     0,    25,    42,    13,    22,    46,
      30,     3,    36,    45,    28,    36,    26,    52,    58,     3,
       4,     5,     6,     7,    40,    66,    18,    19,    20,    21,
      22,    37,    35,   143,    58,    56,    53,    74,    39,     3,
       4,     5,     6,     7,    37,     8,     9,    39,   206,    33,
      34,   103,    18,    12,    57,    13,    57,    57,    99,    43,
      44,    45,    46,    83,    30,    57,    58,   136,    36,    33,
      34,   103,   109,    57,    58,     6,     7,    91,   110,    43,
      44,    45,    46,    36,   116,   195,   196,    50,    51,    40,
      58,    36,    40,    57,    58,    40,     3,    36,    14,    15,
      16,    17,   139,   140,   141,    58,    36,    36,    39,    36,
     162,    18,    19,    20,    21,    22,    57,   149,    35,    58,
     152,   190,    38,   143,    37,    38,    57,    35,    58,    58,
     162,    58,    18,    19,    20,    21,    22,    50,    18,    19,
      20,    21,    22,   153,    36,    36,   156,    57,   217,   218,
     219,    58,    36,    66,   123,   124,   125,   126,    38,    39,
     212,    18,    19,    20,    21,    22,    58,    58,    36,   238,
      39,   240,    58,   205,    58,    55,   245,    57,    57,   248,
     212,   250,   214,   220,   221,   222,    99,    57,    57,    58,
      58,     3,     4,     5,     6,     7,   206,     3,    55,    18,
      19,    20,    21,    22,    27,   118,   119,   120,   121,   122,
     123,   124,   125,   126,   127,   128,   129,   130,   131,   132,
     133,    33,    34,    38,    39,    39,    47,    48,    49,    39,
      39,    43,    44,    45,    46,     3,     4,     5,     6,     7,
      35,    36,    57,    57,    58,    57,    58,    57,    57,     3,
      18,    19,    20,    21,    22,    23,    24,    57,    26,    27,
      28,    29,    30,    31,    32,    33,    34,    35,    38,    39,
      25,    41,    45,    46,    40,    43,    44,    45,    46,     3,
       4,     5,     6,     7,    10,    11,    35,    55,    56,    57,
      35,    36,    35,    36,    18,    19,    20,    21,    22,    23,
      24,    40,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    40,    40,     3,     4,     5,     6,     7,    43,
      44,    45,    46,   121,   122,   127,   128,   130,   129,   133,
      22,    55,    56,    57,    23,    24,   132,    26,    27,    28,
      29,    30,    31,    32,    33,    34,    35,   131,   156,   162,
      83,   104,     9,    -1,    43,    44,    45,    46,     3,     4,
       5,     6,     7,   153,    -1,    -1,    55,    -1,    57,    -1,
      -1,    -1,    -1,    18,    19,    20,    21,    22,     3,     4,
       5,     6,     7,    -1,    -1,    -1,    -1,    -1,    33,    34,
      35,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    43,    44,
      45,    46,    -1,     3,     4,     5,     6,     7,    33,    34,
      -1,    -1,    57,    -1,    39,    -1,    41,    -1,    43,    44,
      45,    46,     3,     4,     5,     6,     7,    -1,    -1,    -1,
      55,    56,    57,    33,    34,    -1,    -1,    -1,    -1,    39,
      -1,    41,    -1,    43,    44,    45,    46,     3,     4,     5,
       6,     7,    33,    34,    -1,    55,    -1,    57,    -1,    40,
      -1,    -1,    43,    44,    45,    46,    47,     3,     4,     5,
       6,     7,    -1,    -1,    -1,    -1,    57,    33,    34,    -1,
      -1,    -1,    -1,    -1,    40,    -1,    -1,    43,    44,    45,
      46,    47,     3,     4,     5,     6,     7,    33,    34,    -1,
      -1,    57,    -1,    -1,    40,    -1,    -1,    43,    44,    45,
      46,    47,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57,    33,    34,     3,     4,     5,     6,     7,    -1,
      -1,    -1,    43,    44,    45,    46,    -1,    -1,    -1,     3,
       4,     5,     6,     7,    55,    -1,    57,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    33,    34,    35,     3,     4,     5,
       6,     7,    -1,    -1,    43,    44,    45,    46,    -1,    33,
      34,    35,    -1,    -1,    -1,    -1,    -1,    -1,    57,    43,
      44,    45,    46,    -1,    -1,    -1,    -1,    33,    34,    -1,
      -1,    -1,    -1,    57,    -1,    -1,    -1,    43,    44,    45,
      46,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    57
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    18,    19,    20,    21,    22,    61,    79,    82,   102,
     103,   104,     0,     3,    35,    57,    80,    81,    83,   103,
      83,    35,    36,    38,    39,    55,    57,    79,    82,    95,
     105,    58,    81,    83,     3,     4,     5,     6,     7,    33,
      34,    43,    44,    45,    46,    55,    57,    62,    63,    65,
      66,    67,    68,    69,    70,    71,    72,    73,    74,    75,
      76,    88,    40,    47,    76,     3,    23,    24,    26,    27,
      28,    29,    30,    31,    32,    35,    56,    76,    78,    79,
      93,    94,    95,    96,    97,    98,    99,   100,   101,     3,
      58,    82,    84,    85,    86,    79,    95,    65,    65,    39,
      41,    88,    89,    90,    91,    92,    78,     6,     7,    39,
      57,    14,    15,    16,    17,    38,    77,    65,    47,    48,
      49,    45,    46,     8,     9,    50,    51,    10,    11,    42,
      52,    53,    12,    13,    40,    40,    37,    65,    75,    57,
      57,    57,    93,    57,    35,    35,    35,    78,    35,    36,
      56,    97,    39,    57,    83,    87,    36,    58,    36,    58,
      75,     3,    36,    56,    88,    38,    92,    58,    78,    58,
      64,    76,    76,    65,    65,    65,    67,    67,    68,    68,
      68,    68,    69,    69,    70,    71,    72,    73,    74,    93,
      37,    78,    78,    78,    27,    79,    98,    35,    76,    40,
      47,    76,    58,    84,    87,    39,    57,    85,     3,    40,
      56,    88,    90,    40,    36,    58,    93,    58,    58,    58,
      57,    98,    98,    40,    40,    58,    58,    40,    47,    76,
      58,    84,    88,    76,    93,    93,    93,    78,    58,    78,
      58,    78,    40,    40,    58,    25,    58,    93,    58,    93,
      58,    93,    35,    93,    93
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    60,    61,    62,    62,    62,    62,    62,    62,    63,
      63,    63,    63,    63,    63,    64,    64,    65,    65,    65,
      65,    66,    66,    66,    66,    67,    67,    67,    67,    68,
      68,    68,    69,    69,    69,    69,    69,    70,    70,    70,
      71,    71,    72,    72,    73,    73,    74,    74,    75,    75,
      76,    76,    77,    77,    77,    77,    77,    78,    78,    79,
      79,    80,    80,    81,    81,    82,    82,    82,    82,    82,
      83,    83,    83,    83,    83,    83,    83,    83,    84,    84,
      85,    85,    85,    86,    86,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    88,    88,    88,    89,
      89,    89,    89,    90,    91,    91,    92,    92,    93,    93,
      93,    93,    93,    93,    94,    94,    95,    95,    96,    96,
      97,    97,    98,    98,    99,    99,    99,   100,   100,   100,
     100,   100,   100,   101,   101,   101,   101,   102,   102,   103,
     103,   104,   104,   105,   105
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     1,     1,     1,     1,     1,     3,     1,
       4,     3,     4,     2,     2,     1,     3,     1,     2,     2,
       2,     1,     1,     1,     1,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     3,     1,     3,     1,     3,
       1,     3,     1,     1,     1,     1,     1,     1,     3,     2,
       3,     1,     3,     1,     3,     1,     1,     1,     1,     1,
       1,     3,     4,     4,     3,     4,     4,     3,     1,     3,
       2,     2,     1,     1,     3,     3,     2,     3,     3,     4,
       3,     4,     2,     3,     3,     4,     1,     3,     4,     1,
       2,     3,     4,     2,     1,     2,     3,     2,     1,     1,
       1,     1,     1,     1,     3,     4,     2,     3,     1,     2,
       1,     1,     1,     2,     5,     7,     5,     5,     7,     6,
       7,     6,     7,     2,     2,     2,     3,     1,     2,     1,
       1,     4,     3,     1,     2
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
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
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

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
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
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
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
#line 59 "../yacc/compiler.y"
                         {
		root = create_tree("Program",1,(yyvsp[0].gt));
	}
#line 1623 "y.tab.c"
    break;

  case 3:
#line 66 "../yacc/compiler.y"
                   {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
	}
#line 1631 "y.tab.c"
    break;

  case 4:
#line 70 "../yacc/compiler.y"
             {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
#line 1641 "y.tab.c"
    break;

  case 5:
#line 76 "../yacc/compiler.y"
              {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "bool";
		// $$->int_value = $1->int_value;
	}
#line 1651 "y.tab.c"
    break;

  case 6:
#line 81 "../yacc/compiler.y"
                       {
		//printf("%d",$1->int_value);
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "int";
		// $$->int_value = $1->int_value;

	}
#line 1663 "y.tab.c"
    break;

  case 7:
#line 88 "../yacc/compiler.y"
                          {
		(yyval.gt) = create_tree("primary_expression",1,(yyvsp[0].gt));
		// $$->type = "double";
		// $$->double_value = $1->double_value;
	}
#line 1673 "y.tab.c"
    break;

  case 8:
#line 93 "../yacc/compiler.y"
                            {
		(yyval.gt) = create_tree("primary_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1681 "y.tab.c"
    break;

  case 9:
#line 100 "../yacc/compiler.y"
                          {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1689 "y.tab.c"
    break;

  case 10:
#line 103 "../yacc/compiler.y"
                                                     {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//数组调用
	}
#line 1698 "y.tab.c"
    break;

  case 11:
#line 107 "../yacc/compiler.y"
                                          {
		(yyval.gt) = create_tree("postfix_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
	}
#line 1707 "y.tab.c"
    break;

  case 12:
#line 111 "../yacc/compiler.y"
                                                                   {
		(yyval.gt) = create_tree("postfix_expression",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
		//函数调用
	}
#line 1716 "y.tab.c"
    break;

  case 13:
#line 115 "../yacc/compiler.y"
                                         {
		//++
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1725 "y.tab.c"
    break;

  case 14:
#line 119 "../yacc/compiler.y"
                                         {
		//--
		(yyval.gt) = create_tree("postfix_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1734 "y.tab.c"
    break;

  case 15:
#line 126 "../yacc/compiler.y"
                             {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1742 "y.tab.c"
    break;

  case 16:
#line 129 "../yacc/compiler.y"
                                                                   {
		(yyval.gt) = create_tree("argument_expression_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1750 "y.tab.c"
    break;

  case 17:
#line 136 "../yacc/compiler.y"
                          {
		//printf("postfix");
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1759 "y.tab.c"
    break;

  case 18:
#line 140 "../yacc/compiler.y"
                                       {
		//++
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1768 "y.tab.c"
    break;

  case 19:
#line 144 "../yacc/compiler.y"
                                       {
		//--
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1777 "y.tab.c"
    break;

  case 20:
#line 148 "../yacc/compiler.y"
                                               {
		(yyval.gt) = create_tree("unary_expression",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1785 "y.tab.c"
    break;

  case 21:
#line 155 "../yacc/compiler.y"
            {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1793 "y.tab.c"
    break;

  case 22:
#line 158 "../yacc/compiler.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1801 "y.tab.c"
    break;

  case 23:
#line 161 "../yacc/compiler.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1809 "y.tab.c"
    break;

  case 24:
#line 164 "../yacc/compiler.y"
              {
		(yyval.gt) = create_tree("unary_operator",1,(yyvsp[0].gt));
	}
#line 1817 "y.tab.c"
    break;

  case 25:
#line 171 "../yacc/compiler.y"
                         {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1825 "y.tab.c"
    break;

  case 26:
#line 174 "../yacc/compiler.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1833 "y.tab.c"
    break;

  case 27:
#line 177 "../yacc/compiler.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1841 "y.tab.c"
    break;

  case 28:
#line 180 "../yacc/compiler.y"
                                                         {
		(yyval.gt) = create_tree("multiplicative_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1849 "y.tab.c"
    break;

  case 29:
#line 187 "../yacc/compiler.y"
                                   {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1857 "y.tab.c"
    break;

  case 30:
#line 190 "../yacc/compiler.y"
                                                            {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1865 "y.tab.c"
    break;

  case 31:
#line 193 "../yacc/compiler.y"
                                                            {
		(yyval.gt) = create_tree("additive_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1873 "y.tab.c"
    break;

  case 32:
#line 200 "../yacc/compiler.y"
                            {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1881 "y.tab.c"
    break;

  case 33:
#line 203 "../yacc/compiler.y"
                                                        {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1889 "y.tab.c"
    break;

  case 34:
#line 206 "../yacc/compiler.y"
                                                        {
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1897 "y.tab.c"
    break;

  case 35:
#line 209 "../yacc/compiler.y"
                                                          {
		// <=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1906 "y.tab.c"
    break;

  case 36:
#line 213 "../yacc/compiler.y"
                                                          {
		// >=
		(yyval.gt) = create_tree("relational_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1915 "y.tab.c"
    break;

  case 37:
#line 221 "../yacc/compiler.y"
                              {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1923 "y.tab.c"
    break;

  case 38:
#line 224 "../yacc/compiler.y"
                                                          {
		// ==
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1932 "y.tab.c"
    break;

  case 39:
#line 228 "../yacc/compiler.y"
                                                          {
		// !=
		(yyval.gt) = create_tree("equality_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1941 "y.tab.c"
    break;

  case 40:
#line 235 "../yacc/compiler.y"
                            {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1949 "y.tab.c"
    break;

  case 41:
#line 238 "../yacc/compiler.y"
                                                 {
		(yyval.gt) = create_tree("and_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1957 "y.tab.c"
    break;

  case 42:
#line 245 "../yacc/compiler.y"
                       {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1965 "y.tab.c"
    break;

  case 43:
#line 248 "../yacc/compiler.y"
                                                     {
		(yyval.gt) = create_tree("exclusive_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1973 "y.tab.c"
    break;

  case 44:
#line 255 "../yacc/compiler.y"
                                {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1981 "y.tab.c"
    break;

  case 45:
#line 258 "../yacc/compiler.y"
                                                              {
		(yyval.gt) = create_tree("inclusive_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 1989 "y.tab.c"
    break;

  case 46:
#line 265 "../yacc/compiler.y"
                                {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 1997 "y.tab.c"
    break;

  case 47:
#line 268 "../yacc/compiler.y"
                                                                {
		//&&
		(yyval.gt) = create_tree("logical_and_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2006 "y.tab.c"
    break;

  case 48:
#line 276 "../yacc/compiler.y"
                               {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2014 "y.tab.c"
    break;

  case 49:
#line 279 "../yacc/compiler.y"
                                                             {
		//||
		(yyval.gt) = create_tree("logical_or_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2023 "y.tab.c"
    break;

  case 50:
#line 287 "../yacc/compiler.y"
                              {
		//条件表达式
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2032 "y.tab.c"
    break;

  case 51:
#line 291 "../yacc/compiler.y"
                                                                     {
		(yyval.gt) = create_tree("assignment_expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2040 "y.tab.c"
    break;

  case 52:
#line 298 "../yacc/compiler.y"
            {
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2048 "y.tab.c"
    break;

  case 53:
#line 301 "../yacc/compiler.y"
                     {
		//*=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2057 "y.tab.c"
    break;

  case 54:
#line 305 "../yacc/compiler.y"
                     {
		// /=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2066 "y.tab.c"
    break;

  case 55:
#line 309 "../yacc/compiler.y"
                     {
		// +=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2075 "y.tab.c"
    break;

  case 56:
#line 313 "../yacc/compiler.y"
                     {
		// -=
		(yyval.gt) = create_tree("assignment_operator",1,(yyvsp[0].gt));
	}
#line 2084 "y.tab.c"
    break;

  case 57:
#line 321 "../yacc/compiler.y"
                              {
		//赋值表达式
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2093 "y.tab.c"
    break;

  case 58:
#line 325 "../yacc/compiler.y"
                                               {
		//逗号表达式
		(yyval.gt) = create_tree("expression",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2102 "y.tab.c"
    break;

  case 59:
#line 333 "../yacc/compiler.y"
                           {
		(yyval.gt) = create_tree("declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt)); //?
	}
#line 2110 "y.tab.c"
    break;

  case 60:
#line 336 "../yacc/compiler.y"
                                                  {
		(yyval.gt) = create_tree("declaration",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2118 "y.tab.c"
    break;

  case 61:
#line 343 "../yacc/compiler.y"
                        {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2126 "y.tab.c"
    break;

  case 62:
#line 346 "../yacc/compiler.y"
                                                   {
		(yyval.gt) = create_tree("init_declarator_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2134 "y.tab.c"
    break;

  case 63:
#line 352 "../yacc/compiler.y"
                   {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2142 "y.tab.c"
    break;

  case 64:
#line 355 "../yacc/compiler.y"
                                     {
		(yyval.gt) = create_tree("init_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2150 "y.tab.c"
    break;

  case 65:
#line 363 "../yacc/compiler.y"
             {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2158 "y.tab.c"
    break;

  case 66:
#line 366 "../yacc/compiler.y"
               {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2166 "y.tab.c"
    break;

  case 67:
#line 369 "../yacc/compiler.y"
              {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2174 "y.tab.c"
    break;

  case 68:
#line 372 "../yacc/compiler.y"
                 {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2182 "y.tab.c"
    break;

  case 69:
#line 375 "../yacc/compiler.y"
               {
		(yyval.gt) = create_tree("type_specifier",1,(yyvsp[0].gt));
	}
#line 2190 "y.tab.c"
    break;

  case 70:
#line 383 "../yacc/compiler.y"
                   {
		//变量
		(yyval.gt) = create_tree("declarator",1,(yyvsp[0].gt));
	}
#line 2199 "y.tab.c"
    break;

  case 71:
#line 387 "../yacc/compiler.y"
                             {
		//.....
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2208 "y.tab.c"
    break;

  case 72:
#line 391 "../yacc/compiler.y"
                                                   {
		//数组
		//printf("assignment_expression");
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2218 "y.tab.c"
    break;

  case 73:
#line 396 "../yacc/compiler.y"
                                 {
		//....
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2227 "y.tab.c"
    break;

  case 74:
#line 400 "../yacc/compiler.y"
                             {
		//数组
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2236 "y.tab.c"
    break;

  case 75:
#line 404 "../yacc/compiler.y"
                                            {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2245 "y.tab.c"
    break;

  case 76:
#line 408 "../yacc/compiler.y"
                                             {
		//函数
		(yyval.gt) = create_tree("declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2254 "y.tab.c"
    break;

  case 77:
#line 412 "../yacc/compiler.y"
                             {
		//函数
		(yyval.gt) = create_tree("declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2263 "y.tab.c"
    break;

  case 78:
#line 421 "../yacc/compiler.y"
                              {
		(yyval.gt) = create_tree("parameter_list",1,(yyvsp[0].gt));
	}
#line 2271 "y.tab.c"
    break;

  case 79:
#line 424 "../yacc/compiler.y"
                                                   {
		(yyval.gt) = create_tree("parameter_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2279 "y.tab.c"
    break;

  case 80:
#line 430 "../yacc/compiler.y"
                                  {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2287 "y.tab.c"
    break;

  case 81:
#line 433 "../yacc/compiler.y"
                                             {
		(yyval.gt) = create_tree("parameter_declaration",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2295 "y.tab.c"
    break;

  case 82:
#line 436 "../yacc/compiler.y"
                         {
		(yyval.gt) = create_tree("parameter_declaration",1,(yyvsp[0].gt));
	}
#line 2303 "y.tab.c"
    break;

  case 83:
#line 442 "../yacc/compiler.y"
                   {
		(yyval.gt) = create_tree("identifier_list",1,(yyvsp[0].gt));
	}
#line 2311 "y.tab.c"
    break;

  case 84:
#line 445 "../yacc/compiler.y"
                                         {
		(yyval.gt) = create_tree("identifier_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2319 "y.tab.c"
    break;

  case 85:
#line 451 "../yacc/compiler.y"
                                    {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2327 "y.tab.c"
    break;

  case 86:
#line 454 "../yacc/compiler.y"
                  {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2335 "y.tab.c"
    break;

  case 87:
#line 457 "../yacc/compiler.y"
                                        {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2343 "y.tab.c"
    break;

  case 88:
#line 460 "../yacc/compiler.y"
                                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2351 "y.tab.c"
    break;

  case 89:
#line 463 "../yacc/compiler.y"
                                                            {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2359 "y.tab.c"
    break;

  case 90:
#line 466 "../yacc/compiler.y"
                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2367 "y.tab.c"
    break;

  case 91:
#line 469 "../yacc/compiler.y"
                                          {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2375 "y.tab.c"
    break;

  case 92:
#line 472 "../yacc/compiler.y"
                  {
		(yyval.gt) = create_tree("abstract_declarator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2383 "y.tab.c"
    break;

  case 93:
#line 475 "../yacc/compiler.y"
                                 {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2391 "y.tab.c"
    break;

  case 94:
#line 478 "../yacc/compiler.y"
                                      {
		(yyval.gt) = create_tree("abstract_declarator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2399 "y.tab.c"
    break;

  case 95:
#line 481 "../yacc/compiler.y"
                                                     {
		(yyval.gt) = create_tree("abstract_declarator",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2407 "y.tab.c"
    break;

  case 96:
#line 488 "../yacc/compiler.y"
                              {
		(yyval.gt) = create_tree("initializer",1,(yyvsp[0].gt));
	}
#line 2415 "y.tab.c"
    break;

  case 97:
#line 491 "../yacc/compiler.y"
                                   {
		//列表初始化 {1,1,1}
		(yyval.gt) = create_tree("initializer",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2424 "y.tab.c"
    break;

  case 98:
#line 495 "../yacc/compiler.y"
                                       {
		//列表初始化 {1,1,1,}
		(yyval.gt) = create_tree("initializer",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2433 "y.tab.c"
    break;

  case 99:
#line 502 "../yacc/compiler.y"
                    {
		(yyval.gt) = create_tree("initializer_list",1,(yyvsp[0].gt));
	}
#line 2441 "y.tab.c"
    break;

  case 100:
#line 505 "../yacc/compiler.y"
                                  {
		(yyval.gt) = create_tree("initializer_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2449 "y.tab.c"
    break;

  case 101:
#line 508 "../yacc/compiler.y"
                                           {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2457 "y.tab.c"
    break;

  case 102:
#line 511 "../yacc/compiler.y"
                                                       {
		(yyval.gt) = create_tree("initializer_list",3,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt));
	}
#line 2465 "y.tab.c"
    break;

  case 103:
#line 517 "../yacc/compiler.y"
                            {
		(yyval.gt) = create_tree("designation",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2473 "y.tab.c"
    break;

  case 104:
#line 523 "../yacc/compiler.y"
                   {
		(yyval.gt) = create_tree("designator_list",1,(yyvsp[0].gt));
	}
#line 2481 "y.tab.c"
    break;

  case 105:
#line 526 "../yacc/compiler.y"
                                     {
		(yyval.gt) = create_tree("designator_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2489 "y.tab.c"
    break;

  case 106:
#line 532 "../yacc/compiler.y"
                                      {
		(yyval.gt) = create_tree("designator",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2497 "y.tab.c"
    break;

  case 107:
#line 535 "../yacc/compiler.y"
                         {
		(yyval.gt) = create_tree("designator",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2505 "y.tab.c"
    break;

  case 108:
#line 542 "../yacc/compiler.y"
                          {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2513 "y.tab.c"
    break;

  case 109:
#line 545 "../yacc/compiler.y"
                             {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2521 "y.tab.c"
    break;

  case 110:
#line 548 "../yacc/compiler.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2529 "y.tab.c"
    break;

  case 111:
#line 551 "../yacc/compiler.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2537 "y.tab.c"
    break;

  case 112:
#line 554 "../yacc/compiler.y"
                              {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2545 "y.tab.c"
    break;

  case 113:
#line 557 "../yacc/compiler.y"
                         {
		(yyval.gt) = create_tree("statement",1,(yyvsp[0].gt));
	}
#line 2553 "y.tab.c"
    break;

  case 114:
#line 564 "../yacc/compiler.y"
                                 {
		(yyval.gt) = create_tree("labeled_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2561 "y.tab.c"
    break;

  case 115:
#line 567 "../yacc/compiler.y"
                                                   {
		(yyval.gt) = create_tree("labeled_statement",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2569 "y.tab.c"
    break;

  case 116:
#line 574 "../yacc/compiler.y"
                {
		(yyval.gt) = create_tree("compound_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2577 "y.tab.c"
    break;

  case 117:
#line 577 "../yacc/compiler.y"
                                  {
		(yyval.gt) = create_tree("compound_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2585 "y.tab.c"
    break;

  case 118:
#line 583 "../yacc/compiler.y"
                   {
		(yyval.gt) = create_tree("block_item_list",1,(yyvsp[0].gt));
	}
#line 2593 "y.tab.c"
    break;

  case 119:
#line 586 "../yacc/compiler.y"
                                     {
		(yyval.gt) = create_tree("block_item_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2601 "y.tab.c"
    break;

  case 120:
#line 592 "../yacc/compiler.y"
                    {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2609 "y.tab.c"
    break;

  case 121:
#line 595 "../yacc/compiler.y"
                    {
		(yyval.gt) = (yyvsp[0].gt);
	}
#line 2617 "y.tab.c"
    break;

  case 122:
#line 601 "../yacc/compiler.y"
            {
		(yyval.gt) = create_tree("expression_statement",1,(yyvsp[0].gt));
	}
#line 2625 "y.tab.c"
    break;

  case 123:
#line 604 "../yacc/compiler.y"
                         {
		(yyval.gt) = create_tree("expression_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2633 "y.tab.c"
    break;

  case 124:
#line 611 "../yacc/compiler.y"
                                                              {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2641 "y.tab.c"
    break;

  case 125:
#line 614 "../yacc/compiler.y"
                                                     {
		(yyval.gt) = create_tree("selection_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2649 "y.tab.c"
    break;

  case 126:
#line 617 "../yacc/compiler.y"
                                          {
		(yyval.gt) = create_tree("selection_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2657 "y.tab.c"
    break;

  case 127:
#line 624 "../yacc/compiler.y"
                                           {
		(yyval.gt) = create_tree("iteration_statement",5,(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2665 "y.tab.c"
    break;

  case 128:
#line 627 "../yacc/compiler.y"
                                                    {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2673 "y.tab.c"
    break;

  case 129:
#line 630 "../yacc/compiler.y"
                                                                          {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2681 "y.tab.c"
    break;

  case 130:
#line 633 "../yacc/compiler.y"
                                                                                     {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2689 "y.tab.c"
    break;

  case 131:
#line 636 "../yacc/compiler.y"
                                                                 {
		(yyval.gt) = create_tree("iteration_statement",6,(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2697 "y.tab.c"
    break;

  case 132:
#line 639 "../yacc/compiler.y"
                                                                            {
		(yyval.gt) = create_tree("iteration_statement",7,(yyvsp[-6].gt),(yyvsp[-5].gt),(yyvsp[-4].gt),(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2705 "y.tab.c"
    break;

  case 133:
#line 646 "../yacc/compiler.y"
                     {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2713 "y.tab.c"
    break;

  case 134:
#line 649 "../yacc/compiler.y"
                    {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2721 "y.tab.c"
    break;

  case 135:
#line 652 "../yacc/compiler.y"
                     {
		(yyval.gt) = create_tree("jump_statement",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2729 "y.tab.c"
    break;

  case 136:
#line 655 "../yacc/compiler.y"
                                {
		(yyval.gt) = create_tree("jump_statement",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2737 "y.tab.c"
    break;

  case 137:
#line 661 "../yacc/compiler.y"
                             {
		(yyval.gt) = create_tree("translation_unit",1,(yyvsp[0].gt));
	}
#line 2745 "y.tab.c"
    break;

  case 138:
#line 664 "../yacc/compiler.y"
                                                {
		(yyval.gt) = create_tree("translation_unit",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2753 "y.tab.c"
    break;

  case 139:
#line 670 "../yacc/compiler.y"
                            {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		//函数定义
		//printf("function_definition");
	}
#line 2763 "y.tab.c"
    break;

  case 140:
#line 675 "../yacc/compiler.y"
                      {
		(yyval.gt) = create_tree("external_declaration",1,(yyvsp[0].gt));
		//变量声明
		//printf("declaration");
	}
#line 2773 "y.tab.c"
    break;

  case 141:
#line 683 "../yacc/compiler.y"
                                                                      {
		(yyval.gt) = create_tree("function_definition",4,(yyvsp[-3].gt),(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2781 "y.tab.c"
    break;

  case 142:
#line 686 "../yacc/compiler.y"
                                                       {
		(yyval.gt) = create_tree("function_definition",3,(yyvsp[-2].gt),(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2789 "y.tab.c"
    break;

  case 143:
#line 692 "../yacc/compiler.y"
                    {
		(yyval.gt) = create_tree("declaration_list",1,(yyvsp[0].gt));
	}
#line 2797 "y.tab.c"
    break;

  case 144:
#line 695 "../yacc/compiler.y"
                                       {
		(yyval.gt) = create_tree("declaration_list",2,(yyvsp[-1].gt),(yyvsp[0].gt));
	}
#line 2805 "y.tab.c"
    break;


#line 2809 "y.tab.c"

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
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
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
                  yystos[+*yyssp], yyvsp);
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
#line 700 "../yacc/compiler.y"



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
	freeGramTree(root);
	fclose(yyin);
	return 0;
}
