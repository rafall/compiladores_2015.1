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

#line 4 "arqyacc.y"
    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    void yyerror(char *);

#line 25 "y.tab.c"

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

#define INTEIROGRANDEDEMAIS 257
#define NUMERO_INT 258
#define NUMERO_REAL 259
#define IDGRANDEDEMAIS 260
#define ID 261
#define PONTO 262
#define PONTOEVIRGULA 263
#define ATRIBUICAO 264
#define DOISPONTOS 265
#define APARENTESES 266
#define FPARENTESES 267
#define VIRGULA 268
#define MAIORIGUAL 269
#define MENORIGUAL 270
#define DIFERENTE 271
#define MENOR 272
#define MAIOR 273
#define IGUAL 274
#define SOMA 275
#define SUBTRACAO 276
#define MULTIPLICACAO 277
#define DIVISAO 278
#define NUMEROMALFORMADO 279
#define NUMEROMALFORMADO2 280
#define NUMEROMALFORMADO3 281
#define CARACTERINVALIDO 282
#define BEGIN 283
#define CONST 284
#define DO 285
#define ELSE 286
#define END 287
#define FOR 288
#define IF 289
#define INTEGER 290
#define PROCEDURE 291
#define PROGRAM 292
#define READ 293
#define REAL 294
#define THEN 295
#define TO 296
#define VAR 297
#define WHILE 298
#define WRITE 299
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    1,    2,    4,    4,    5,    5,    9,    9,    8,
   10,   10,    6,    6,   11,   11,   13,   14,   14,   12,
   15,   16,   16,   17,   18,   18,   19,   19,    3,    3,
   20,   20,   20,   20,   20,   20,   20,   20,   21,   23,
   23,   23,   23,   23,   23,   22,   26,   26,   26,   26,
   25,   25,   27,   27,   24,   29,   29,   30,   30,   28,
   28,   28,    7,    7,
};
static const short yylen[] = {                            2,
    5,    4,    3,    6,    0,    6,    0,    1,    1,    2,
    2,    0,    6,    0,    3,    0,    4,    2,    0,    5,
    1,    3,    0,    2,    2,    0,    2,    0,    3,    0,
    4,    4,    8,    6,    5,    3,    2,    3,    3,    1,
    1,    1,    1,    1,    1,    2,    0,    1,    1,    0,
    3,    0,    1,    1,    3,    3,    0,    1,    1,    1,
    1,    3,    1,    1,
};
static const short yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    1,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    3,   63,   64,    0,
    0,    0,   37,    0,    0,   48,   49,    0,    0,    0,
    0,    0,    0,    0,    2,    0,    0,   10,    0,    0,
    0,    0,    0,   36,   38,    0,    0,   40,   41,   42,
   43,   44,   45,    0,   53,   54,   46,    0,   60,    0,
   61,    0,    0,    0,    0,   29,   11,    9,    8,    0,
    0,    0,    4,    0,   24,   22,    0,    0,   39,    0,
    0,   58,   59,   55,    0,   31,    0,   32,    0,    0,
    0,    0,   25,    0,    0,   35,   51,   62,    0,    0,
    6,    0,   15,   21,    0,    0,    0,   27,   56,   34,
    0,   13,    0,    0,    0,   17,    0,   33,   18,    0,
   20,
};
static const short yydgoto[] = {                          2,
    6,    7,   22,    8,   13,   27,   71,  100,   80,   48,
   82,  115,  101,  126,  116,   33,   53,   85,  106,   23,
   38,   39,   64,   40,   67,   41,   68,   72,   94,   95,
};
static const short yysindex[] = {                      -250,
 -223,    0,  -16, -236, -212,   14, -222, -233,    4,    0,
 -248, -195, -224, -227,  -37, -248, -193,   10,   29,   30,
   31, -215,   16,   32,   19, -188,    0,    0,    0,   20,
 -187,   10,    0, -209, -220,    0,    0, -214,  -54,   11,
  -29, -195,   10, -195,    0, -248, -195,    0, -278,   42,
 -236,   24,   43,    0,    0, -173, -248,    0,    0,    0,
    0,    0,    0,   10,    0,    0,    0,   10,    0,   10,
    0,  -14,   45,   46,   47,    0,    0,    0,    0,   33,
 -195,   34,    0, -187,    0,    0, -207, -196,    0,   11,
   50,    0,    0,    0,  -29,    0, -191,    0, -233,   37,
   55, -233,    0, -161, -248,    0,    0,    0,  -14, -248,
    0, -278,    0,    0, -224, -185, -186,    0,    0,    0,
   41,    0, -248, -236, -195,    0, -184,    0,    0,   48,
    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0, -261,    0,    0,    0, -254,    0,    0,
 -183,    0, -182,    0,  -58, -183,    0,  -25,    0,    0,
    0,    0,    0,  -24,    0,    0,    0,    0,    0,    0,
    0,  -25,    0,    0,    0,    0,    0,    0,    0,  -36,
    0,    0,  -25,    0,    0, -183,    0,    0,    0,   49,
 -261,   61,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,  -25,    0,    0,    0,  -25,    0,  -25,
    0,  -41,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   51,    0,  -36,
    0,    0,    0,    0,    0,    0,    0,    0, -254,    0,
    0, -178,    0,    0,    0,    0,    0,    0,  -41,    0,
    0,    0,    0,    0, -182,    0,    0,    0,    0,    0,
   65,    0, -183, -261,    0,    0,    0,    0,    0,    0,
    0,
};
static const short yygindex[] = {                         0,
  -15,    0,   -7,   60,  -55,   -3,   99,   15,    2,    0,
    0,    0,  -10,    0,    0,    0,   35,    0,    0,  -47,
   74,  -18,    0,   52,   28,    0,    0,   26,   13,    0,
};
#define YYTABLESIZE 267
static const short yytable[] = {                         57,
   23,   57,   31,   57,   52,   63,   58,   62,   34,   88,
   70,   78,   15,   54,   47,   79,   12,   57,   57,   57,
   57,    5,   52,   52,   52,   52,   25,   92,    7,    5,
   28,   29,   93,   12,   16,    5,    7,    3,   76,   17,
   18,    1,    4,  111,   19,   89,  114,    5,    9,   20,
   21,   91,   36,   65,   37,   66,   73,  118,   75,   10,
   11,   77,  120,   12,   14,   24,   26,   35,   42,   43,
   44,   45,   50,   52,   46,   47,   49,   55,   51,   56,
   57,   81,   84,   86,   87,   96,   97,   98,  104,  105,
  108,   99,  102,  110,  112,  113,  117,  123,  124,  125,
   14,   26,  130,   30,    7,   19,  131,   16,  128,   28,
   83,  122,   30,  121,  129,  127,   74,  107,  103,   90,
  109,  119,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,   23,   28,   29,
    0,   69,   47,   47,    0,   47,    0,    0,    0,    0,
    0,    0,    0,    0,   57,    0,   59,   60,   61,   52,
    0,    0,    0,   57,    0,    0,    0,    0,   52,   57,
   57,   57,   32,    0,   52,   52,   52,
};
static const short yycheck[] = {                         41,
   59,   43,   40,   45,   41,   60,   61,   62,   16,   57,
   40,  290,  261,   32,   40,  294,   41,   59,   60,   61,
   62,  283,   59,   60,   61,   62,   12,   42,  283,  291,
  258,  259,   47,   58,  283,  297,  291,  261,   46,  288,
  289,  292,   59,   99,  293,   64,  102,  284,  261,  298,
  299,   70,   43,   43,   45,   45,   42,  105,   44,   46,
  283,   47,  110,  297,   61,  261,  291,  261,   40,   40,
   40,  287,  261,  261,   59,   44,   58,  287,   59,  300,
  295,   40,   59,   41,  258,   41,   41,   41,  296,  286,
   41,   59,   59,  285,   58,   41,  258,  283,  285,   59,
  283,   41,  287,  287,  283,   41,   59,   59,  124,   59,
   51,  115,   14,  112,  125,  123,   43,   90,   84,   68,
   95,  109,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,  286,  258,  259,
   -1,  261,  258,  259,   -1,  261,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,  286,   -1,  301,  302,  303,  286,
   -1,   -1,   -1,  295,   -1,   -1,   -1,   -1,  295,  301,
  302,  303,  300,   -1,  301,  302,  303,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 303
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
0,0,0,0,0,0,0,0,0,"INTEIROGRANDEDEMAIS","NUMERO_INT","NUMERO_REAL",
"IDGRANDEDEMAIS","ID","PONTO","PONTOEVIRGULA","ATRIBUICAO","DOISPONTOS",
"APARENTESES","FPARENTESES","VIRGULA","MAIORIGUAL","MENORIGUAL","DIFERENTE",
"MENOR","MAIOR","IGUAL","SOMA","SUBTRACAO","MULTIPLICACAO","DIVISAO",
"NUMEROMALFORMADO","NUMEROMALFORMADO2","NUMEROMALFORMADO3","CARACTERINVALIDO",
"BEGIN","CONST","DO","ELSE","END","FOR","IF","INTEGER","PROCEDURE","PROGRAM",
"READ","REAL","THEN","TO","VAR","WHILE","WRITE","\":=\"","\"<>\"","\">=\"",
"\"<=\"","illegal-symbol",
};
static const char *yyrule[] = {
"$accept : programa",
"programa : PROGRAM ID ';' corpo '.'",
"corpo : dc BEGIN comandos END",
"dc : dc_c dc_v dc_p",
"dc_c : CONST ID '=' numero ';' dc_c",
"dc_c :",
"dc_v : VAR variaveis ':' tipo_var ';' dc_v",
"dc_v :",
"tipo_var : REAL",
"tipo_var : INTEGER",
"variaveis : ID mais_var",
"mais_var : ',' variaveis",
"mais_var :",
"dc_p : PROCEDURE ID parametros ';' corpo_p dc_p",
"dc_p :",
"parametros : '(' lista_par ')'",
"parametros :",
"lista_par : variaveis ':' tipo_var mais_par",
"mais_par : ';' lista_par",
"mais_par :",
"corpo_p : dc_loc BEGIN comandos END ';'",
"dc_loc : dc_v",
"lista_arg : '(' argumentos ')'",
"lista_arg :",
"argumentos : ID mais_ident",
"mais_ident : ';' argumentos",
"mais_ident :",
"pfalsa : ELSE cmd",
"pfalsa :",
"comandos : cmd ';' comandos",
"comandos :",
"cmd : READ '(' variaveis ')'",
"cmd : WRITE '(' variaveis ')'",
"cmd : FOR ID \":=\" NUMERO_INT TO NUMERO_INT DO corpo",
"cmd : WHILE '(' condicao ')' DO cmd",
"cmd : IF condicao THEN cmd pfalsa",
"cmd : ID \":=\" expressao",
"cmd : ID lista_arg",
"cmd : BEGIN comandos END",
"condicao : expressao relacao expressao",
"relacao : '='",
"relacao : \"<>\"",
"relacao : \">=\"",
"relacao : \"<=\"",
"relacao : '>'",
"relacao : '<'",
"expressao : termo outros_termos",
"op_un :",
"op_un : '+'",
"op_un : '-'",
"op_un :",
"outros_termos : op_ad termo outros_termos",
"outros_termos :",
"op_ad : '+'",
"op_ad : '-'",
"termo : op_un fator mais_fatores",
"mais_fatores : op_mul fator mais_fatores",
"mais_fatores :",
"op_mul : '*'",
"op_mul : '/'",
"fator : ID",
"fator : numero",
"fator : '(' expressao ')'",
"numero : NUMERO_INT",
"numero : NUMERO_REAL",

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
#line 185 "arqyacc.y"

// Subrotinas

int main (int argc, char** argv){
	return yyparse();
}
#line 375 "y.tab.c"

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
