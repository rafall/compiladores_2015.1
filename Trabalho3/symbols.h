#ifndef SYMBOLS_H
#define SYMBOLS_H

#define MAXLENGTH 400

// Categorias da table de symbols
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
#define REDEFINITION 301
#define CONFLICT 302
#define REDEFINITION_PARAM 303

//Tipos de erros
#define NEXITS -1
#define CONST_FALSE -2
#define PROCEDURE_FALSE -3
#define VAR_FALSE -4

typedef struct
{
	char *name;
	int tipo;
	double valorf;
	int valori;
	unsigned int end_relativo;
	int context;
	char *procedure;
	int order;
}symbol;

symbol *table;

int getRelAddress();
void createSymbolTable();
void realocSymbolTable(int newSize);
void realoca (symbol **p, int newSize);
int insert (symbol p);
int insertVar (char *name, int context);
int insertParam (char *name, int context, char *proc, int order);
int removeLocalVars();
int searchParam(char *procedure,int order);
int insertConst (char *name, int context);
int insertProcedure (char *name, int context);
int insertProgram (char *name);
int search (char *name,int tipo,int context);
void printTable();
int removeTable(symbol p);

#endif