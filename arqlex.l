%{
#include <math.h>
#include <stdio.h>
#include <string.h>
#include "hashmap.h"

%}
INTEIROGRANDEDEMAIS	(-?[1-9][0-9]*){11,}
NUMERO_INT 			-?[1-9][0-9]*
NUMERO_REAL			-?[0-9]+"."[0-9]+
IDGRANDEDEMAIS		([a-zA-Z][a-z0-9A-Z]*){50,}
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

{INTEIROGRANDEDEMAIS}	printf("%s - Inteiro grande demais\n", yytext);
{NUMERO_INT}		printf("%s - numero_int\n", yytext);
{NUMERO_REAL}		printf("%s - numero_real\n", yytext);
{IDGRANDEDEMAIS}	printf("%s - Identificador grande demais\n", yytext);
{ID}				searchElement(yytext);
{PONTO}				printf("%s - .\n", yytext);
{PONTOEVIRGULA}		printf("%s - ;\n", yytext);
{ATRIBUICAO}		printf("%s - :=\n", yytext);
{DOISPONTOS}		printf("%s - :\n", yytext);
{APARENTESES}		printf("%s - )\n", yytext);
{FPARENTESES}		printf("%s - (\n", yytext);
{VIRGULA}			printf("%s - ,\n", yytext);
{MAIORIGUAL}		printf("%s - >=\n", yytext);
{MENORIGUAL}		printf("%s - <=\n", yytext);
{DIFERENTE}			printf("%s - <>\n", yytext);
{MENOR}				printf("%s - <\n", yytext);
{MAIOR}				printf("%s - >\n", yytext);
{IGUAL}				printf("%s - =\n", yytext);
{SOMA}				printf("%s - +\n", yytext);
{SUBTRACAO}			printf("%s - -\n", yytext);
{MULTIPLICACAO}		printf("%s - *\n", yytext);
{DIVISAO}			printf("%s - /\n", yytext);
{NUMEROMALFORMADO}	printf("%s - Numero inteiro mal formado\n", yytext);
{NUMEROMALFORMADO2}|{NUMEROMALFORMADO3}	printf("%s - Numero real mal formado\n", yytext);
"{"[^}\n]*"}"	; 	/* elimina comentarios de uma linha */
"{"[^}\n]*			printf("%s - Comentario inacabado\n", yytext);
[ \t\n]+	; 	/* elimina espaços em branco */
{CARACTERINVALIDO}	printf("%s - Caracter Invalido\n", yytext);


%%

int main(int argc, char *argv[])
{
	initTable();
	++argv, --argc; /* skip over program name */
	if (argc > 0)
		yyin = fopen(argv[0], "r");
	else
		yyin = stdin;
	yylex();
}
int yywrap(){return 1;}