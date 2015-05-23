// Código C

%{
    #include <stdio.h>
    int yylex(void);
    void yyerror(char *);

%}
// Tokens

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


%%

// Subrotinas


