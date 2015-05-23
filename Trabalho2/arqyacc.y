// Código C

%{
    #include <stdio.h>
    #include <stdlib.h>
    int yylex(void);
    void yyerror(char *);

%}
// Tokens

%start programa
%token INTEIROGRANDEDEMAIS
%token NUMERO_INT
%token NUMERO_REAL
%token IDGRANDEDEMAIS
%token ID
%token PONTO
%token PONTOEVIRGULA
%token ATRIBUICAO
%token DOISPONTOS
%token APARENTESES 
%token FPARENTESES
%token VIRGULA
%token MAIORIGUAL
%token MENORIGUAL
%token DIFERENTE
%token MENOR
%token MAIOR
%token IGUAL
%token SOMA
%token SUBTRACAO
%token MULTIPLICACAO
%token DIVISAO
%token NUMEROMALFORMADO
%token NUMEROMALFORMADO2
%token NUMEROMALFORMADO3
%token CARACTERINVALIDO
%token BEGIN
%token CONST
%token DO
%token ELSE
%token END
%token FOR
%token IF
%token INTEGER
%token PROCEDURE
%token PROGRAM
%token READ
%token REAL
%token THEN
%token TO
%token VAR
%token WHILE
%token WRITE

%%

programa : 	PROGRAM ID ';' corpo '.'
			;

corpo:		dc BEGIN comandos END
			;

dc:			dc_c dc_v dc_p
			;

dc_c:		CONST ID '=' numero ';' dc_c
			|
			;

dc_v:		VAR variaveis ':' tipo_var ';' dc_v
			|
			;

tipo_var:	REAL
			| INTEGER
			;

variaveis:	ID mais_var
			;

mais_var:	',' variaveis
			|
			;

dc_p:		PROCEDURE ID parametros ';' corpo_p dc_p
			|
			;

parametros:	'(' lista_par ')'
			|
			;

lista_par:	variaveis ':' tipo_var mais_par
			;

mais_par:	';' lista_par
			|
			;

corpo_p:	dc_loc BEGIN comandos END ';'
			;

dc_loc:		dc_v
			;

lista_arg:	'(' argumentos ')'
			|
			;

argumentos:	ID mais_ident
			;

mais_ident:	';' argumentos
			|
			;

pfalsa:		ELSE cmd
			|
			;

comandos:	cmd ';' comandos
			|
			;

cmd:		READ '(' variaveis ')'
			| WRITE '(' variaveis ')'
			| FOR ID ':=' NUMERO_INT TO NUMERO_INT DO corpo
			| WHILE '(' condicao ')' DO cmd
			| IF condicao THEN cmd pfalsa
			| ID ':=' expressao
			| ID lista_arg
			| BEGIN comandos END
			;

condicao:	expressao relacao expressao
			;

relacao:	'='
			| '<>'
			| '>='
			| '<='
			| '>'
			| '<'
			;

expressao:	termo outros_termos
			;

op_un:		| '+'
			| '-'
			|
			;

outros_termos:	op_ad termo outros_termos
				|
				;

op_ad:		'+'
			| '-'
			;

termo:		op_un fator mais_fatores
			;

mais_fatores:	op_mul fator mais_fatores
				|
				;

op_mul:		'*'
			| '/'
			;

fator:		ID
			| numero
			| '(' expressao ')'
			;

numero:		NUMERO_INT
			| NUMERO_REAL
			;

%%

// Subrotinas

int main (int argc, char** argv){
	return yyparse();
}