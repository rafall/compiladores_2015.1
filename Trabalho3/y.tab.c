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
#line 1 "arqyacc.y" /* yacc.c:339  */

    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "hashmap.h"
    #include "symbols.h"
    #define YYSTYPE char*
    int yylex(void);
    int numErros;
    extern char *yytext;
    extern int yylineno;
    void yyerror(const char* );
    void yyerror2(const char* );
    int contexto=0;
    int ret, contparametros;
    char listavar[400];
    char *str;
    char *cpystr;
    char *lastprocedure;
    char msg[300];
    

#line 89 "y.tab.c" /* yacc.c:339  */

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

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 230 "y.tab.c" /* yacc.c:358  */

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
#define YYFINAL  10
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   208

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  83
/* YYNRULES -- Number of rules.  */
#define YYNRULES  149
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  246

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   300

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    78,    78,    79,    79,    80,    80,    81,    84,    84,
      85,    85,    86,    86,    87,    90,    91,    94,    95,    99,
     100,   103,   107,   111,   119,   122,   122,   123,   123,   124,
     127,   128,   131,   132,   135,   136,   140,   161,   164,   164,
     165,   168,   169,   173,   174,   175,   179,   180,   180,   184,
     185,   189,   189,   190,   193,   193,   193,   194,   194,   197,
     198,   198,   202,   203,   204,   208,   208,   229,   230,   234,
     235,   235,   236,   239,   240,   243,   244,   248,   252,   253,
     254,   258,   259,   259,   263,   264,   268,   268,   269,   273,
     274,   274,   275,   275,   276,   281,   281,   282,   282,   283,
     283,   283,   284,   284,   285,   285,   286,   286,   287,   287,
     288,   291,   294,   294,   295,   295,   298,   301,   301,   302,
     302,   306,   310,   311,   312,   313,   314,   315,   316,   320,
     324,   325,   326,   330,   331,   335,   336,   340,   344,   345,
     349,   350,   354,   355,   356,   357,   361,   362,   366,   367
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "PALAVRARESERVADA", "$accept", "programa", "$@1", "$@2", "programa1",
  "$@3", "$@4", "$@5", "programa2", "programa3", "corpo", "corpo1", "dc",
  "dc_c", "dc_c0", "$@6", "$@7", "dc_c1", "dc_c2", "dc_c3", "dc_v",
  "dc_v0", "$@8", "dc_v1", "tipo_var", "variaveis", "$@9", "mais_var",
  "dc_p", "$@10", "dc_p0", "@11", "$@12", "$@13", "dc_p1", "$@14",
  "parametros", "lista_par", "$@15", "mais_par", "corpo_p", "$@16",
  "corpo_p1", "corpo_p2", "dc_loc", "lista_arg", "argumentos", "$@17",
  "mais_ident", "pfalsa", "$@18", "comandos", "$@19", "$@20", "cmd",
  "$@21", "$@22", "$@23", "$@24", "$@25", "$@26", "$@27", "$@28",
  "cmd_param", "cmd_if", "$@29", "$@30", "cmd_begin", "cmd_while", "$@31",
  "$@32", "condicao", "relacao", "expressao", "op_un", "outros_termos",
  "op_ad", "termo", "mais_fatores", "op_mul", "fator", "fator_exp",
  "numero", YY_NULLPTR
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
     295,   296,   297,   298,   299,   300
};
# endif

#define YYPACT_NINF -166

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-166)))

