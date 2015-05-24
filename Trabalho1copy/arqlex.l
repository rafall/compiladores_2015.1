%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "hashmap.h"
#include "y.tab.h"


int yylineno;

%}


%%

(-?[1-9][0-9]*){11,}                        {printf("Erro lexico: inteiro grande demais. Linha: %d\n", yylineno); return T_INTEIROGRANDEDEMAIS;}
-?[1-9][0-9]*                               return T_NUMERO_INT;
-?[0-9]+"."[0-9]+                           return T_NUMERO_REAL;
([a-zA-Z][a-z0-9A-Z]*){20,}                 {printf("Erro lexico: ID grande demais. Linha: %d\n", yylineno); return T_IDGRANDEDEMAIS;}
[a-zA-Z][_a-z0-9A-Z]*                       return searchElement(yytext);
(\.)                                        return T_PONTO;
(;)                                         return T_PONTOEVIRGULA;
(:=)                                        return T_ATRIBUICAO;
(:)                                         return T_DOISPONTOS;
(\))                                        return T_FPARENTESES;
(\()                                        return T_APARENTESES;
(,)                                         return T_VIRGULA;
(>=)                                        return T_MAIORIGUAL;
(<=)                                        return T_MENORIGUAL;
(<>)                                        return T_DIFERENTE;
(<)                                         return T_MENOR;
(>)                                         return T_MAIOR;
(=)                                         return T_IGUAL;
(\+)                                        return T_SOMA;
(\-)                                        return T_SUBTRACAO;
(\*)                                        return T_MULTIPLICACAO;
(\/)                                        return T_DIVISAO;
-?[1-9]+[a-zA-Z][a-z0-9A-Z]*                return T_NUMEROMALFORMADO;
-?[0-9]+[a-zA-Z][a-z0-9A-Z]*"."[a-z0-9A-Z]* return T_NUMEROMALFORMADO;
-?[0-9]+"."[0-9]*[a-zA-Z][a-z0-9A-Z]*       return T_NUMEROMALFORMADO;
"{"[^}\n]*"}"                               ; 	/* elimina comentarios de uma linha */
"{"[^}\n]*                                  {printf("Erro lexico: Comentario inacabado. Linha: %d\n", yylineno); return T_COMENTARIOINACABADO;}
[ \t]+                                      ; 	/* elimina espaços em branco */
[\n]+                                       yylineno++;
.                                           {printf("Erro lexico: %s - Caracter Invalido. Linha: %d\n", yytext, yylineno); return T_CARACTERINVALIDO;}


%%

int yywrap(){return 1;}