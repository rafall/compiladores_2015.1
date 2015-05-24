%{
    #include <stdio.h>
    #include <stdlib.h>
    #include "hashmap.h"
    int yylex(void);
    extern char *yytext;
    void yyerror(const char* msg) {
      fprintf(stderr, "%s\n", msg);
   }
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
%token CARACTERINVALIDO

/* Numeros */
%token T_NUMERO_INT
%token T_NUMERO_REAL
%token T_ID
%token PALAVRARESERVADA

%%

programa :  T_PROGRAM T_ID T_PONTOEVIRGULA corpo T_PONTO { }
            ;

corpo:      dc T_BEGIN comandos T_END { }
            ;

dc:         dc_c dc_v dc_p { }
            ;

dc_c:       T_CONST T_ID T_IGUAL numero T_PONTOEVIRGULA dc_c {}
            | 
            ;

dc_v:       T_VAR variaveis T_DOISPONTOS tipo_var T_PONTOEVIRGULA dc_v
            |
            ;

tipo_var:   T_REAL
            | T_INTEGER
            ;

variaveis:  T_ID mais_var
            ;

mais_var:   T_VIRGULA variaveis
            |
            ;

dc_p:       T_PROCEDURE T_ID parametros T_PONTOEVIRGULA corpo_p dc_p
            |
            ;

parametros: T_APARENTESES lista_par T_FPARENTESES
            |
            ;

lista_par:  variaveis T_DOISPONTOS tipo_var mais_par
            ;

mais_par:   T_PONTOEVIRGULA lista_par
            |
            ;

corpo_p:    dc_loc T_BEGIN comandos T_END T_PONTOEVIRGULA
            ;

dc_loc:     dc_v
            ;

lista_arg:  T_APARENTESES argumentos T_FPARENTESES
            |
            ;

argumentos: T_ID mais_ident
            ;

mais_ident: T_PONTOEVIRGULA argumentos
            |
            ;

pfalsa:     T_ELSE cmd
            |
            ;

comandos:   cmd T_PONTOEVIRGULA comandos
            |
            ;

cmd:        T_READ cmdpar 
            | T_WRITE T_APARENTESES variaveis T_FPARENTESES
            | T_FOR T_ID T_ATRIBUICAO T_NUMERO_INT T_TO T_NUMERO_INT T_DO corpo
            | T_WHILE T_APARENTESES condicao T_FPARENTESES T_DO cmd
            | T_IF condicao T_THEN cmd pfalsa
            | T_ID T_ATRIBUICAO expressao
            | T_ID lista_arg
            | T_BEGIN comandos T_END
            ;

cmdpar:     T_APARENTESES variaveis T_FPARENTESES
            ;

condicao:   expressao relacao expressao
            ;

relacao:    T_IGUAL
            | T_DIFERENTE
            | T_MAIORIGUAL
            | T_MENORIGUAL
            | T_MAIOR
            | T_MENOR
            ;

expressao:  termo outros_termos
            ;

op_un:       T_SOMA
            | T_SUBTRACAO
            |
            ;

outros_termos:  op_ad termo outros_termos
                |
                ;

op_ad:      T_SOMA
            | T_SUBTRACAO
            ;

termo:      op_un fator mais_fatores
            ;

mais_fatores:   op_mul fator mais_fatores
                |
                ;

op_mul:     T_MULTIPLICACAO
            | T_DIVISAO
            ;

fator:      T_ID
            | numero
            | T_APARENTESES expressao T_FPARENTESES
            ;

numero:     T_NUMERO_INT
            | T_NUMERO_REAL
            ;


%%
int main(int argc, char *argv[])
{
    initTable();
    yyparse();

    return 0;

}