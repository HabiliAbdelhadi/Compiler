
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
#line 1 "bison.y"

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "List.h"
#include "List2.h"
extern int yylineno;
extern int coll;

extern FILE * yyin;
int yylex(void);
int yyerror();
int locality = 1;
char tmp_save[10] = "\0";
char tmp_return[10] = "\0";


/* Line 189 of yacc.c  */
#line 91 "bison.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
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
     INTEGER = 258,
     REEL = 259,
     CHARACTER = 260,
     LOGICAL = 261,
     PROGRAM = 262,
     END = 263,
     ROUTINE = 264,
     ENDR = 265,
     CALL = 266,
     DIMENSION = 267,
     READ = 268,
     WRITE = 269,
     IF = 270,
     THEN = 271,
     ELSE = 272,
     ENDIF = 273,
     DOWHILE = 274,
     ENDDO = 275,
     EQUIVALENCE = 276,
     TRUE = 277,
     FALSE = 278,
     cst_entier = 279,
     cst_reel = 280,
     IDF = 281,
     cst_string = 282,
     NEG = 283,
     NE = 284,
     LT = 285,
     LE = 286,
     GT = 287,
     GE = 288,
     EQ = 289,
     OR = 290,
     AND = 291
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 18 "bison.y"
char *chaine ;
 int e ; 
 float f;
 char c;
 


