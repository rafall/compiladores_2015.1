%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "hashmap.h"
    int yylex(void);
    int numErros;
    extern char *yytext;
    extern int yylineno;
    void yyerror(const char* );
%}

%start programa
%token T_PROGRAM        "program"
%token T_BEGIN          "begin"
%token T_END            "end"
%token T_VAR            "var"
%token T_CONST          "const"
%token T_REAL           "real"
%token T_INTEGER        "integer"
%token T_PROCEDURE      "procedure"
%token T_READ           "read"
%token T_WRITE          "write"
%token T_WHILE          "while"
%token T_IF             "if"
%token T_THEN           "then"
%token T_ELSE           "else"
%token T_FOR            "for"
%token T_TO             "to"
%token T_DO             "do"
%token T_IGUAL          "="
%token T_DIFERENTE      "<>"
%token T_MAIORIGUAL     ">="
%token T_MENORIGUAL     "<="
%token T_MAIOR          ">"
%token T_MENOR          "<"
%token T_SOMA           "+"
%token T_SUBTRACAO      "-"
%token T_MULTIPLICACAO  "*"         
%token T_DIVISAO        "/"
%token T_ATRIBUICAO     ":="
%token T_PONTOEVIRGULA  ";"
%token T_DOISPONTOS     ":"
%token T_APARENTESES    "("
%token T_FPARENTESES    ")"
%token T_VIRGULA        ","
%token T_PONTO          "."



/* ERROS */
%token T_INTEIROGRANDEDEMAIS
%token T_IDGRANDEDEMAIS
%token T_NUMEROMALFORMADO
%token T_CARACTERINVALIDO
%token T_COMENTARIOINACABADO

/* Numeros */
%token T_NUMERO_INT
%token T_NUMERO_REAL
%token T_ID
%token PALAVRARESERVADA

%%

/* Regra 1 <programa> ::= program ident ; <corpo> . */
programa : T_PROGRAM programa1 {}
    | error T_PONTOEVIRGULA { yyerror("program"); } corpo programa3
    | error { yyerror("program");} corpo programa3
    | error T_PONTO { yyerror("program");}
    ;

programa1 : T_ID {} programa2 {}
    | error T_PONTOEVIRGULA { yyerror("id");} corpo programa3
    | error { yyerror("id"); } corpo programa3
    | error T_PONTO { yyerror("id");}
    ;
    
programa2 : T_PONTOEVIRGULA corpo programa3 {}
    | error T_PONTO { yyerror(";");}
    ;
    
programa3 : T_PONTO {}
    | error { yyerror(".");}
    ;

/* Regra 2 <corpo> ::= <dc> begin <comandos> end */
corpo : dc T_BEGIN comandos corpo1 {}
    | dc error T_END { yyerror("begin"); }
    ;
    
corpo1 : T_END {}
    ;
    
/* Regra 3 <dc> ::= <dc_c> <dc_v> <dc_p> */
dc : dc_c dc_v dc_p {}
    ;

/* Regra 4 <dc_c> ::= const ident = <numero> ; <dc_c> | lambda */
dc_c : dc_c0 dc_c {}
    |
    ;

dc_c0 : T_CONST {} T_ID dc_c1 {}
    | T_CONST error T_IGUAL { yyerror("id"); } numero T_PONTOEVIRGULA
    | T_CONST error T_PONTOEVIRGULA { yyerror("id"); }
    ;

dc_c1 : T_IGUAL dc_c2 {}
    | error T_PONTOEVIRGULA { yyerror("="); }
    ;
    
dc_c2 : numero dc_c3 {}
    | error T_PONTOEVIRGULA { yyerror("numero"); }
    ;
    
dc_c3 : T_PONTOEVIRGULA {}
    | error { yyerror(";"); }
    ;

/* Regra 5 <dc_v> ::= var <variaveis> : <tipo_var> ; <dc_v> | lambda */
dc_v : dc_v0 dc_v {}
    |
    ;

dc_v0 : T_VAR variaveis {} T_DOISPONTOS tipo_var dc_v1 {}
    | T_VAR variaveis error T_PONTOEVIRGULA { yyerror(":"); }
    ;
    
dc_v1 : T_PONTOEVIRGULA {}
    | error { yyerror(";"); }
    ;

/* Regra 6 <tipo_var> ::= real | integer */
tipo_var : T_REAL {}
    | T_INTEGER {}
    | error { yyerror("tipo"); }
    ;

/* Regra 7 <variaveis> ::= ident <mais_var> */
variaveis : T_ID mais_var {}
    | error { yyclearin; yyerror("id"); } mais_var {}
    ;

/* Regra 8 <mais_var> ::= , <variaveis> | lambda */
mais_var : T_VIRGULA variaveis {}
    | /*lambda*/ {}
    ;

/* Regra 9 <dc_p> ::= procedure ident <parametros> ; <corpo_p> <dc_p> | lambda */
dc_p : dc_p0 {} dc_p
    |
    ;

dc_p0 : T_PROCEDURE {} T_ID parametros {} dc_p1
    | T_PROCEDURE error T_PONTOEVIRGULA { yyclearin; yyerror("id"); } corpo_p
    ;
   
dc_p1 : T_PONTOEVIRGULA corpo_p {}
    | error { yyclearin; yyerror(";"); } corpo_p
    ; 

/* Regra 10 <parametros> ::= ( <lista_par> ) | lambda */
parametros : T_APARENTESES lista_par T_FPARENTESES {}
    | T_APARENTESES lista_par error { yyclearin; yyerror(")"); }
    | {}
    ;
    
/* Regra 11 <lista_par> ::= <variaveis> : <tipo_var> <mais_par> */
lista_par : variaveis T_DOISPONTOS tipo_var mais_par {}
    ;

