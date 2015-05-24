/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     T_PROGRAM = 258,
     T_BEGIN = 259,
     T_END = 260,
     T_VAR = 261,
     T_CONST = 262,
     T_REAL = 263,
     T_INTEGER = 264,
     T_PROCEDURE = 265,
     T_READ = 266,
     T_WRITE = 267,
     T_WHILE = 268,
     T_IF = 269,
     T_THEN = 270,
     T_ELSE = 271,
     T_FOR = 272,
     T_TO = 273,
     T_DO = 274,
     T_IGUAL = 275,
     T_DIFERENTE = 276,
     T_MAIORIGUAL = 277,
     T_MENORIGUAL = 278,
     T_MAIOR = 279,
     T_MENOR = 280,
     T_SOMA = 281,
     T_SUBTRACAO = 282,
     T_MULTIPLICACAO = 283,
     T_DIVISAO = 284,
     T_ATRIBUICAO = 285,
     T_PONTOEVIRGULA = 286,
     T_DOISPONTOS = 287,
     T_APARENTESES = 288,
     T_FPARENTESES = 289,
     T_VIRGULA = 290,
     T_PONTO = 291,
     T_INTEIROGRANDEDEMAIS = 292,
     T_IDGRANDEDEMAIS = 293,
     T_NUMEROMALFORMADO = 294,
     T_CARACTERINVALIDO = 295,
     T_COMENTARIOINACABADO = 296,
     T_NUMERO_INT = 297,
     T_NUMERO_REAL = 298,
     T_ID = 299,
     PALAVRARESERVADA = 300
   };
#endif
/* Tokens.  */
#define T_PROGRAM 258
#define T_BEGIN 259
#define T_END 260
#define T_VAR 261
#define T_CONST 262
#define T_REAL 263
#define T_INTEGER 264
#define T_PROCEDURE 265
#define T_READ 266
#define T_WRITE 267
#define T_WHILE 268
#define T_IF 269
#define T_THEN 270
#define T_ELSE 271
#define T_FOR 272
#define T_TO 273
#define T_DO 274
#define T_IGUAL 275
#define T_DIFERENTE 276
#define T_MAIORIGUAL 277
#define T_MENORIGUAL 278
#define T_MAIOR 279
#define T_MENOR 280
#define T_SOMA 281
#define T_SUBTRACAO 282
#define T_MULTIPLICACAO 283
#define T_DIVISAO 284
#define T_ATRIBUICAO 285
#define T_PONTOEVIRGULA 286
#define T_DOISPONTOS 287
#define T_APARENTESES 288
#define T_FPARENTESES 289
#define T_VIRGULA 290
#define T_PONTO 291
#define T_INTEIROGRANDEDEMAIS 292
#define T_IDGRANDEDEMAIS 293
#define T_NUMEROMALFORMADO 294
#define T_CARACTERINVALIDO 295
#define T_COMENTARIOINACABADO 296
#define T_NUMERO_INT 297
#define T_NUMERO_REAL 298
#define T_ID 299
#define PALAVRARESERVADA 300