#define YYTABLE_NINF -107

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      20,    56,     6,   104,  -166,  -166,    96,    86,  -166,  -166,
    -166,    96,     7,    23,    40,   113,    96,  -166,  -166,    96,
      39,    23,    65,    89,  -166,  -166,  -166,   119,     5,    13,
     120,   113,  -166,    96,    23,    98,    96,  -166,  -166,  -166,
    -166,    79,  -166,   105,     5,  -166,  -166,  -166,  -166,  -166,
     107,   130,    41,  -166,   106,    28,    14,  -166,  -166,  -166,
      23,  -166,  -166,    23,    47,   108,    26,  -166,  -166,   133,
    -166,   109,   109,   110,   100,   101,   114,   116,  -166,  -166,
    -166,     5,   106,    13,  -166,   121,   118,   122,   111,   120,
    -166,  -166,  -166,  -166,   123,  -166,   125,  -166,    75,     5,
    -166,    13,  -166,  -166,   100,  -166,  -166,  -166,  -166,    80,
      90,    10,   102,  -166,   100,    19,  -166,     5,  -166,  -166,
    -166,  -166,    85,  -166,   124,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,   112,   126,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   100,  -166,   100,  -166,   103,  -166,  -166,
    -166,  -166,   100,   128,  -166,  -166,   131,    11,  -166,  -166,
    -166,  -166,    76,   113,    13,  -166,  -166,    83,    22,    22,
    -166,    12,  -166,  -166,  -166,  -166,    10,   102,   100,   131,
      19,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,   117,
     127,    27,    77,  -166,  -166,   132,   132,  -166,  -166,   103,
    -166,   129,  -166,  -166,     0,     5,    85,  -166,  -166,  -166,
     113,  -166,    22,    22,  -166,  -166,  -166,  -166,   100,  -166,
    -166,   115,  -166,   113,  -166,  -166,  -166,    22,   144,    78,
     134,    78,  -166,   135,  -166,  -166,    22,  -166,  -166,  -166,
    -166,  -166,    13,  -166,  -166,  -166
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     5,     0,     0,     3,     7,    24,    12,     8,     2,
       1,    24,     0,     0,     0,    37,    24,    10,    14,    24,
       0,     0,     0,     0,    18,    17,     6,     0,     0,     0,
      53,    37,    23,    24,     0,     0,    24,     9,     4,    27,
      29,     0,    20,     0,     0,    95,    97,   102,   104,    99,
     108,     0,     0,    47,    50,     0,     0,    22,    51,    36,
       0,    13,    16,     0,     0,     0,     0,    26,    92,     0,
     110,     0,     0,     0,   132,     0,     0,    80,    21,    19,
      90,     0,    50,     0,    46,     0,     0,     0,     0,    53,
      11,    15,   148,   149,     0,    31,     0,    30,     0,     0,
     116,     0,    96,    98,   132,   103,   130,   131,   105,     0,
       0,     0,   134,   100,   132,     0,   109,     0,    89,    48,
      49,    40,     0,    57,    64,    52,    28,    33,    35,    34,
      32,    93,     0,     0,   114,   112,   128,   122,   123,   124,
     125,   126,   127,   132,   145,   132,   142,   139,   143,   135,
     136,   129,   132,     0,   107,    82,    85,     0,    91,    45,
      43,    44,     0,    37,     0,    55,   111,     0,     0,     0,
     121,     0,   144,   140,   141,   137,     0,   134,   132,    85,
       0,    81,    79,    78,    42,    41,    39,    77,    58,     0,
       0,     0,     0,   119,   117,    88,    88,   147,   146,   139,
     133,     0,    83,    84,     0,     0,     0,    63,    62,    60,
      37,    56,     0,     0,    86,   115,   113,   138,   132,    70,
      72,     0,    65,    37,    59,   120,   118,     0,     0,     0,
       0,     0,    69,    68,    61,    87,     0,    76,    75,    71,
      74,    73,     0,    66,   101,    67
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,  -166,     4,
      64,  -166,  -166,   148,  -166,  -166,  -166,  -166,  -166,  -166,
      67,  -166,  -166,  -166,   -66,   -27,  -166,    69,    81,  -166,
    -166,  -166,  -166,  -166,  -166,  -166,  -166,   -75,  -166,  -166,
    -122,  -166,  -166,   -63,  -166,  -166,   -11,  -166,    -8,   -24,
    -166,   -44,  -166,  -166,  -165,  -166,  -166,  -166,  -166,  -166,
    -166,  -166,  -166,   136,  -166,  -166,  -166,  -166,  -166,  -166,
    -166,    70,  -166,  -113,  -166,    -4,  -166,    24,   -22,  -166,
      -1,  -166,    59
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,    11,     6,     9,    20,    33,    19,    37,    26,
      13,    79,    14,    15,    16,    23,    64,    67,    97,   130,
     187,    31,    86,   186,   162,   190,    82,    84,    57,    89,
      58,    88,   192,   163,   211,   223,   165,   191,   233,   243,
     188,   229,   232,   239,   189,   116,   157,   179,   181,   215,
     227,    51,   117,    99,    52,    71,    72,    75,   153,    73,
      74,    76,    77,   102,   108,   169,   168,    70,   105,   213,
     212,   109,   143,   110,   111,   151,   152,   112,   175,   176,
     147,   172,   148
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      69,   154,    55,   195,   196,   219,    43,     7,    22,    44,
     -94,   144,   182,   197,    53,    87,    45,    46,    47,    48,
     155,     1,    49,     2,    24,    38,    44,    96,   207,    85,
     170,   220,   171,    45,    46,    47,    48,   118,    61,    49,
      35,    27,    80,   145,    28,   183,   198,   225,   226,    50,
       8,   -25,    92,    93,   146,   131,   120,    54,   -54,    25,
     -38,   208,   235,   156,    90,   201,    50,    91,    92,    93,
      36,   244,    81,   158,   132,    21,   128,   184,   209,   237,
      65,   134,    30,    34,   193,    39,   159,     4,   224,    92,
      93,   136,     5,   160,   161,   135,    40,    60,    59,    66,
      63,   234,   194,    12,    10,   228,   129,   185,   210,   238,
     137,   138,   139,   140,   141,   142,   230,    17,   204,    29,
     231,   205,    18,    94,    42,    98,   106,   107,   149,   150,
      56,   173,   174,    41,    62,    78,    68,  -106,   100,    95,
     222,    83,   101,   104,   114,   113,   166,   218,   214,   115,
     122,   119,   121,   123,   126,   124,   127,   164,   178,   206,
     167,   221,   180,   236,    32,   240,   242,   245,   241,   203,
     125,   202,   216,   200,   133,   199,   177,   217,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,   103
};