/* Regra 12 <mais_par> ::= ; <lista_par> | lambda */
mais_par : T_PONTOEVIRGULA lista_par {}
    | {}
    ;

/* Regra 13 <corpo_p> ::= <dc_loc> begin <comandos> end ; */
corpo_p : dc_loc T_BEGIN comandos corpo_p1 {}
    | dc_loc error T_END { yyerror("begin"); } corpo_p2
    | dc_loc error T_PONTOEVIRGULA { yyerror("begin"); }
    ;
    
corpo_p1 : T_END corpo_p2 {}
    | error T_PONTOEVIRGULA { yyerror("end"); }
    ;
    
corpo_p2 : T_PONTOEVIRGULA
    | error { yyerror(";"); }
    ;
    
/* Regra 14 <dc_loc> ::= <dc_v> */
dc_loc : dc_v
    ;

/* Regra 15 <lista_arg> ::= ( <argumentos> ) | lambda */
lista_arg : T_APARENTESES argumentos T_FPARENTESES  {}
    | T_APARENTESES argumentos error { yyerror(")"); }
    | {}
    ;

/* Regra 16 <argumentos> ::= ident <mais_ident> */
argumentos : T_ID mais_ident {}
    | error { yyclearin; yyerror("id"); } mais_ident {}
    ;
    
/* Regra 17 <mais_ident> ::= ; <argumentos> | lambda */
mais_ident : T_PONTOEVIRGULA argumentos {}
    | {}
    ;
    
/* Regra 18 <pfalsa> ::= else <cmd> | lambda */
pfalsa : T_ELSE {} cmd
    | /* empty */ 
    ;

/* Regra 19 <comandos> ::= <cmd> ; <comandos> | lambda */
comandos : cmd T_PONTOEVIRGULA comandos
    | cmd error { yyclearin; yyerror(";"); } comandos
    | error T_PONTOEVIRGULA  { yyerror("cmd"); } comandos
    | /* empty */ 
    ;

/* Regra 20 <cmd> ::= read(<variaveis>) | write (<variaveis>) | while(<condicao>) do <cmd> |
| if <condicao> then <cmd> <pfalsa> | ident := <expressao> | ident <lista_arg> | begin <comandos> end | for <ATR> TO <expressao> do <cmd> */
cmd : T_READ {} cmd_param {}
    | T_WRITE {} cmd_param {}
    | T_FOR {} T_ID {} T_ATRIBUICAO expressao T_TO expressao T_DO cmd {}
    | T_WHILE {} cmd_while {}
    | T_IF {} cmd_if
    | T_ID {} T_ATRIBUICAO expressao {}
    | T_ID {} lista_arg {}
    | T_BEGIN cmd_begin {}
    ;

cmd_param : T_APARENTESES variaveis T_FPARENTESES {}
    ;

cmd_if : condicao T_THEN {} cmd pfalsa {}
    | condicao error {yyerror("then");} cmd pfalsa {}
    ;

cmd_begin : comandos T_END
    ;

cmd_while : T_APARENTESES condicao T_FPARENTESES T_DO {} cmd {}
    | T_APARENTESES condicao T_FPARENTESES error { yyerror("do");} cmd 
    ;

/* Regra 21 <condicao> ::= <expressao> <relacao> <expressao> */
condicao : expressao relacao expressao {}
    ;

/* Regra 22 <relacao> ::= = | <> | >= | <= | > | < */
relacao : T_IGUAL {}
    | T_DIFERENTE {}
    | T_MAIORIGUAL {}
    | T_MENORIGUAL {}
    | T_MAIOR {}
    | T_MENOR {}
    | error { yyerror("sinal de relacao"); }
    ;
    
/* Regra 23 <expressao> ::= <termo> <outros_termos> */
expressao : termo outros_termos {}
    ;

/* Regra 24 <op_un> ::= + | - | lambda */
op_un : T_SOMA {}
    | T_SUBTRACAO {}
    | {}
    ;

/* Regra 25 <outros_termos> ::= <op_ad> <termo> <outros_termos> | lambda */
outros_termos : op_ad termo outros_termos {}
    | {}
    ;

/* Regra 26 <op_ad> ::= + | - */
op_ad : T_SOMA {}
    | T_SUBTRACAO {}
    ;

/* Regra 27 <termo> ::= <op_un> <fator> <mais_fatores> */
termo : op_un fator mais_fatores {}
    ;
    
/* Regra 28 <mais_fatores> ::= <op_mul> <fator> <mais_fatores> | lambda */
mais_fatores : op_mul fator mais_fatores {}
    | {}
    ;    

/* Regra 29 <op_mul> ::= * | / */
op_mul : T_MULTIPLICACAO {}
    | T_DIVISAO {}
    ;

/* Regra 30 <fator> ::= ident | <numero> | ( <expressao> ) */
fator : T_ID {}
    | numero {}
    | T_APARENTESES fator_exp {}
    | error { yyclearin; yyerror("sinal de relacao"); }
    ;

fator_exp
    : expressao T_FPARENTESES {}
    | expressao error { yyerror(")"); }
    ;
    
/* Regra 31 <numero> ::= numero_int | numero_real */
numero : T_NUMERO_INT {}
    | T_NUMERO_REAL {}
    ;

%%
int main(int argc, char *argv[])
{
    initTable();
    yyparse();
    printf("\nAnalise lexica e sintatica terminadas com %d erros\n", numErros);
    return 0;

}

void yyerror(const char* msg) 
{
    if(strcmp(msg, "syntax error"))
    {
        printf("Erro sintatico: Linha %d. Era esperado %s, encontrado: %s\n", yylineno, msg, yytext);    
    }
    numErros++;
    
}