#ifndef SYMBOLS_H
#define SYMBOLS_H

#define MAXLENGTH 400

// Categorias da Tabela de Simbolos
#define NUM_INT 0 
#define NUM_REAL 1 
#define PROGRAM 2
#define PROCEDURE 3 
#define CONST_INT 4
#define CONST_REAL 5 
#define VAR_INT 6 
#define VAR_REAL 7 
#define PARAM_INT 8
#define PARAM_REAL 9

//Tipos de dados
#define INTEGER 100
#define REAL 101
#define PROCEDURE_TRUE 102
#define CONSTANTE_INTEGER 103
#define CONSTANTE_REAL 104

//Tipos de tipos esperados
#define ATTR 200
#define EXPRESSAO 201 

//Retornos ao inserir
#define OK 300
#define REDECLARACAO 301
#define CONFLITO 302
#define REDECLARACAO_PARAM 303

//Tipos de erros
#define NAO_EXISTE -1
#define CONST_FALSE -2
#define PROCEDURE_FALSE -3
#define VAR_FALSE -4

typedef struct
{
	char *nome;
	int tipo;
	double valorf;
	int valori;
	unsigned int end_relativo;
	int contexto;
	char *procedure;
	int ordem;
}simbolo;

simbolo *tabela;

int getEndRelativo();
void alocaTabelaSimbolos();
void realocaTabelaSimbolos(int novo_tamanho);
void realoca (simbolo **p, int novo_tamanho);
int insere (simbolo p);
int insereVar (char *nome, int contexto);
int insereParam (char *nome, int contexto, char *proc, int ordem);
int removeLocalVars();
int buscaTipoParam(char *procedure,int ordem);
int insereNumInt (char *nome, int valor, int contexto);
int insereNumReal (char *nome, double valor, int contexto);
int insereConst (char *nome, int contexto);
int insereProcedure (char *nome, int contexto);
int insereProgram (char *nome);
int busca (char *nome,int tipo,int contexto);
void printTabela();
int removeTabela(simbolo p);

#endif