static const yytype_int16 yycheck[] =
{
      44,   114,    29,   168,   169,     5,     1,     1,     1,     4,
       5,     1,     1,     1,     1,     1,    11,    12,    13,    14,
       1,     1,    17,     3,     1,    21,     4,     1,     1,     1,
     143,    31,   145,    11,    12,    13,    14,    81,    34,    17,
       1,     1,     1,    33,     4,    34,    34,   212,   213,    44,
      44,    44,    42,    43,    44,    99,    83,    44,    44,    36,
      32,    34,   227,    44,    60,   178,    44,    63,    42,    43,
      31,   236,    31,   117,   101,    11,     1,     1,     1,     1,
       1,     1,    15,    19,     1,    20,     1,    31,   210,    42,
      43,     1,    36,     8,     9,    15,    31,    33,    31,    20,
      36,   223,    19,     7,     0,   218,    31,    31,    31,    31,
      20,    21,    22,    23,    24,    25,     1,    31,     1,     6,
       5,     4,    36,    64,     5,    66,    26,    27,    26,    27,
      10,    28,    29,    44,    36,     5,    31,    30,     5,    31,
     206,    35,    33,    33,    30,    44,    34,    18,    16,    33,
      32,    82,    31,    31,    31,    44,    31,    33,    30,    32,
      34,   205,    31,    19,    16,    31,    31,   242,   231,   180,
      89,   179,   196,   177,   104,   176,   152,   199,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    72
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
      44,    97,   100,     1,    44,    71,    10,    74,    76,    66,
      56,    55,    36,    56,    62,     1,    20,    63,    31,    97,
     113,   101,   102,   105,   106,   103,   107,   108,     5,    57,
       1,    31,    72,    35,    73,     1,    68,     1,    77,    75,
      55,    55,    42,    43,   128,    31,     1,    64,   128,    99,
       5,    33,   109,   109,    33,   114,    26,    27,   110,   117,
     119,   120,   123,    44,    30,    33,    91,    98,    97,    73,
      71,    31,    32,    31,    44,    74,    31,    31,     1,    31,
      65,    97,    71,   117,     1,    15,     1,    20,    21,    22,
      23,    24,    25,   118,     1,    33,    44,   126,   128,    26,
      27,   121,   122,   104,   119,     1,    44,    92,    97,     1,
       8,     9,    70,    79,    33,    82,    34,    34,   112,   111,
     119,   119,   127,    28,    29,   124,   125,   123,    30,    93,
      31,    94,     1,    34,     1,    31,    69,    66,    86,    90,
      71,    83,    78,     1,    19,   100,   100,     1,    34,   126,
     121,   119,    94,    92,     1,     4,    32,     1,    34,     1,
      31,    80,   116,   115,    16,    95,    95,   124,    18,     5,
      31,    97,    70,    81,    86,   100,   100,    96,   119,    87,
       1,     5,    88,    84,    86,   100,    19,     1,    31,    89,
      31,    89,    31,    85,   100,    83
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    46,    47,    48,    47,    49,    47,    47,    51,    50,
      52,    50,    53,    50,    50,    54,    54,    55,    55,    56,
      56,    57,    58,    59,    59,    61,    60,    62,    60,    60,
      63,    63,    64,    64,    65,    65,    66,    66,    68,    67,
      67,    69,    69,    70,    70,    70,    71,    72,    71,    73,
      73,    75,    74,    74,    77,    78,    76,    79,    76,    80,
      81,    80,    82,    82,    82,    84,    83,    85,    85,    86,
      87,    86,    86,    88,    88,    89,    89,    90,    91,    91,
      91,    92,    93,    92,    94,    94,    96,    95,    95,    97,
      98,    97,    99,    97,    97,   101,   100,   102,   100,   103,
     104,   100,   105,   100,   106,   100,   107,   100,   108,   100,
     100,   109,   111,   110,   112,   110,   113,   115,   114,   116,
     114,   117,   118,   118,   118,   118,   118,   118,   118,   119,
     120,   120,   120,   121,   121,   122,   122,   123,   124,   124,
     125,   125,   126,   126,   126,   126,   127,   127,   128,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     0,     5,     0,     4,     2,     0,     3,
       0,     5,     0,     4,     2,     3,     2,     1,     1,     4,
       3,     1,     3,     2,     0,     0,     4,     0,     6,     3,
       2,     2,     2,     2,     1,     1,     2,     0,     0,     6,
       4,     1,     1,     1,     1,     1,     2,     0,     3,     2,
       0,     0,     3,     0,     0,     0,     6,     0,     5,     2,
       0,     3,     3,     3,     0,     0,     5,     2,     0,     4,
       0,     5,     3,     2,     2,     1,     1,     1,     3,     3,
       0,     2,     0,     3,     2,     0,     0,     3,     0,     3,
       0,     4,     0,     4,     0,     0,     3,     0,     3,     0,
       0,    10,     0,     3,     0,     3,     0,     4,     0,     3,
       2,     3,     0,     5,     0,     5,     2,     0,     6,     0,
       6,     3,     1,     1,     1,     1,     1,     1,     1,     2,
       1,     1,     0,     3,     0,     1,     1,     3,     3,     0,
       1,     1,     1,     1,     2,     1,     2,     2,     1,     1
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
#line 78 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1493 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 79 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("program"); }
#line 1499 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 80 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("program");}
#line 1505 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 81 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("program");}
#line 1511 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 84 "arqyacc.y" /* yacc.c:1646  */
    {insereProgram ((yyvsp[0]));}
#line 1517 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 84 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1523 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 85 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("id");}
#line 1529 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 86 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("id"); }
#line 1535 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 87 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("id");}
#line 1541 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 90 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1547 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 91 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(";");}
#line 1553 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 94 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1559 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 95 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(".");}
#line 1565 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 99 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1571 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 100 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("begin"); }
#line 1577 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 103 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1583 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 107 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1589 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 111 "arqyacc.y" /* yacc.c:1646  */
    {
    int retorno;
    retorno = insereConst ((yyvsp[-1]), contexto);
    if(retorno==REDECLARACAO)
        yyerror2("Redeclaration of constants");
    else if(retorno ==CONFLITO)
        yyerror2("Conflicting types");
}
#line 1602 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 119 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1608 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 122 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1614 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 122 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1620 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 123 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("id"); }
#line 1626 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 124 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("id"); }
#line 1632 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 127 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1638 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 128 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("="); }
#line 1644 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 131 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1650 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 132 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("numero"); }
#line 1656 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 135 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1662 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 136 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(";"); }
#line 1668 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 140 "arqyacc.y" /* yacc.c:1646  */
    {
    int retorno;
    str=malloc(400 * sizeof(char));
    str=strtok(listavar,",");
    while(str!=NULL){
        cpystr=malloc(400 * sizeof(char));
        strcpy(cpystr,str);
        retorno = insereVar (cpystr, contexto);
        if(retorno==REDECLARACAO)
            yyerror2("Redeclaration of variables");
        else if(retorno ==CONFLITO)
            yyerror2("Conflicting types");
        else if(retorno == REDECLARACAO_PARAM)
        {
            sprintf(msg, "Variable %s already declared as a parameter",cpystr );
            yyerror2(msg);
        }       
        str=strtok(NULL,",");
    }
    listavar[0]='\0';
}
#line 1694 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 161 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1700 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 164 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1706 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 164 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1712 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 165 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(":"); }
#line 1718 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 168 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1724 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 169 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(";"); }
#line 1730 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 173 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1736 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 174 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1742 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 175 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("tipo"); }
#line 1748 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 179 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1754 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 180 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror("id"); }
#line 1760 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 180 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1766 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 184 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1772 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 185 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1778 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 189 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1784 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 190 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1790 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 193 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1796 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 193 "arqyacc.y" /* yacc.c:1646  */
    {contexto=1; if(insereProcedure ((yyvsp[-2]),contexto)!=OK) yyerror2("Redefinition of procedure"); lastprocedure=(yyvsp[-2]);}
#line 1802 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 194 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror("id"); }
#line 1808 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 197 "arqyacc.y" /* yacc.c:1646  */
    {contexto=0;removeLocalVars((yyvsp[0]));}
#line 1814 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 198 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror(";"); }
#line 1820 "y.tab.c" /* yacc.c:1646  */
    break;

  case 62:
#line 202 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1826 "y.tab.c" /* yacc.c:1646  */
    break;

  case 63:
#line 203 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror(")"); }
#line 1832 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 204 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1838 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 208 "arqyacc.y" /* yacc.c:1646  */
    {
        str=malloc(400 * sizeof(char));
        str=strtok(listavar,",");
        int ordem=1;
        while(str!=NULL){
            cpystr=malloc(400 * sizeof(char));
            strcpy(cpystr,str);
            ret=insereParam (cpystr, contexto, lastprocedure, ordem);
            if(ret == REDECLARACAO_PARAM)
            {
                sprintf(msg, "Parameter %s already declared",cpystr );
                yyerror2(msg);
            }
            str=strtok(NULL,",");
            ordem++;
        }
        listavar[0]='\0';
}
#line 1861 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 225 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1867 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 229 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1873 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 230 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1879 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 234 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1885 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 235 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("begin"); }
#line 1891 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 236 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("begin"); }
#line 1897 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 239 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1903 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 240 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("end"); }
#line 1909 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 244 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(";"); }
#line 1915 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 252 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1921 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 253 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(")"); }
#line 1927 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 254 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1933 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 258 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1939 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 259 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror("id"); }
#line 1945 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 259 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1951 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 263 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1957 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 264 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1963 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 268 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1969 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 269 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1975 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 274 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror(";"); }
#line 1981 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 275 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("cmd"); }
#line 1987 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 281 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1993 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 281 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 1999 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 282 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2005 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 282 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2011 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 283 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2017 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 283 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2023 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 283 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2029 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 284 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2035 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 284 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2041 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 285 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2047 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 286 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2053 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 286 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2059 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 287 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2065 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 287 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2071 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 288 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2077 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 291 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2083 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 294 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2089 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 294 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2095 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 295 "arqyacc.y" /* yacc.c:1646  */
    {yyerror("then");}
#line 2101 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 295 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2107 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 301 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2113 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 301 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2119 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 302 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("do");}
#line 2125 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 306 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2131 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 310 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2137 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 311 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2143 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 312 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2149 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 313 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2155 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 314 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2161 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 315 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2167 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 316 "arqyacc.y" /* yacc.c:1646  */
    { yyerror("sinal de relacao"); }
#line 2173 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 320 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2179 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 324 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2185 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 325 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2191 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 326 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2197 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 330 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2203 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 331 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2209 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 335 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2215 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 336 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2221 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 340 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2227 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 344 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2233 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 345 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2239 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 349 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2245 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 350 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2251 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 354 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2257 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 355 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2263 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 356 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2269 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 357 "arqyacc.y" /* yacc.c:1646  */
    { yyclearin; yyerror("sinal de relacao"); }
#line 2275 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 361 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2281 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 362 "arqyacc.y" /* yacc.c:1646  */
    { yyerror(")"); }
#line 2287 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 366 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2293 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 367 "arqyacc.y" /* yacc.c:1646  */
    {}
#line 2299 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2303 "y.tab.c" /* yacc.c:1646  */
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
#line 370 "arqyacc.y" /* yacc.c:1906  */

int main(int argc, char *argv[])
{
    initTable();
    alocaTabelaSimbolos();
    yyparse();
    printf("\nAnalise lexica, sintatica e semantica terminadas com %d erros\n", numErros);
    printf("\nTabela de simbolos:\n");
    printTabela();
    return 0;

}
/*
Mensagem de erro que é mostrada quando ocorre um erro sintático
Modo Pânico
*/
void yyerror(const char* msg) 
{
    if(strcmp(msg, "syntax error"))
    {
        printf("Erro sintatico: Linha %d. Era esperado %s, encontrado: %s\n", yylineno, msg, yytext);    
    }
    numErros++;
}

void yyerror2(const char* msg) 
{
    if(strcmp(msg, "syntax error"))
    {
        printf("Erro semantico: Linha %d. Era esperado %s, encontrado: %s\n", yylineno, msg, yytext);    
    }
    numErros++;
}
