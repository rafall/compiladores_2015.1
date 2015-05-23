%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "hashmap.h"
#include "y.tab.h"


int yylineno;

%}
INTEIROGRANDEDEMAIS	(-?[1-9][0-9]*){11,}
NUMERO_INT 			-?[1-9][0-9]*
NUMERO_REAL			-?[0-9]+"."[0-9]+
IDGRANDEDEMAIS		([a-zA-Z][a-z0-9A-Z]*){20,}
ID 					[a-zA-Z][_a-z0-9A-Z]*
PONTO				\.
PONTOEVIRGULA		;
ATRIBUICAO			:=
DOISPONTOS			:
APARENTESES			\)
FPARENTESES			\(
VIRGULA				,
MAIORIGUAL			>=
MENORIGUAL			<=
DIFERENTE			<>
MENOR				<
MAIOR				>
IGUAL				=
SOMA				"+"
SUBTRACAO			"-"
MULTIPLICACAO		"*"
DIVISAO				"/"
NUMEROMALFORMADO	-?[1-9]+[a-zA-Z][a-z0-9A-Z]*
NUMEROMALFORMADO2	-?[0-9]+[a-zA-Z][a-z0-9A-Z]*"."[a-z0-9A-Z]*
NUMEROMALFORMADO3	-?[0-9]+"."[0-9]*[a-zA-Z][a-z0-9A-Z]*
CARACTERINVALIDO	.

%%

{INTEIROGRANDEDEMAIS}                       return INTEIROGRANDEDEMAIS;
{NUMERO_INT}                                return NUMERO_INT;
{NUMERO_REAL}                               return NUMERO_REAL;
{IDGRANDEDEMAIS}                            return IDGRANDEDEMAIS;
{ID}                                        return searchElement(yytext);
{PONTO}                                     return PONTO;
{PONTOEVIRGULA}                             return PONTOEVIRGULA; 
{ATRIBUICAO}                                return ATRIBUICAO;
{DOISPONTOS}                                return DOISPONTOS;
{APARENTESES}                               return APARENTESES;
{FPARENTESES}                               return FPARENTESES;
{VIRGULA}                                   return VIRGULA;
{MAIORIGUAL}                                return MAIORIGUAL;
{MENORIGUAL}                                return MENORIGUAL;
{DIFERENTE}                                 return DIFERENTE;
{MENOR}                                     return MENOR;
{MAIOR}                                     return MAIOR;
{IGUAL}                                     return IGUAL;
{SOMA}                                      return SOMA;
{SUBTRACAO}                                 return SUBTRACAO;
{MULTIPLICACAO}                             return MULTIPLICACAO;
{DIVISAO}                                   return DIVISAO;
{NUMEROMALFORMADO}                          return NUMEROMALFORMADO;
{NUMEROMALFORMADO2}|{NUMEROMALFORMADO3}     return NUMEROMALFORMADO;
"{"[^}\n]*"}"                               ; 	/* elimina comentarios de uma linha */
"{"[^}\n]*                                  printf("%s - Comentario inacabado\n", yytext);
[ \t]+                                      ; 	/* elimina espaços em branco */
[\n]+                                       yylineno++;
{CARACTERINVALIDO}                          return CARACTERINVALIDO;


%%

int yywrap(){return 1;}