/* Line 214 of yacc.c  */
#line 171 "bison.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 183 "bison.tab.c"

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
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   337

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  24
/* YYNRULES -- Number of rules.  */
#define YYNRULES  92
/* YYNRULES -- Number of states.  */
#define YYNSTATES  225

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      41,    42,    30,    28,    44,    29,     2,    31,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,    43,
       2,    45,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    32,    33,    34,    35,    36,    37,    38,
      39,    40
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     7,    11,    15,    17,    23,    27,    35,
      39,    41,    43,    45,    47,    49,    50,    61,    65,    69,
      73,    76,    83,    87,    95,    96,   101,   102,   108,   117,
     126,   138,   147,   156,   162,   168,   174,   183,   190,   197,
     200,   203,   206,   209,   211,   213,   218,   222,   226,   233,
     241,   244,   251,   255,   263,   272,   284,   292,   294,   298,
     306,   308,   310,   314,   318,   322,   326,   329,   336,   343,
     350,   357,   363,   367,   371,   375,   379,   382,   386,   388,
     390,   392,   394,   396,   400,   404,   408,   412,   416,   420,
     422,   426,   430
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,    53,    48,    49,    -1,     7,    26,    43,
      -1,    56,    57,     8,    -1,    26,    -1,    26,    12,    41,
      51,    42,    -1,    50,    44,    26,    -1,    50,    44,    26,
      12,    41,    51,    42,    -1,    51,    30,    24,    -1,    24,
      -1,     3,    -1,     4,    -1,     6,    -1,     5,    -1,    -1,
      53,    52,     9,    26,    55,    42,    56,    57,    54,    10,
      -1,    26,    45,    65,    -1,    26,    45,    27,    -1,    26,
      45,    69,    -1,    41,    26,    -1,    41,    26,    12,    41,
      51,    42,    -1,    55,    44,    26,    -1,    55,    44,    26,
      12,    41,    51,    42,    -1,    -1,    56,    52,    50,    43,
      -1,    -1,    57,    26,    45,    26,    43,    -1,    57,    26,
      41,    51,    42,    45,    26,    43,    -1,    57,    26,    45,
      26,    41,    51,    42,    43,    -1,    57,    26,    41,    51,
      42,    45,    26,    41,    51,    42,    43,    -1,    57,    26,
      41,    51,    42,    45,    65,    43,    -1,    57,    26,    41,
      51,    42,    45,    27,    43,    -1,    57,    26,    45,    65,
      43,    -1,    57,    26,    45,    27,    43,    -1,    57,    26,
      45,    69,    43,    -1,    57,    26,    41,    51,    42,    45,
      69,    43,    -1,    57,    13,    41,    26,    42,    43,    -1,
      57,    14,    41,    58,    42,    43,    -1,    57,    62,    -1,
      57,    64,    -1,    57,    61,    -1,    57,    59,    -1,    27,
      -1,    26,    -1,    26,    41,    51,    42,    -1,    58,    44,
      26,    -1,    58,    44,    27,    -1,    58,    44,    26,    41,
      51,    42,    -1,    21,    60,    42,    44,    60,    42,    43,
      -1,    41,    26,    -1,    41,    26,    12,    41,    51,    42,
      -1,    60,    44,    26,    -1,    60,    44,    26,    12,    41,
      51,    42,    -1,    26,    45,    11,    26,    41,    50,    42,
      43,    -1,    26,    41,    51,    42,    45,    11,    26,    41,
      50,    42,    43,    -1,    15,    41,    69,    42,    16,    57,
      63,    -1,    18,    -1,    17,    57,    18,    -1,    19,    41,
      69,    42,    16,    57,    20,    -1,    24,    -1,    25,    -1,
      65,    28,    26,    -1,    65,    29,    26,    -1,    65,    30,
      26,    -1,    65,    31,    26,    -1,    29,    26,    -1,    65,
      28,    26,    41,    51,    42,    -1,    65,    29,    26,    41,
      51,    42,    -1,    65,    30,    26,    41,    51,    42,    -1,
      65,    31,    26,    41,    51,    42,    -1,    29,    26,    41,
      51,    42,    -1,    65,    28,    65,    -1,    65,    29,    65,
      -1,    65,    31,    65,    -1,    65,    30,    65,    -1,    29,
      65,    -1,    41,    65,    42,    -1,    68,    -1,    22,    -1,
      23,    -1,    65,    -1,    26,    -1,    67,    38,    67,    -1,
      67,    33,    67,    -1,    67,    35,    67,    -1,    67,    34,
      67,    -1,    67,    37,    67,    -1,    67,    36,    67,    -1,
      66,    -1,    69,    40,    69,    -1,    69,    39,    69,    -1,
      41,    69,    42,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    42,    42,    43,    46,    48,    49,    50,    51,    53,
      53,    55,    55,    55,    55,    57,    58,    62,    62,    62,
      64,    65,    66,    67,    70,    71,    73,    74,    78,    82,
      86,    90,    93,    96,    99,   102,   105,   108,   110,   111,
     112,   113,   114,   116,   117,   119,   121,   123,   124,   127,
     128,   129,   130,   131,   133,   140,   148,   149,   149,   150,
     153,   153,   154,   157,   160,   163,   166,   169,   172,   175,
     178,   181,   184,   184,   184,   184,   185,   186,   189,   189,
     189,   190,   190,   191,   191,   191,   191,   191,   191,   192,
     192,   192,   192
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INTEGER", "REEL", "CHARACTER",
  "LOGICAL", "PROGRAM", "END", "ROUTINE", "ENDR", "CALL", "DIMENSION",
  "READ", "WRITE", "IF", "THEN", "ELSE", "ENDIF", "DOWHILE", "ENDDO",
  "EQUIVALENCE", "TRUE", "FALSE", "cst_entier", "cst_reel", "IDF",
  "cst_string", "'+'", "'-'", "'*'", "'/'", "NEG", "NE", "LT", "LE", "GT",
  "GE", "EQ", "OR", "AND", "'('", "')'", "';'", "','", "'='", "$accept",
  "S", "TITRE", "MAIN", "ListIdf", "Taille", "TYPE", "FNC", "RETURN",
  "PARAMS", "DEC", "INST", "StringEtIdf", "EQUIV", "PARAMS_EQ", "CALL_FNC",
  "IF_BLOCK", "IF_CLOSURE", "WHILE_BLOCK", "EXPR_ARTH", "LOG_TERM",
  "COMPAR_TERM", "COMPAR", "EXP_LOG", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,    43,    45,
      42,    47,   283,   284,   285,   286,   287,   288,   289,   290,
     291,    40,    41,    59,    44,    61
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    49,    50,    50,    50,    50,    51,
      51,    52,    52,    52,    52,    53,    53,    54,    54,    54,
      55,    55,    55,    55,    56,    56,    57,    57,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    57,
      57,    57,    57,    58,    58,    58,    58,    58,    58,    59,
      60,    60,    60,    60,    61,    61,    62,    63,    63,    64,
      65,    65,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    65,    65,    65,    65,    65,    66,    66,
      66,    67,    67,    68,    68,    68,    68,    68,    68,    69,
      69,    69,    69
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     3,     3,     3,     1,     5,     3,     7,     3,
       1,     1,     1,     1,     1,     0,    10,     3,     3,     3,
       2,     6,     3,     7,     0,     4,     0,     5,     8,     8,
      11,     8,     8,     5,     5,     5,     8,     6,     6,     2,
       2,     2,     2,     1,     1,     4,     3,     3,     6,     7,
       2,     6,     3,     7,     8,    11,     7,     1,     3,     7,
       1,     1,     3,     3,     3,     3,     2,     6,     6,     6,
       6,     5,     3,     3,     3,     3,     2,     3,     1,     1,
       1,     1,     1,     3,     3,     3,     3,     3,     3,     1,
       3,     3,     3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
      15,     0,     0,     1,    11,    12,    14,    13,     0,    24,
       0,     0,     2,    26,     0,     3,     0,     0,     0,     5,
       0,     4,     0,     0,     0,     0,     0,     0,    42,    41,
      39,    40,     0,     0,     0,    25,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    20,    24,     0,     0,     7,
       0,    44,    43,     0,    79,    80,    60,    61,    82,     0,
       0,    81,    89,     0,    78,     0,     0,    50,     0,     0,
      10,     0,     0,    82,     0,    81,     0,     0,    26,    22,
       0,     0,     0,     0,     0,     0,    66,     0,    76,    81,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    52,     0,     0,
       0,     0,    27,    34,    33,    35,     0,     0,     0,     6,
       0,    37,     0,    38,    46,    47,     0,     0,    77,    92,
      62,    72,    63,    73,    64,    75,    65,    74,    84,    86,
      85,    88,    87,    83,    91,    90,    26,    26,     0,     0,
       0,     9,     0,     0,     0,     0,     0,     0,     0,     0,
      45,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    82,     0,    81,     0,     0,     0,    21,
       0,    16,     0,     8,     0,    71,     0,     0,     0,     0,
      26,    57,    56,    59,    51,    49,     0,     0,     0,    28,
      32,    31,    36,     0,    29,    18,    81,    19,    23,    48,
      67,    68,    69,    70,     0,    53,     0,     0,    54,    58,
       0,     0,     0,    30,    55
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     9,    12,    20,    71,    16,     2,   157,    33,
      13,    17,    53,    28,    42,    29,    30,   192,    31,    61,
      62,    63,    64,    65
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -152
static const yytype_int16 yypact[] =
{
    -152,    47,   242,  -152,  -152,  -152,  -152,  -152,    51,  -152,
      71,    13,  -152,   254,    86,  -152,    96,   121,    57,   142,
     -39,  -152,   122,   139,   171,   197,   214,   -26,  -152,  -152,
    -152,  -152,   201,    22,   229,  -152,   241,   252,   157,   102,
     102,   253,    46,   256,    16,   269,  -152,   257,   256,   270,
     243,   245,  -152,    88,  -152,  -152,  -152,  -152,  -152,   -15,
     102,   233,  -152,   206,  -152,    99,   190,   272,   244,   261,
    -152,   -24,   263,   162,   247,    24,   211,   251,   254,   279,
     -17,   255,   258,   256,   259,   250,   262,   146,  -152,   148,
     226,     5,   120,   127,   133,   140,   140,   140,   140,   140,
     140,   102,   102,   277,   278,   264,   214,   283,   273,   265,
     266,   256,  -152,  -152,  -152,  -152,   256,   205,   267,  -152,
     256,  -152,   -10,  -152,   268,  -152,   256,   148,  -152,  -152,
     271,   158,   274,   158,   275,  -152,   276,  -152,  -152,  -152,
    -152,  -152,  -152,  -152,   260,  -152,  -152,  -152,   256,   192,
     280,  -152,    60,    96,    32,    49,    -8,   288,   256,    72,
    -152,   256,    91,   256,   256,   256,   256,   178,   187,   125,
     281,   256,   285,   228,   282,    30,   213,   230,   284,  -152,
      70,  -152,   130,  -152,   143,  -152,   152,   156,   186,   191,
    -152,  -152,  -152,  -152,  -152,  -152,   193,   287,   256,  -152,
    -152,  -152,  -152,   286,  -152,   247,    -7,   211,  -152,  -152,
    -152,  -152,  -152,  -152,   196,  -152,    96,   195,  -152,  -152,
     231,   289,   290,  -152,  -152
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -152,  -152,  -152,  -152,  -151,   -48,   297,  -152,  -152,  -152,
     291,   -71,  -152,  -152,   198,  -152,  -152,  -152,  -152,   -43,
    -152,     8,  -152,   -32
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -18
static const yytype_int16 yytable[] =
{
      80,    75,   177,   -17,    35,    36,   108,   117,    66,    56,
      57,    86,    76,   108,    59,    43,    88,    89,   109,    44,
     108,    91,    92,    93,    94,   119,    87,    72,    90,    56,
      57,   130,   160,    43,    59,   122,   114,   180,    54,    55,
      56,    57,    73,    74,   127,    59,    87,     3,   131,   133,
     135,   137,    91,    92,    93,    94,    15,    60,    91,    92,
      93,    94,   108,   154,    46,   220,    47,   114,   155,   144,
     145,   172,   159,   201,   178,   167,   168,    11,   162,   108,
      14,    72,    54,    55,    56,    57,   173,   174,    68,    59,
      69,   179,    54,    55,    56,    57,    73,   205,    32,    59,
     169,    60,   108,   138,   139,   140,   141,   142,   143,   175,
     182,    60,    18,   184,   183,   186,   187,   188,   189,   214,
     176,   108,    19,   196,    54,    55,    56,    57,    58,    21,
      84,    59,    85,   185,    22,    23,    24,   206,   101,   102,
      25,   103,    26,    60,    56,    57,   132,    27,   207,    59,
     217,    56,    57,   134,    34,   108,    59,    56,    57,   136,
     108,    87,    59,    37,    56,    57,    58,   194,    87,    59,
      56,    57,   208,   108,    87,    59,    91,    92,    93,    94,
      38,    87,   108,    51,    52,   209,   108,    87,    93,    94,
     128,    22,    23,    24,   210,   190,   191,    25,   211,    26,
      22,    23,    24,   111,    27,   112,    25,   193,    26,    22,
      23,    24,    39,    27,   219,    25,   108,    26,    22,    23,
      24,   108,    27,   108,    25,   108,    26,    45,   212,   101,
     102,   156,   104,   213,   170,   215,    69,   221,    40,    95,
      96,    97,    98,    99,   100,     4,     5,     6,     7,     8,
     101,   102,   101,   102,   115,    41,   202,     4,     5,     6,
       7,    91,    92,    93,    94,   101,   102,    49,   129,   198,
      48,   199,   203,   222,    36,    36,   124,   125,    50,    67,
      70,    77,    81,    79,   105,    82,    83,   107,   106,   110,
     113,   118,   116,   146,   147,   150,   120,   151,   181,    10,
     102,   121,   123,   126,   149,   148,     0,   153,   158,   161,
     152,   197,   163,     0,     0,   164,   165,   166,     0,     0,
       0,   171,     0,     0,   195,   200,     0,   204,   216,   218,
       0,     0,   223,   224,     0,     0,     0,    78
};

static const yytype_int16 yycheck[] =
{
      48,    44,   153,    10,    43,    44,    30,    78,    40,    24,
      25,    26,    44,    30,    29,    41,    59,    60,    42,    45,
      30,    28,    29,    30,    31,    42,    41,    11,    60,    24,
      25,    26,    42,    41,    29,    83,    43,    45,    22,    23,
      24,    25,    26,    27,    87,    29,    41,     0,    91,    92,
      93,    94,    28,    29,    30,    31,    43,    41,    28,    29,
      30,    31,    30,   111,    42,   216,    44,    43,   116,   101,
     102,    11,   120,    43,    42,   146,   147,    26,   126,    30,
       9,    11,    22,    23,    24,    25,    26,    27,    42,    29,
      44,    42,    22,    23,    24,    25,    26,    27,    41,    29,
     148,    41,    30,    95,    96,    97,    98,    99,   100,   152,
     158,    41,    26,   161,    42,   163,   164,   165,   166,   190,
     152,    30,    26,   171,    22,    23,    24,    25,    26,     8,
      42,    29,    44,    42,    13,    14,    15,   180,    39,    40,
      19,    42,    21,    41,    24,    25,    26,    26,   180,    29,
     198,    24,    25,    26,    12,    30,    29,    24,    25,    26,
      30,    41,    29,    41,    24,    25,    26,    42,    41,    29,
      24,    25,    42,    30,    41,    29,    28,    29,    30,    31,
      41,    41,    30,    26,    27,    42,    30,    41,    30,    31,
      42,    13,    14,    15,    42,    17,    18,    19,    42,    21,
      13,    14,    15,    41,    26,    43,    19,    20,    21,    13,
      14,    15,    41,    26,    18,    19,    30,    21,    13,    14,
      15,    30,    26,    30,    19,    30,    21,    26,    42,    39,
      40,    26,    42,    42,    42,    42,    44,    42,    41,    33,
      34,    35,    36,    37,    38,     3,     4,     5,     6,     7,
      39,    40,    39,    40,    43,    41,    43,     3,     4,     5,
       6,    28,    29,    30,    31,    39,    40,    26,    42,    41,
      41,    43,    42,    42,    44,    44,    26,    27,    26,    26,
      24,    12,    12,    26,    12,    42,    41,    26,    44,    26,
      43,    12,    41,    16,    16,    12,    41,    24,    10,     2,
      40,    43,    43,    41,   106,    41,    -1,    41,    41,    41,
      45,    26,    41,    -1,    -1,    41,    41,    41,    -1,    -1,
      -1,    41,    -1,    -1,    43,    43,    -1,    43,    41,    43,
      -1,    -1,    43,    43,    -1,    -1,    -1,    46
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    47,    53,     0,     3,     4,     5,     6,     7,    48,
      52,    26,    49,    56,     9,    43,    52,    57,    26,    26,
      50,     8,    13,    14,    15,    19,    21,    26,    59,    61,
      62,    64,    41,    55,    12,    43,    44,    41,    41,    41,
      41,    41,    60,    41,    45,    26,    42,    44,    41,    26,
      26,    26,    27,    58,    22,    23,    24,    25,    26,    29,
      41,    65,    66,    67,    68,    69,    69,    26,    42,    44,
      24,    51,    11,    26,    27,    65,    69,    12,    56,    26,
      51,    12,    42,    41,    42,    44,    26,    41,    65,    65,
      69,    28,    29,    30,    31,    33,    34,    35,    36,    37,
      38,    39,    40,    42,    42,    12,    44,    26,    30,    42,
      26,    41,    43,    43,    43,    43,    41,    57,    12,    42,
      41,    43,    51,    43,    26,    27,    41,    65,    42,    42,
      26,    65,    26,    65,    26,    65,    26,    65,    67,    67,
      67,    67,    67,    67,    69,    69,    16,    16,    41,    60,
      12,    24,    45,    41,    51,    51,    26,    54,    41,    51,
      42,    41,    51,    41,    41,    41,    41,    57,    57,    51,
      42,    41,    11,    26,    27,    65,    69,    50,    42,    42,
      45,    10,    51,    42,    51,    42,    51,    51,    51,    51,
      17,    18,    63,    20,    42,    43,    51,    26,    41,    43,
      43,    43,    43,    42,    43,    27,    65,    69,    42,    42,
      42,    42,    42,    42,    57,    42,    41,    51,    43,    18,
      50,    42,    42,    43,    43
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
#line 42 "bison.y"
    {printf("------------------------------Syntax correcte---------------------------------"); YYACCEPT;;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 43 "bison.y"
    {locality=0;element *p =searchByState((yyvsp[(2) - (3)].chaine));
    if(strlen(p->type)&& p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",(yyvsp[(2) - (3)].chaine),yylineno,coll);
    else Edit((yyvsp[(2) - (3)].chaine),"NOM_PGM",0);;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 46 "bison.y"
    {locality=0;;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 48 "bison.y"
    {(yyval.e)=1;element *p =searchByState((yyvsp[(1) - (1)].chaine));if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",(yyvsp[(1) - (1)].chaine),yylineno,coll);else {Forceaddelement((yyvsp[(1) - (1)].chaine),"IDF",p->type,p->val,p->charVal);Edit((yyvsp[(1) - (1)].chaine),tmp_save,locality);}}else Edit((yyvsp[(1) - (1)].chaine),tmp_save,locality);;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 49 "bison.y"
    {(yyval.e)=1;element *p =searchByState((yyvsp[(1) - (5)].chaine));if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",(yyvsp[(1) - (5)].chaine),yylineno,coll);else {Forceaddelement((yyvsp[(1) - (5)].chaine),"IDF",p->type,p->val,p->charVal);Edit((yyvsp[(1) - (5)].chaine),tmp_save,locality);}}else{ Edit((yyvsp[(1) - (5)].chaine),tmp_save,locality);EditTaille((yyvsp[(1) - (5)].chaine),(yyvsp[(4) - (5)].chaine));};}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 50 "bison.y"
    {(yyval.e)++;element *p =searchByState((yyvsp[(3) - (3)].chaine));if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);else {Forceaddelement((yyvsp[(3) - (3)].chaine),"IDF",p->type,p->val,p->charVal);Edit((yyvsp[(3) - (3)].chaine),tmp_save,locality);}}else Edit((yyvsp[(3) - (3)].chaine),tmp_save,locality);;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 51 "bison.y"
    {(yyval.e)++;element *p =searchByState((yyvsp[(3) - (7)].chaine));if(strlen(p->type)){if(p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",(yyvsp[(3) - (7)].chaine),yylineno,coll);else {Forceaddelement((yyvsp[(3) - (7)].chaine),"IDF",p->type,p->val,p->charVal);Edit((yyvsp[(3) - (7)].chaine),tmp_save,locality);EditTaille((yyvsp[(3) - (7)].chaine),(yyvsp[(6) - (7)].chaine));}}else {Edit((yyvsp[(3) - (7)].chaine),tmp_save,locality);EditTaille((yyvsp[(3) - (7)].chaine),(yyvsp[(6) - (7)].chaine));};}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 53 "bison.y"
    {char*tmp_s;sprintf(tmp_s,"*%d",(yyvsp[(3) - (3)].e));strcat((yyval.chaine),tmp_s);;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 53 "bison.y"
    {char*tmp_s;sprintf(tmp_s,"%d",(yyvsp[(1) - (1)].e));(yyval.chaine)=strdup(tmp_s);;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 55 "bison.y"
    {strcpy(tmp_save,"INTEGER");(yyval.chaine)=strdup("INTEGER");;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 55 "bison.y"
    {strcpy(tmp_save,"REEL");(yyval.chaine)=strdup("REEL");;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 55 "bison.y"
    {strcpy(tmp_save,"LOGICAL");(yyval.chaine)=strdup("LOGICAL");;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 55 "bison.y"
    {strcpy(tmp_save,"CHARACTER");(yyval.chaine)=strdup("CHARACTER");;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 58 "bison.y"
    {locality++;element *p =searchByState((yyvsp[(4) - (10)].chaine));
    if(strlen(p->type)&& p->locality==locality)printf("\n erreur semantique: DOUBLE DECLARATION de %s dans la ligne %d colonne %d\n",(yyvsp[(4) - (10)].chaine),yylineno,coll);
    else {Edit((yyvsp[(4) - (10)].chaine),strcat((yyvsp[(2) - (10)].chaine),"_FNC"),0);EditTailleRadic((yyvsp[(4) - (10)].chaine),(yyvsp[(5) - (10)].e));}
    if(strcmp(tmp_return,(yyvsp[(4) - (10)].chaine)))printf("\n erreur semantique: valeur retourne =/= nom de la fnc: %s , ligne %d colonne %d\n",(yyvsp[(4) - (10)].chaine),yylineno,coll);;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 62 "bison.y"
    {strcpy(tmp_return,(yyvsp[(1) - (3)].chaine));/*check type*/;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 62 "bison.y"
    {strcpy(tmp_return,(yyvsp[(1) - (3)].chaine));/*check type*/;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 62 "bison.y"
    {strcpy(tmp_return,(yyvsp[(1) - (3)].chaine));/*check type*/;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 64 "bison.y"
    {(yyval.e)=1;element *p =searchByState((yyvsp[(2) - (2)].chaine)); Edit((yyvsp[(2) - (2)].chaine),"\0",locality);;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 65 "bison.y"
    {(yyval.e)=1;element *p =searchByState((yyvsp[(2) - (6)].chaine)); Edit((yyvsp[(2) - (6)].chaine),"\0",locality);;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 66 "bison.y"
    {(yyval.e)++;element *p =searchByState((yyvsp[(3) - (3)].chaine)); Edit((yyvsp[(3) - (3)].chaine),"\0",locality);;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 67 "bison.y"
    {(yyval.e)++;element *p =searchByState((yyvsp[(3) - (7)].chaine)); Edit((yyvsp[(3) - (7)].chaine),"\0",locality);;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 74 "bison.y"
    {element *dest = searchByState((yyvsp[(2) - (5)].chaine));element *src = searchByState((yyvsp[(4) - (5)].chaine));
        if(!strlen(dest->type) || dest->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}
        if(!strlen(src->type) || src->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(4) - (5)].chaine),yylineno,coll);}
        if(strcmp(src->type,dest ->type)!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s avec %s,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),(yyvsp[(4) - (5)].chaine),yylineno,coll);};}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 78 "bison.y"
    {element *dest = searchByState((yyvsp[(2) - (8)].chaine));element *src = searchByState((yyvsp[(7) - (8)].chaine));
        if(!strlen(dest->type) || dest->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}
        if(!strlen(src->type) || src->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(7) - (8)].chaine),yylineno,coll);}
        if(strcmp(src->type,dest ->type)!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s avec %s,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),(yyvsp[(7) - (8)].chaine),yylineno,coll);};}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 82 "bison.y"
    {element *dest = searchByState((yyvsp[(2) - (8)].chaine));element *src = searchByState((yyvsp[(4) - (8)].chaine));
        if(!strlen(dest->type) || dest->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}
        if(!strlen(src->type) || src->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(4) - (8)].chaine),yylineno,coll);}
        if(strcmp(src->type,dest ->type)!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s avec %s,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),(yyvsp[(4) - (8)].chaine),yylineno,coll);};}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 86 "bison.y"
    {element *dest = searchByState((yyvsp[(2) - (11)].chaine));element *src = searchByState((yyvsp[(7) - (11)].chaine));
        if(!strlen(dest->type) || dest->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (11)].chaine),yylineno,coll);}
        if(!strlen(src->type) || src->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(7) - (11)].chaine),yylineno,coll);}
        if(strcmp(src->type,dest ->type)!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s avec %s,ligne %d colonne %d\n",(yyvsp[(2) - (11)].chaine),(yyvsp[(7) - (11)].chaine),yylineno,coll);};}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 90 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (8)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}};}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 93 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (8)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"CHARACTER")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}};}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 96 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (5)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}};}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 99 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (5)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"CHARACTER")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}};}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 102 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (5)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"LOGICAL")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}};}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 105 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (8)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"LOGICAL")!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (8)].chaine),yylineno,coll);}};}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 108 "bison.y"
    {element *idf = searchByState((yyvsp[(4) - (6)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(4) - (6)].chaine),yylineno,coll);};}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 117 "bison.y"
    {element *idf = searchByState((yyvsp[(1) - (1)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(1) - (1)].chaine),yylineno,coll);};}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 119 "bison.y"
    {element *idf = searchByState((yyvsp[(1) - (4)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(1) - (4)].chaine),yylineno,coll);};}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 121 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (3)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);};}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 124 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (6)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);};}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 128 "bison.y"
    {element *idf =searchByState((yyvsp[(2) - (2)].chaine)); if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (2)].chaine),yylineno,coll);};}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 129 "bison.y"
    {element *idf =searchByState((yyvsp[(2) - (6)].chaine)); if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (6)].chaine),yylineno,coll);};}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 130 "bison.y"
    {element *idf =searchByState((yyvsp[(3) - (3)].chaine)); if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);};}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 131 "bison.y"
    {element *idf =searchByState((yyvsp[(3) - (7)].chaine));if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (7)].chaine),yylineno,coll);};}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 133 "bison.y"
    {
    element *dest = searchByState((yyvsp[(1) - (8)].chaine));if(!strlen(dest->type) || dest->locality!=locality)printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(1) - (8)].chaine),yylineno,coll);else{
    element *src = searchByState((yyvsp[(4) - (8)].chaine));char *tmp_str = strtok(src->type,"_");tmp_str = strtok(NULL,"_");/*split to 2 strings, input : src->type = TYPE_FNC output : src->type = TYPE and tmp_str = FNC or null */
    if(tmp_str){if(strcmp(dest->type,src->type)!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(1) - (8)].chaine),yylineno,coll);}
    if(src->taille.x != (yyvsp[(6) - (8)].e)){printf("\n erreur semantique: NOMBRE D'ARGUMENTS NON VALIDE de %s ,ligne %d colonne %d\n",(yyvsp[(1) - (8)].chaine),yylineno,coll);}
    }
    else printf("\n erreur semantique: FONCTION %s NON DECLARE ,ligne %d colonne %d\n",(yyvsp[(4) - (8)].chaine),yylineno,coll);strcpy(src->type,strcat(src->type,"_FNC"));};}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 140 "bison.y"
    {
    element *dest = searchByState((yyvsp[(1) - (11)].chaine));if(!strlen(dest->type) || dest->locality!=locality)printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(1) - (11)].chaine),yylineno,coll);else{
    element *src = searchByState((yyvsp[(7) - (11)].chaine));char *tmp_str = strtok(src->type,"_");tmp_str = strtok(NULL,"_");/*split to 2 strings, input : src->type = TYPE_FNC output : src->type = TYPE and tmp_str = FNC or null */
    if(tmp_str){if(strcmp(dest->type,src->type)!=0){printf("\n erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(1) - (11)].chaine),yylineno,coll);}
    if(src->taille.x != (yyvsp[(9) - (11)].e)){printf("\n erreur semantique: NOMBRE D'ARGUMENTS NON VALIDE de %s ,ligne %d colonne %d\n",(yyvsp[(1) - (11)].chaine),yylineno,coll);}
    }
    else printf("\n erreur semantique: FONCTION %s NON DECLARE ,ligne %d colonne %d\n",(yyvsp[(7) - (11)].chaine),yylineno,coll);strcpy(src->type,strcat(src->type,"_FNC"));};}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 154 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (3)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}};}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 157 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (3)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}};}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 160 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (3)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}};}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 163 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (3)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (3)].chaine),yylineno,coll);}};}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 166 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (2)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (2)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (2)].chaine),yylineno,coll);}};}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 169 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (6)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}};}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 172 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (6)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}};}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 175 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (6)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}};}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 178 "bison.y"
    {element *idf = searchByState((yyvsp[(3) - (6)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(3) - (6)].chaine),yylineno,coll);}};}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 181 "bison.y"
    {element *idf = searchByState((yyvsp[(2) - (5)].chaine));
                            if(!strlen(idf->type) || idf->locality!=locality){printf("\n erreur semantique: VARIABLE %s NON DECLARE,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}
                            else{if(strcmp(idf->type,"INTEGER")!=0 && strcmp(idf->type,"REEL")!=0){printf("\n cc erreur semantique: INCOMPATIBILITE DE TYPE de %s ,ligne %d colonne %d\n",(yyvsp[(2) - (5)].chaine),yylineno,coll);}};}
    break;



/* Line 1455 of yacc.c  */
#line 2021 "bison.tab.c"
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
#line 194 "bison.y"

int yyerror(char* msg)
{
printf("\n erreur syntaxique dans la ligne %d colonne %d\n",yylineno,coll);  
return 1; 
}  
int main()
{

yyin = fopen( "programme.txt", "r" );
if (yyin==NULL) {printf("input file not found , compiling from the console input :\n");yyparse();}
else yyparse();
char rep='n';
printf("\nafficher la table syntaxique? Y/N\n");
scanf("%c",&rep);
if(rep=='y'||rep=='Y'){printList();printList2();}
freeList();freeList2();
return 1;
}