/* Copy the first part of user declarations.  */
#line 1 "arqyacc.y"

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "hashmap.h"
    int yylex(void);
    extern char *yytext;
    extern int yylineno;
    void yyerror(const char* );


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 207 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   183

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  82
/* YYNRULES -- Number of rules.  */
#define YYNRULES  148
/* YYNRULES -- Number of states.  */
#define YYNSTATES  245

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
      45
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     6,     7,    13,    14,    19,    22,    23,
      27,    28,    34,    35,    40,    43,    47,    50,    52,    54,
      59,    63,    65,    69,    72,    73,    74,    79,    80,    87,
      91,    94,    97,   100,   103,   105,   107,   110,   111,   112,
     119,   124,   126,   128,   130,   132,   134,   137,   138,   142,
     145,   146,   147,   151,   152,   153,   154,   161,   162,   168,
     171,   172,   176,   180,   184,   185,   190,   193,   194,   199,
     200,   206,   210,   213,   216,   218,   220,   222,   226,   230,
     231,   234,   235,   239,   242,   243,   244,   248,   249,   253,
     254,   259,   260,   265,   266,   267,   271,   272,   276,   277,
     278,   289,   290,   294,   295,   299,   300,   305,   306,   310,
     313,   317,   318,   324,   325,   331,   334,   335,   342,   343,
     350,   354,   356,   358,   360,   362,   364,   366,   368,   371,
     373,   375,   376,   380,   381,   383,   385,   389,   393,   394,
     396,   398,   400,   402,   405,   407,   410,   413,   415
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      47,     0,    -1,     3,    50,    -1,    -1,     1,    31,    48,
      56,    55,    -1,    -1,     1,    49,    56,    55,    -1,     1,
      36,    -1,    -1,    44,    51,    54,    -1,    -1,     1,    31,
      52,    56,    55,    -1,    -1,     1,    53,    56,    55,    -1,
       1,    36,    -1,    31,    56,    55,    -1,     1,    36,    -1,
      36,    -1,     1,    -1,    58,     4,    96,    57,    -1,    58,
       1,     5,    -1,     5,    -1,    59,    66,    74,    -1,    60,
      59,    -1,    -1,    -1,     7,    61,    44,    63,    -1,    -1,
       7,     1,    20,    62,   127,    31,    -1,     7,     1,    31,
      -1,    20,    64,    -1,     1,    31,    -1,   127,    65,    -1,
       1,    31,    -1,    31,    -1,     1,    -1,    67,    66,    -1,
      -1,    -1,     6,    71,    68,    32,    70,    69,    -1,     6,
      71,     1,    31,    -1,    31,    -1,     1,    -1,     8,    -1,
       9,    -1,     1,    -1,    44,    73,    -1,    -1,     1,    72,
      73,    -1,    35,    71,    -1,    -1,    -1,    76,    75,    74,
      -1,    -1,    -1,    -1,    10,    77,    44,    82,    78,    80,
      -1,    -1,    10,     1,    31,    79,    85,    -1,    31,    85,
      -1,    -1,     1,    81,    85,    -1,    33,    83,    34,    -1,
      33,    83,     1,    -1,    -1,    71,    32,    70,    84,    -1,
      31,    83,    -1,    -1,    89,     4,    96,    87,    -1,    -1,
      89,     1,     5,    86,    88,    -1,    89,     1,    31,    -1,
       5,    88,    -1,     1,    31,    -1,    31,    -1,     1,    -1,
      66,    -1,    33,    91,    34,    -1,    33,    91,     1,    -1,
      -1,    44,    93,    -1,    -1,     1,    92,    93,    -1,    31,
      91,    -1,    -1,    -1,    16,    95,    99,    -1,    -1,    99,
      31,    96,    -1,    -1,    99,     1,    97,    96,    -1,    -1,
       1,    31,    98,    96,    -1,    -1,    -1,    11,   100,   108,
      -1,    -1,    12,   101,   108,    -1,    -1,    -1,    17,   102,
      44,   103,    30,   118,    18,   118,    19,    99,    -1,    -1,
      13,   104,   113,    -1,    -1,    14,   105,   109,    -1,    -1,
      44,   106,    30,   118,    -1,    -1,    44,   107,    90,    -1,
       4,   112,    -1,    33,    71,    34,    -1,    -1,   116,    15,
     110,    99,    94,    -1,    -1,   116,     1,   111,    99,    94,
      -1,    96,     5,    -1,    -1,    33,   116,    34,    19,   114,
      99,    -1,    -1,    33,   116,    34,     1,   115,    99,    -1,
     118,   117,   118,    -1,    20,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    25,    -1,     1,    -1,   122,   120,
      -1,    26,    -1,    27,    -1,    -1,   121,   122,   120,    -1,
      -1,    26,    -1,    27,    -1,   119,   125,   123,    -1,   124,
     125,   123,    -1,    -1,    28,    -1,    29,    -1,    44,    -1,
     127,    -1,    33,   126,    -1,     1,    -1,   118,    34,    -1,
     118,     1,    -1,    42,    -1,    43,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    66,    66,    67,    67,    68,    68,    69,    72,    72,
      73,    73,    74,    74,    75,    78,    79,    82,    83,    87,
      88,    91,    95,    99,   100,   103,   103,   104,   104,   105,
     108,   109,   112,   113,   116,   117,   121,   122,   125,   125,
     126,   129,   130,   134,   135,   136,   140,   141,   141,   145,
     146,   150,   150,   151,   154,   154,   154,   155,   155,   158,
     159,   159,   163,   164,   165,   169,   173,   174,   178,   179,
     179,   180,   183,   184,   187,   188,   192,   196,   197,   198,
     202,   203,   203,   207,   208,   212,   212,   213,   217,   218,
     218,   219,   219,   220,   225,   225,   226,   226,   227,   227,
     227,   228,   228,   229,   229,   230,   230,   231,   231,   232,
     235,   238,   238,   239,   239,   242,   245,   245,   246,   246,
     250,   254,   255,   256,   257,   258,   259,   260,   264,   268,
     269,   270,   274,   275,   279,   280,   284,   288,   289,   293,
     294,   298,   299,   300,   301,   305,   306,   310,   311
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "\"program\"", "\"begin\"", "\"end\"",
  "\"var\"", "\"const\"", "\"real\"", "\"integer\"", "\"procedure\"",
  "\"read\"", "\"write\"", "\"while\"", "\"if\"", "\"then\"", "\"else\"",
  "\"for\"", "\"to\"", "\"do\"", "\"=\"", "\"<>\"", "\">=\"", "\"<=\"",
  "\">\"", "\"<\"", "\"+\"", "\"-\"", "\"*\"", "\"/\"", "\":=\"", "\";\"",
  "\":\"", "\"(\"", "\")\"", "\",\"", "\".\"", "T_INTEIROGRANDEDEMAIS",
  "T_IDGRANDEDEMAIS", "T_NUMEROMALFORMADO", "T_CARACTERINVALIDO",
  "T_COMENTARIOINACABADO", "T_NUMERO_INT", "T_NUMERO_REAL", "T_ID",
  "PALAVRARESERVADA", "$accept", "programa", "@1", "@2", "programa1", "@3",
  "@4", "@5", "programa2", "programa3", "corpo", "corpo1", "dc", "dc_c",
  "dc_c0", "@6", "@7", "dc_c1", "dc_c2", "dc_c3", "dc_v", "dc_v0", "@8",
  "dc_v1", "tipo_var", "variaveis", "@9", "mais_var", "dc_p", "@10",
  "dc_p0", "@11", "@12", "@13", "dc_p1", "@14", "parametros", "lista_par",
  "mais_par", "corpo_p", "@15", "corpo_p1", "corpo_p2", "dc_loc",
  "lista_arg", "argumentos", "@16", "mais_ident", "pfalsa", "@17",
  "comandos", "@18", "@19", "cmd", "@20", "@21", "@22", "@23", "@24",
  "@25", "@26", "@27", "cmd_param", "cmd_if", "@28", "@29", "cmd_begin",
  "cmd_while", "@30", "@31", "condicao", "relacao", "expressao", "op_un",
  "outros_termos", "op_ad", "termo", "mais_fatores", "op_mul", "fator",
  "fator_exp", "numero", 0
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
     295,   296,   297,   298,   299,   300
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    47,    49,    47,    47,    51,    50,
      52,    50,    53,    50,    50,    54,    54,    55,    55,    56,
      56,    57,    58,    59,    59,    61,    60,    62,    60,    60,
      63,    63,    64,    64,    65,    65,    66,    66,    68,    67,
      67,    69,    69,    70,    70,    70,    71,    72,    71,    73,
      73,    75,    74,    74,    77,    78,    76,    79,    76,    80,
      81,    80,    82,    82,    82,    83,    84,    84,    85,    86,
      85,    85,    87,    87,    88,    88,    89,    90,    90,    90,
      91,    92,    91,    93,    93,    95,    94,    94,    96,    97,
      96,    98,    96,    96,   100,    99,   101,    99,   102,   103,
      99,   104,    99,   105,    99,   106,    99,   107,    99,    99,
     108,   110,   109,   111,   109,   112,   114,   113,   115,   113,
     116,   117,   117,   117,   117,   117,   117,   117,   118,   119,
     119,   119,   120,   120,   121,   121,   122,   123,   123,   124,
     124,   125,   125,   125,   125,   126,   126,   127,   127
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     0,     4,     2,     0,     3,
       0,     5,     0,     4,     2,     3,     2,     1,     1,     4,
       3,     1,     3,     2,     0,     0,     4,     0,     6,     3,
       2,     2,     2,     2,     1,     1,     2,     0,     0,     6,
       4,     1,     1,     1,     1,     1,     2,     0,     3,     2,
       0,     0,     3,     0,     0,     0,     6,     0,     5,     2,
       0,     3,     3,     3,     0,     4,     2,     0,     4,     0,
       5,     3,     2,     2,     1,     1,     1,     3,     3,     0,
       2,     0,     3,     2,     0,     0,     3,     0,     3,     0,
       4,     0,     4,     0,     0,     3,     0,     3,     0,     0,
      10,     0,     3,     0,     3,     0,     4,     0,     3,     2,
       3,     0,     5,     0,     5,     2,     0,     6,     0,     6,
       3,     1,     1,     1,     1,     1,     1,     1,     2,     1,
       1,     0,     3,     0,     1,     1,     3,     3,     0,     1,
       1,     1,     1,     2,     1,     2,     2,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     3,     7,    24,    12,     8,     2,
       1,    24,     0,     0,     0,    37,    24,    10,    14,    24,
       0,     0,     0,     0,    18,    17,     6,     0,     0,     0,
      53,    37,    23,    24,     0,     0,    24,     9,     4,    27,
      29,     0,    20,     0,     0,    94,    96,   101,   103,    98,
     107,     0,     0,    47,    50,     0,     0,    22,    51,    36,
       0,    13,    16,     0,     0,     0,     0,    26,    91,     0,
     109,     0,     0,     0,   131,     0,     0,    79,    21,    19,
      89,     0,    50,     0,    46,     0,     0,     0,     0,    53,
      11,    15,   147,   148,     0,    31,     0,    30,     0,     0,
     115,     0,    95,    97,   131,   102,   129,   130,   104,     0,
       0,     0,   133,    99,   131,     0,   108,     0,    88,    48,
      49,    40,     0,    57,    64,    52,    28,    33,    35,    34,
      32,    92,     0,     0,   113,   111,   127,   121,   122,   123,
     124,   125,   126,   131,   144,   131,   141,   138,   142,   134,
     135,   128,   131,     0,   106,    81,    84,     0,    90,    45,
      43,    44,     0,    37,     0,    55,   110,     0,     0,     0,
     120,     0,   143,   139,   140,   136,     0,   133,   131,    84,
       0,    80,    78,    77,    42,    41,    39,    76,    58,     0,
       0,     0,     0,   118,   116,    87,    87,   146,   145,   138,
     132,     0,    82,    83,     0,     0,     0,    63,    62,    60,
      37,    56,     0,     0,    85,   114,   112,   137,   131,    69,
      71,     0,    67,    37,    59,   119,   117,     0,     0,     0,
       0,     0,    68,     0,    65,    61,    86,     0,    75,    74,
      70,    73,    72,    66,   100
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,     6,     9,    20,    33,    19,    37,    26,
      13,    79,    14,    15,    16,    23,    64,    67,    97,   130,
     187,    31,    86,   186,   162,   190,    82,    84,    57,    89,
      58,    88,   192,   163,   211,   223,   165,   191,   234,   188,
     229,   232,   240,   189,   116,   157,   179,   181,   215,   227,
      51,   117,    99,    52,    71,    72,    75,   153,    73,    74,
      76,    77,   102,   108,   169,   168,    70,   105,   213,   212,
     109,   143,   110,   111,   151,   152,   112,   175,   176,   147,
     172,   148
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -166
static const yytype_int16 yypact[] =
{
      20,    56,     6,   103,  -166,  -166,    97,    86,  -166,  -166,
    -166,    97,     7,    23,   117,   113,    97,  -166,  -166,    97,
      39,    23,    65,    88,  -166,  -166,  -166,   124,     5,    13,
     123,   113,  -166,    97,    23,    99,    97,  -166,  -166,  -166,
    -166,    79,  -166,   105,     5,  -166,  -166,  -166,  -166,  -166,
     104,   132,    40,  -166,   106,    28,    14,  -166,  -166,  -166,
      23,  -166,  -166,    23,    47,   107,    26,  -166,  -166,   134,
    -166,   109,   109,   110,    98,    96,   114,   112,  -166,  -166,
    -166,     5,   106,    13,  -166,   116,   118,   120,   108,   123,
    -166,  -166,  -166,  -166,   125,  -166,   126,  -166,    75,     5,
    -166,    13,  -166,  -166,    98,  -166,  -166,  -166,  -166,    80,
      90,    10,   101,  -166,    98,    19,  -166,     5,  -166,  -166,
    -166,  -166,    85,  -166,   121,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,   119,   128,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,    98,  -166,    98,  -166,   102,  -166,  -166,
    -166,  -166,    98,   129,  -166,  -166,   127,    11,  -166,  -166,
    -166,  -166,    76,   113,    13,  -166,  -166,    83,    22,    22,
    -166,    12,  -166,  -166,  -166,  -166,    10,   101,    98,   127,
      19,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,   122,
     131,    27,    77,  -166,  -166,   130,   130,  -166,  -166,   102,
    -166,   137,  -166,  -166,     0,     5,    85,  -166,  -166,  -166,
     113,  -166,    22,    22,  -166,  -166,  -166,  -166,    98,  -166,
    -166,   115,   133,   113,  -166,  -166,  -166,    22,   141,    78,
     135,    78,  -166,    13,  -166,  -166,  -166,    22,  -166,  -166,
    -166,  -166,  -166,  -166,  -166
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,     4,
      64,  -166,  -166,   149,  -166,  -166,  -166,  -166,  -166,  -166,
      67,  -166,  -166,  -166,   -58,   -27,  -166,    87,    60,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,   -66,  -166,  -122,
    -166,  -166,   -63,  -166,  -166,   -10,  -166,    -8,   -24,  -166,
     -44,  -166,  -166,  -165,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,   111,  -166,  -166,  -166,  -166,  -166,  -166,  -166,
      69,  -166,  -113,  -166,    -3,  -166,    24,   -21,  -166,    -1,
    -166,   -22
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -106
static const yytype_int16 yytable[] =
{
      69,   154,    55,   195,   196,   219,    43,     7,    22,    44,
     -93,   144,   182,   197,    53,    87,    45,    46,    47,    48,
     155,     1,    49,     2,    24,    38,    44,    96,   207,    85,
     170,   220,   171,    45,    46,    47,    48,   118,    61,    49,
      35,    80,    94,   145,    98,   183,   198,   225,   226,    50,
       8,   -25,    92,    93,   146,   131,   120,    54,   -54,    25,
     -38,   208,   236,   156,    90,   201,    50,    91,    92,    93,
      36,    81,   244,   158,   132,    21,   128,   184,   209,   238,
      65,   134,    30,    34,   193,    39,   159,     4,   224,    92,
      93,   136,     5,   160,   161,   135,    40,    60,    59,    66,
      63,   235,   194,    10,    12,   228,   129,   185,   210,   239,
     137,   138,   139,   140,   141,   142,   230,    17,    27,    29,
     231,    28,    18,   204,   106,   107,   205,   149,   150,    42,
     173,   174,    41,    56,  -105,    62,    68,    78,    95,   100,
     113,    83,   101,   104,   114,   115,   214,   121,   222,   125,
     122,   123,   124,   166,   164,   218,   126,   127,   180,   178,
     237,   221,   167,   206,   233,    32,   241,   243,   242,   119,
     203,   202,   216,   133,   200,   199,   177,     0,   217,     0,
       0,     0,     0,   103
};

static const yytype_int16 yycheck[] =
{
      44,   114,    29,   168,   169,     5,     1,     1,     1,     4,
       5,     1,     1,     1,     1,     1,    11,    12,    13,    14,
       1,     1,    17,     3,     1,    21,     4,     1,     1,     1,
     143,    31,   145,    11,    12,    13,    14,    81,    34,    17,
       1,     1,    64,    33,    66,    34,    34,   212,   213,    44,
      44,    44,    42,    43,    44,    99,    83,    44,    44,    36,
      32,    34,   227,    44,    60,   178,    44,    63,    42,    43,
      31,    31,   237,   117,   101,    11,     1,     1,     1,     1,
       1,     1,    15,    19,     1,    20,     1,    31,   210,    42,
      43,     1,    36,     8,     9,    15,    31,    33,    31,    20,
      36,   223,    19,     0,     7,   218,    31,    31,    31,    31,
      20,    21,    22,    23,    24,    25,     1,    31,     1,     6,
       5,     4,    36,     1,    26,    27,     4,    26,    27,     5,
      28,    29,    44,    10,    30,    36,    31,     5,    31,     5,
      44,    35,    33,    33,    30,    33,    16,    31,   206,    89,
      32,    31,    44,    34,    33,    18,    31,    31,    31,    30,
      19,   205,    34,    32,    31,    16,    31,   233,   231,    82,
     180,   179,   196,   104,   177,   176,   152,    -1,   199,    -1,
      -1,    -1,    -1,    72
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     1,     3,    47,    31,    36,    49,     1,    44,    50,
       0,    48,     7,    56,    58,    59,    60,    31,    36,    53,
      51,    56,     1,    61,     1,    36,    55,     1,     4,     6,
      66,    67,    59,    52,    56,     1,    31,    54,    55,    20,
      31,    44,     5,     1,     4,    11,    12,    13,    14,    17,
      44,    96,    99,     1,    44,    71,    10,    74,    76,    66,
      56,    55,    36,    56,    62,     1,    20,    63,    31,    96,
     112,   100,   101,   104,   105,   102,   106,   107,     5,    57,
       1,    31,    72,    35,    73,     1,    68,     1,    77,    75,
      55,    55,    42,    43,   127,    31,     1,    64,   127,    98,
       5,    33,   108,   108,    33,   113,    26,    27,   109,   116,
     118,   119,   122,    44,    30,    33,    90,    97,    96,    73,
      71,    31,    32,    31,    44,    74,    31,    31,     1,    31,
      65,    96,    71,   116,     1,    15,     1,    20,    21,    22,
      23,    24,    25,   117,     1,    33,    44,   125,   127,    26,
      27,   120,   121,   103,   118,     1,    44,    91,    96,     1,
       8,     9,    70,    79,    33,    82,    34,    34,   111,   110,
     118,   118,   126,    28,    29,   123,   124,   122,    30,    92,
      31,    93,     1,    34,     1,    31,    69,    66,    85,    89,
      71,    83,    78,     1,    19,    99,    99,     1,    34,   125,
     120,   118,    93,    91,     1,     4,    32,     1,    34,     1,
      31,    80,   115,   114,    16,    94,    94,   123,    18,     5,
      31,    96,    70,    81,    85,    99,    99,    95,   118,    86,
       1,     5,    87,    31,    84,    85,    99,    19,     1,    31,
      88,    31,    88,    83,    99
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 66 "arqyacc.y"
    {}
    break;

  case 3:
#line 67 "arqyacc.y"
    { yyerror("program"); }
    break;

  case 5:
#line 68 "arqyacc.y"
    { yyerror("program");}
    break;

  case 7:
#line 69 "arqyacc.y"
    { yyerror("program");}
    break;

  case 8:
#line 72 "arqyacc.y"
    {}
    break;

  case 9:
#line 72 "arqyacc.y"
    {}
    break;

  case 10:
#line 73 "arqyacc.y"
    { yyerror("id");}
    break;

  case 12:
#line 74 "arqyacc.y"
    { yyerror("id"); }
    break;

  case 14:
#line 75 "arqyacc.y"
    { yyerror("id");}
    break;

  case 15:
#line 78 "arqyacc.y"
    {}
    break;

  case 16:
#line 79 "arqyacc.y"
    { yyerror(";");}
    break;

  case 17:
#line 82 "arqyacc.y"
    {}
    break;

  case 18:
#line 83 "arqyacc.y"
    { yyerror(".");}
    break;

  case 19:
#line 87 "arqyacc.y"
    {}
    break;

  case 20:
#line 88 "arqyacc.y"
    { yyerror("begin"); }
    break;

  case 21:
#line 91 "arqyacc.y"
    {}
    break;

  case 22:
#line 95 "arqyacc.y"
    {}
    break;

  case 23:
#line 99 "arqyacc.y"
    {}
    break;

  case 25:
#line 103 "arqyacc.y"
    {}
    break;

  case 26:
#line 103 "arqyacc.y"
    {}
    break;

  case 27:
#line 104 "arqyacc.y"
    { yyerror("id"); }
    break;

  case 29:
#line 105 "arqyacc.y"
    { yyerror("id"); }
    break;

  case 30:
#line 108 "arqyacc.y"
    {}
    break;

  case 31:
#line 109 "arqyacc.y"
    { yyerror("="); }
    break;

  case 32:
#line 112 "arqyacc.y"
    {}
    break;

  case 33:
#line 113 "arqyacc.y"
    { yyerror("numero"); }
    break;

  case 34:
#line 116 "arqyacc.y"
    {}
    break;

  case 35:
#line 117 "arqyacc.y"
    { yyerror(";"); }
    break;

  case 36:
#line 121 "arqyacc.y"
    {}
    break;

  case 38:
#line 125 "arqyacc.y"
    {}
    break;

  case 39:
#line 125 "arqyacc.y"
    {}
    break;

  case 40:
#line 126 "arqyacc.y"
    { yyerror(":"); }
    break;

  case 41:
#line 129 "arqyacc.y"
    {}
    break;

  case 42:
#line 130 "arqyacc.y"
    { yyerror(";"); }
    break;

  case 43:
#line 134 "arqyacc.y"
    {}
    break;

  case 44:
#line 135 "arqyacc.y"
    {}
    break;

  case 45:
#line 136 "arqyacc.y"
    { yyerror("tipo"); }
    break;

  case 46:
#line 140 "arqyacc.y"
    {}
    break;

  case 47:
#line 141 "arqyacc.y"
    { yyclearin; yyerror("id"); }
    break;

  case 48:
#line 141 "arqyacc.y"
    {}
    break;

  case 49:
#line 145 "arqyacc.y"
    {}
    break;

  case 50:
#line 146 "arqyacc.y"
    {}
    break;

  case 51:
#line 150 "arqyacc.y"
    {}
    break;

  case 54:
#line 154 "arqyacc.y"
    {}
    break;

  case 55:
#line 154 "arqyacc.y"
    {}
    break;

  case 57:
#line 155 "arqyacc.y"
    { yyclearin; yyerror("id"); }
    break;

  case 59:
#line 158 "arqyacc.y"
    {}
    break;

  case 60:
#line 159 "arqyacc.y"
    { yyclearin; yyerror(";"); }
    break;

  case 62:
#line 163 "arqyacc.y"
    {}
    break;

  case 63:
#line 164 "arqyacc.y"
    { yyclearin; yyerror(")"); }
    break;

  case 64:
#line 165 "arqyacc.y"
    {}
    break;

  case 65:
#line 169 "arqyacc.y"
    {}
    break;

  case 66:
#line 173 "arqyacc.y"
    {}
    break;

  case 67:
#line 174 "arqyacc.y"
    {}
    break;

  case 68:
#line 178 "arqyacc.y"
    {}
    break;

  case 69:
#line 179 "arqyacc.y"
    { yyerror("begin"); }
    break;

  case 71:
#line 180 "arqyacc.y"
    { yyerror("begin"); }
    break;

  case 72:
#line 183 "arqyacc.y"
    {}
    break;

  case 73:
#line 184 "arqyacc.y"
    { yyerror("end"); }
    break;

  case 75:
#line 188 "arqyacc.y"
    { yyerror(";"); }
    break;

  case 77:
#line 196 "arqyacc.y"
    {}
    break;

  case 78:
#line 197 "arqyacc.y"
    { yyerror(")"); }
    break;

  case 79:
#line 198 "arqyacc.y"
    {}
    break;

  case 80:
#line 202 "arqyacc.y"
    {}
    break;

  case 81:
#line 203 "arqyacc.y"
    { yyclearin; yyerror("id"); }
    break;

  case 82:
#line 203 "arqyacc.y"
    {}
    break;

  case 83:
#line 207 "arqyacc.y"
    {}
    break;

  case 84:
#line 208 "arqyacc.y"
    {}
    break;

  case 85:
#line 212 "arqyacc.y"
    {}
    break;

  case 89:
#line 218 "arqyacc.y"
    { yyclearin; yyerror(";"); }
    break;

  case 91:
#line 219 "arqyacc.y"
    { yyerror("cmd"); }
    break;

  case 94:
#line 225 "arqyacc.y"
    {}
    break;

  case 95:
#line 225 "arqyacc.y"
    {}
    break;

  case 96:
#line 226 "arqyacc.y"
    {}
    break;

  case 97:
#line 226 "arqyacc.y"
    {}
    break;

  case 98:
#line 227 "arqyacc.y"
    {}
    break;

  case 99:
#line 227 "arqyacc.y"
    {}
    break;

  case 100:
#line 227 "arqyacc.y"
    {}
    break;

  case 101:
#line 228 "arqyacc.y"
    {}
    break;

  case 102:
#line 228 "arqyacc.y"
    {}
    break;

  case 103:
#line 229 "arqyacc.y"
    {}
    break;

  case 105:
#line 230 "arqyacc.y"
    {}
    break;

  case 106:
#line 230 "arqyacc.y"
    {}
    break;

  case 107:
#line 231 "arqyacc.y"
    {}
    break;

  case 108:
#line 231 "arqyacc.y"
    {}
    break;

  case 109:
#line 232 "arqyacc.y"
    {}
    break;

  case 110:
#line 235 "arqyacc.y"
    {}
    break;

  case 111:
#line 238 "arqyacc.y"
    {}
    break;

  case 112:
#line 238 "arqyacc.y"
    {}
    break;

  case 113:
#line 239 "arqyacc.y"
    {yyerror("then");}
    break;

  case 114:
#line 239 "arqyacc.y"
    {}
    break;

  case 116:
#line 245 "arqyacc.y"
    {}
    break;

  case 117:
#line 245 "arqyacc.y"
    {}
    break;

  case 118:
#line 246 "arqyacc.y"
    { yyerror("do");}
    break;

  case 120:
#line 250 "arqyacc.y"
    {}
    break;

  case 121:
#line 254 "arqyacc.y"
    {}
    break;

  case 122:
#line 255 "arqyacc.y"
    {}
    break;

  case 123:
#line 256 "arqyacc.y"
    {}
    break;

  case 124:
#line 257 "arqyacc.y"
    {}
    break;

  case 125:
#line 258 "arqyacc.y"
    {}
    break;

  case 126:
#line 259 "arqyacc.y"
    {}
    break;

  case 127:
#line 260 "arqyacc.y"
    { yyerror("sinal de relacao"); }
    break;

  case 128:
#line 264 "arqyacc.y"
    {}
    break;

  case 129:
#line 268 "arqyacc.y"
    {}
    break;

  case 130:
#line 269 "arqyacc.y"
    {}
    break;

  case 131:
#line 270 "arqyacc.y"
    {}
    break;

  case 132:
#line 274 "arqyacc.y"
    {}
    break;

  case 133:
#line 275 "arqyacc.y"
    {}
    break;

  case 134:
#line 279 "arqyacc.y"
    {}
    break;

  case 135:
#line 280 "arqyacc.y"
    {}
    break;

  case 136:
#line 284 "arqyacc.y"
    {}
    break;

  case 137:
#line 288 "arqyacc.y"
    {}
    break;

  case 138:
#line 289 "arqyacc.y"
    {}
    break;

  case 139:
#line 293 "arqyacc.y"
    {}
    break;

  case 140:
#line 294 "arqyacc.y"
    {}
    break;

  case 141:
#line 298 "arqyacc.y"
    {}
    break;

  case 142:
#line 299 "arqyacc.y"
    {}
    break;

  case 143:
#line 300 "arqyacc.y"
    {}
    break;

  case 144:
#line 301 "arqyacc.y"
    { yyclearin; yyerror("sinal de relacao"); }
    break;

  case 145:
#line 305 "arqyacc.y"
    {}
    break;

  case 146:
#line 306 "arqyacc.y"
    { yyerror(")"); }
    break;

  case 147:
#line 310 "arqyacc.y"
    {}
    break;

  case 148:
#line 311 "arqyacc.y"
    {}
    break;


/* Line 1267 of yacc.c.  */
#line 2249 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 314 "arqyacc.y"

int main(int argc, char *argv[])
{
    initTable();
    yyparse();

    return 0;

}

void yyerror(const char* msg) 
{
    if(strcmp(msg, "syntax error"))
    {
        printf("Erro sintatico: Linha %d. Era esperado %s, encontrado: %s\n", yylineno, msg, yytext);    
    }
    
}
