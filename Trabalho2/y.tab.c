#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20140101

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "arqyacc.y"
    #include <stdio.h>
    #include <stdlib.h>
    #include "hashmap.h"
    int yylex(void);
    extern char *yytext;
    void yyerror(const char* msg) {
      fprintf(stderr, "%s\n", msg);
   }
#line 28 "y.tab.c"

#ifndef YYSTYPE
typedef int YYSTYPE;
#endif

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define T_PROGRAM 257
#define program 258
#define T_BEGIN 259
#define begin 260
#define T_END 261
#define end 262
#define T_VAR 263
#define var 264
#define T_CONST 265
#define const 266
#define T_REAL 267
#define real 268
#define T_INTEGER 269
#define integer 270
#define T_PROCEDURE 271
#define procedure 272
#define T_READ 273
#define read 274
#define T_WRITE 275
#define write 276
#define T_WHILE 277
#define while 278
#define T_IF 279
#define if 280
#define T_THEN 281
#define then 282
#define T_ELSE 283
#define else 284
#define T_FOR 285
#define for 286
#define T_TO 287
#define to 288
#define T_DO 289
#define do 290
#define T_IGUAL 291
#define T_DIFERENTE 292
#define T_MAIORIGUAL 294
#define T_MENORIGUAL 296
#define T_MAIOR 298
#define T_MENOR 299
#define T_SOMA 300
#define T_SUBTRACAO 301
#define T_MULTIPLICACAO 302
#define T_DIVISAO 303
#define T_ATRIBUICAO 304
#define T_PONTOEVIRGULA 306
#define T_DOISPONTOS 307
#define T_APARENTESES 308
#define T_FPARENTESES 309
#define T_VIRGULA 310
#define T_PONTO 311
#define T_INTEIROGRANDEDEMAIS 312
#define T_IDGRANDEDEMAIS 313
#define T_NUMEROMALFORMADO 314
#define CARACTERINVALIDO 315
#define T_NUMERO_INT 316
#define T_NUMERO_REAL 317
#define T_ID 318
#define PALAVRARESERVADA 319
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    4,    4,    5,    5,    9,    9,    8,
   10,   10,    6,    6,   11,   11,   13,   14,   14,   12,
   15,   16,   16,   17,   18,   18,   19,   19,    3,    3,
   20,   20,   20,   20,   20,   20,   20,   20,   21,   22,
   24,   24,   24,   24,   24,   24,   23,   27,   27,   27,
   26,   26,   28,   28,   25,   30,   30,   31,   31,   29,
   29,   29,    7,    7,
};
static const short yylen[] = {                            2,
    5,    4,    3,    6,    0,    6,    0,    1,    1,    2,
    2,    0,    6,    0,    3,    0,    4,    2,    0,    5,
    1,    3,    0,    2,    2,    0,    2,    0,    3,    0,
    2,    4,    8,    6,    5,    3,    2,    3,    3,    3,
    1,    1,    1,    1,    1,    1,    2,    1,    1,    0,
    3,    0,    1,    1,    3,    3,    0,    1,    1,    1,
    1,    3,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    3,   63,   64,    0,
    0,    0,   31,    0,    0,   48,   49,    0,    0,    0,
    0,    0,    0,    0,   37,    2,    0,    0,   10,    0,
    0,    0,   38,    0,    0,    0,    0,   41,   42,   43,
   44,   45,   46,    0,   53,   54,   47,    0,    0,   60,
   61,    0,    0,   36,    0,    0,   29,   11,    8,    9,
    0,    0,    0,    4,   39,   32,    0,    0,   40,    0,
    0,   58,   59,   55,    0,    0,    0,   24,   22,    0,
    0,    0,    0,    0,    0,   35,   51,   62,    0,    0,
   25,    6,    0,   15,   21,    0,    0,   34,   27,   56,
    0,    0,   13,    0,    0,    0,   17,    0,   33,   18,
    0,   20,
};
static const short yydgoto[] = {                          2,
    6,    7,   22,    8,   13,   27,   71,  101,   81,   49,
   83,  116,  102,  127,  117,   45,   76,   98,  106,   23,
   33,   38,   39,   64,   40,   67,   41,   68,   72,   94,
   95,
};
static const short yysindex[] = {                      -251,
 -294,    0, -272, -224, -259, -241, -178, -180, -205,    0,
 -258, -231, -183, -304, -258, -219, -218, -217, -256, -226,
 -299, -168, -212, -215, -211, -221,    0,    0,    0, -208,
 -162, -231,    0, -231, -256,    0,    0, -181, -214, -246,
 -260, -203, -256, -216,    0,    0, -258, -231,    0, -227,
 -204, -224,    0, -206, -202, -201, -258,    0,    0,    0,
    0,    0,    0, -256,    0,    0,    0, -256, -256,    0,
    0, -228, -210,    0, -196, -198,    0,    0,    0,    0,
 -194, -231, -193,    0,    0,    0, -184, -169,    0, -246,
 -192,    0,    0,    0, -260, -172, -216,    0,    0, -180,
 -191, -190, -180, -258, -258,    0,    0,    0, -228, -195,
    0,    0, -227,    0,    0, -183, -141,    0,    0,    0,
 -167, -186,    0, -258, -224, -231,    0, -138,    0,    0,
 -182,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0, -255,    0,    0,    0, -249,    0,    0,
 -136,    0, -133,    0, -136,    0,    0,    0, -245,    0,
 -276,    0,    0, -242,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0, -245,    0,    0,    0,    0, -230,
    0,    0, -245,    0,    0,    0, -136,    0,    0,    0,
 -179, -255,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -245,    0,    0,    0, -245, -245,    0,
    0, -263,    0,    0, -177,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0, -176,    0, -230,
    0,    0,    0,    0,    0,    0,    0,    0,    0, -249,
    0,    0, -131,    0,    0,    0,    0,    0, -263,    0,
    0,    0,    0,    0,    0, -133,    0,    0,    0,    0,
    0, -175,    0, -136, -255,    0,    0,    0,    0,    0,
    0,    0,
};
static const short yygindex[] = {                         0,
    4,    0,  -15,   79,  -89,   17,  121,   -9,   23,    0,
    0,    0,   11,    0,    0,    0,   41,    0,    0,  -55,
    0,  104,  -17,    0,   72,   51,    0,    0,   47,   34,
    0,
};
#define YYTABLESIZE 143
static const short yytable[] = {                         31,
   15,   88,   25,    5,   43,    1,   23,    5,   44,    7,
  112,   28,   29,  115,   16,    5,   17,   57,   18,   57,
   19,    7,   54,    3,   55,   74,   20,   57,   57,   23,
   57,   77,   57,    4,   57,   57,   57,   57,   78,   79,
    5,   80,   57,   36,   37,   57,   89,   69,  118,  119,
   52,   91,   52,   65,   66,   28,   29,   70,    9,   21,
   52,   52,   50,   52,   12,   52,   12,   52,   52,   10,
   50,   50,   50,   92,   93,   52,   58,   59,   52,   60,
   11,   61,   12,   62,   63,   14,   24,   26,   32,   34,
   35,   42,   46,   47,   48,   50,   51,   52,   53,   57,
   73,   75,   85,   82,  104,   96,   86,   87,  128,   97,
   99,  100,  103,  105,  110,  113,  108,  124,  114,  126,
  121,  125,  131,  132,   30,   14,   16,    7,  129,   28,
   84,   26,  123,   19,   30,  122,  130,  111,   56,   90,
  107,  109,  120,
};
static const short yycheck[] = {                         15,
  259,   57,   12,  259,  304,  257,  283,  263,  308,  259,
  100,  316,  317,  103,  273,  271,  275,  281,  277,  283,
  279,  271,   32,  318,   34,   43,  285,  291,  292,  306,
  294,   47,  296,  306,  298,  299,  300,  301,   48,  267,
  265,  269,  306,  300,  301,  309,   64,  308,  104,  105,
  281,   69,  283,  300,  301,  316,  317,  318,  318,  318,
  291,  292,  308,  294,  307,  296,  309,  298,  299,  311,
  316,  317,  318,  302,  303,  306,  291,  292,  309,  294,
  259,  296,  263,  298,  299,  291,  318,  271,  308,  308,
  308,  318,  261,  306,  310,  307,  318,  306,  261,  281,
  304,  318,  309,  308,  289,  316,  309,  309,  124,  306,
  309,  306,  306,  283,  287,  307,  309,  259,  309,  306,
  316,  289,  261,  306,  261,  259,  306,  259,  125,  306,
   52,  309,  116,  309,   14,  113,  126,   97,   35,   68,
   90,   95,  109,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 319
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? (YYMAXTOKEN + 1) : (a))
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'","'.'","'/'",0,0,0,0,0,0,0,0,0,0,
"':'","';'","'<'","'='","'>'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,"T_PROGRAM","\"program\"","T_BEGIN","\"begin\"","T_END",
"\"end\"","T_VAR","\"var\"","T_CONST","\"const\"","T_REAL","\"real\"",
"T_INTEGER","\"integer\"","T_PROCEDURE","\"procedure\"","T_READ","\"read\"",
"T_WRITE","\"write\"","T_WHILE","\"while\"","T_IF","\"if\"","T_THEN","\"then\"",
"T_ELSE","\"else\"","T_FOR","\"for\"","T_TO","\"to\"","T_DO","\"do\"","T_IGUAL",
"T_DIFERENTE","\"<>\"","T_MAIORIGUAL","\">=\"","T_MENORIGUAL","\"<=\"",
"T_MAIOR","T_MENOR","T_SOMA","T_SUBTRACAO","T_MULTIPLICACAO","T_DIVISAO",
"T_ATRIBUICAO","\":=\"","T_PONTOEVIRGULA","T_DOISPONTOS","T_APARENTESES",
"T_FPARENTESES","T_VIRGULA","T_PONTO","T_INTEIROGRANDEDEMAIS",
"T_IDGRANDEDEMAIS","T_NUMEROMALFORMADO","CARACTERINVALIDO","T_NUMERO_INT",
"T_NUMERO_REAL","T_ID","PALAVRARESERVADA","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : programa",
"programa : T_PROGRAM T_ID T_PONTOEVIRGULA corpo T_PONTO",
"corpo : dc T_BEGIN comandos T_END",
"dc : dc_c dc_v dc_p",
"dc_c : T_CONST T_ID T_IGUAL numero T_PONTOEVIRGULA dc_c",
"dc_c :",
"dc_v : T_VAR variaveis T_DOISPONTOS tipo_var T_PONTOEVIRGULA dc_v",
"dc_v :",
"tipo_var : T_REAL",
"tipo_var : T_INTEGER",
"variaveis : T_ID mais_var",
"mais_var : T_VIRGULA variaveis",
"mais_var :",
"dc_p : T_PROCEDURE T_ID parametros T_PONTOEVIRGULA corpo_p dc_p",
"dc_p :",
"parametros : T_APARENTESES lista_par T_FPARENTESES",
"parametros :",
"lista_par : variaveis T_DOISPONTOS tipo_var mais_par",
"mais_par : T_PONTOEVIRGULA lista_par",
"mais_par :",
"corpo_p : dc_loc T_BEGIN comandos T_END T_PONTOEVIRGULA",
"dc_loc : dc_v",
"lista_arg : T_APARENTESES argumentos T_FPARENTESES",
"lista_arg :",
"argumentos : T_ID mais_ident",
"mais_ident : T_PONTOEVIRGULA argumentos",
"mais_ident :",
"pfalsa : T_ELSE cmd",
"pfalsa :",
"comandos : cmd T_PONTOEVIRGULA comandos",
"comandos :",
"cmd : T_READ cmdpar",
"cmd : T_WRITE T_APARENTESES variaveis T_FPARENTESES",
"cmd : T_FOR T_ID T_ATRIBUICAO T_NUMERO_INT T_TO T_NUMERO_INT T_DO corpo",
"cmd : T_WHILE T_APARENTESES condicao T_FPARENTESES T_DO cmd",
"cmd : T_IF condicao T_THEN cmd pfalsa",
"cmd : T_ID T_ATRIBUICAO expressao",
"cmd : T_ID lista_arg",
"cmd : T_BEGIN comandos T_END",
"cmdpar : T_APARENTESES variaveis T_FPARENTESES",
"condicao : expressao relacao expressao",
"relacao : T_IGUAL",
"relacao : T_DIFERENTE",
"relacao : T_MAIORIGUAL",
"relacao : T_MENORIGUAL",
"relacao : T_MAIOR",
"relacao : T_MENOR",
"expressao : termo outros_termos",
"op_un : T_SOMA",
"op_un : T_SUBTRACAO",
"op_un :",
"outros_termos : op_ad termo outros_termos",
"outros_termos :",
"op_ad : T_SOMA",
"op_ad : T_SUBTRACAO",
"termo : op_un fator mais_fatores",
"mais_fatores : op_mul fator mais_fatores",
"mais_fatores :",
"op_mul : T_MULTIPLICACAO",
"op_mul : T_DIVISAO",
"fator : T_ID",
"fator : numero",
"fator : T_APARENTESES expressao T_FPARENTESES",
"numero : T_NUMERO_INT",
"numero : T_NUMERO_REAL",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 194 "arqyacc.y"
int main(int argc, char *argv[])
{
    initTable();
    yyparse();

    return 0;

}
#line 377 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 64 "arqyacc.y"
	{ }
break;
case 2:
#line 67 "arqyacc.y"
	{ }
break;
case 3:
#line 70 "arqyacc.y"
	{ }
break;
case 4:
#line 73 "arqyacc.y"
	{}
break;
#line 595 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
