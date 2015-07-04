#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "symbols.h"

int prox_end_relativo=0;
int numero_symbols=0;

int getRelAddress()
{
    int ret=prox_end_relativo;
    prox_end_relativo++;
    return ret;
}

void createSymbolTable()
{
  table = (symbol *) malloc(MAXLENGTH * sizeof(symbol)); 
}

void realocSymbolTable(int newSize)
{
    realoca(&table, newSize);
}

void realoca (symbol **p, int newSize)
{
    symbol *realocado;
    realocado = realloc ((*p), newSize * sizeof(symbol));
    (*p) = realocado;
    
}

int insert (symbol p)
{
   int i=0,j;
   while(i<numero_symbols && strcmp(table[i].name,p.name)<0)
    ++i;

         /*caso exista alguma entrada na tabela de symbols com o mesmo name, deve-se verificar se eh permitido*/
if(i<numero_symbols && strcmp(table[i].name,p.name)==0)
{
                 /*se as variaveis tem o mesmo tipo e pertencem ao mesmo escopo. ERRO: redefinição de variavel*/
   while(i<numero_symbols && strcmp(table[i].name,p.name)==0){
    if(table[i].tipo == p.tipo && table[i].context == p.context && p.tipo!=PARAM_INT && p.tipo!=PARAM_REAL)
        return REDEFINITION;
    else if(table[i].tipo == p.tipo && table[i].context == p.context && (p.tipo==PARAM_INT || p.tipo!=PARAM_REAL) && strcmp(table[i].procedure,p.procedure)==0)
        return REDEFINITION_PARAM;
    
    if(table[i].tipo != p.tipo && table[i].context == p.context && (table[i].tipo == PARAM_REAL || table[i].tipo ==PARAM_INT))
       return REDEFINITION_PARAM;
   
                        /*se as variaveis nao tem o mesmo tipo, isso so eh permitido se alguma delas for PROGRAM ou PROCEDURE. ERRO: tipos conflitantes*/
   if(table[i].tipo != p.tipo && table[i].tipo != PROGRAM && table[i].tipo !=PROCEDURE && p.tipo != PROGRAM && p.tipo !=PROCEDURE && table[i].context == p.context)
    return CONFLICT;

i++;
}
}

for(j=numero_symbols;j>i;--j)
  table[j]= table[j-1];

table[i]=p;
return OK;
}
int search (char *name,int tipo,int context)
{
    int i=0;

    while(i<numero_symbols && strcmp(table[i].name,name)<0)
        ++i;
    
    if(i<numero_symbols && strcmp(table[i].name,name)==0)
    {
        while(i<numero_symbols && strcmp(table[i].name,name)==0){
            if(table[i].context==context){
                if((table[i].tipo==VAR_INT || table[i].tipo==PARAM_INT)  && tipo==EXPRESSAO) return INTEGER;
                if((table[i].tipo==VAR_REAL || table[i].tipo==PARAM_REAL) && tipo==EXPRESSAO) return REAL;
                if((table[i].tipo==VAR_INT || table[i].tipo==PARAM_INT)  && tipo==ATTR) return INTEGER;
                if((table[i].tipo==VAR_REAL || table[i].tipo==PARAM_REAL) && tipo==ATTR) return REAL;
            }
            if(table[i].tipo==PROCEDURE && tipo==PROCEDURE) return table[i].order;
            if(table[i].tipo==CONST_INT  && tipo==EXPRESSAO) return INTEGER;
            if(table[i].tipo==CONST_REAL  && tipo==EXPRESSAO) return REAL;
            
            if(tipo==ATTR && (table[i].tipo==CONST_INT || table[i].tipo==CONST_REAL)){
                return CONST_FALSE;
            }
            i++;
        }
    }
    
    return NEXITS;
}

int searchParam(char *procedure,int order)
{
    int i=0;
    while(i<numero_symbols){
        if(strcmp(table[i].procedure,procedure)==0 && table[i].order==order){
            if(table[i].tipo==PARAM_INT) return INTEGER;
            if(table[i].tipo==PARAM_REAL) return REAL;
        }
        i++;
    }
    
    return NEXITS;
}

int removeLocalVars()
{
    int i=0;
    while(i<numero_symbols){
        if(table[i].context==1){
            if(table[i].tipo!=PARAM_INT && table[i].tipo!=PARAM_REAL && table[i].tipo!=PROCEDURE){
                removeTable(table[i]);
                fflush(stdout);
                i--;
            }
        }
        i++;
    }
    
    return NEXITS;
}

int insertConst (char *name, int context)
{
    int retorno;
    symbol p;
    p.name=name;
    p.tipo = CONST_INT;
    p.context = context;
    p.end_relativo=getRelAddress();
    p.valorf=-1.0;
    p.procedure=malloc(1*sizeof(char));
    p.procedure[0]='\0';
    retorno = insert(p);
    if(retorno ==OK)
        ++numero_symbols;
    return retorno;
}

int insertProcedure (char *name, int context)
{
    int retorno;
    symbol p;
    p.name=name;
    p.tipo = PROCEDURE;
    p.valorf=-1;
    p.valori=-1;
    p.context = context;
    p.procedure=malloc(1*sizeof(char));
    p.procedure[0]='\0';
    p.order=0;
    retorno = insert(p);
    if(retorno ==OK)
        ++numero_symbols;
    return retorno;
}

int insertProgram (char *name)
{
    int retorno;
    symbol p;
    p.name=name;
    p.tipo = PROGRAM;
    p.valorf=-1;
    p.valori=-1;
    p.context = 0;
    p.end_relativo=-1;
    p.procedure=malloc(1*sizeof(char));
    p.procedure[0]='\0';
    retorno = insert(p);
    if(retorno ==OK)
        ++numero_symbols;
    return retorno;
}


int insertVar (char *name, int context)
{
    int retorno;
    symbol p;
    p.name=name;
    p.tipo = VAR_INT;
    p.context = context;
    p.end_relativo=getRelAddress();
    p.valori=-1;
    p.valorf=-1.0;
    p.procedure=malloc(1*sizeof(char));
    p.procedure[0]='\0';
    retorno = insert(p);
    if(retorno ==OK)
        ++numero_symbols;
    return retorno;
}

int insertParam (char *name, int context, char *proc, int order)
{
    int i=0,retorno;
    symbol p;
    p.name=name;
    p.tipo = PARAM_INT;
    p.context = context;
    p.end_relativo=getRelAddress();
    p.order=order;
    p.procedure=proc;
    p.valori=-1;
    p.valorf=-1.0;
    retorno = insert(p);
    if(retorno ==OK)
    {
        ++numero_symbols;
        
        while(i<numero_symbols && strcmp(table[i].name,proc)<=0)
        {
            if(strcmp(table[i].name,proc)==0 && table[i].tipo == PROCEDURE)
                table[i].order = table[i].order +1;
            ++i;
        }
    }
    return retorno;
}

int removeTable(symbol p)
{
   int i=0,j;
   while(i<numero_symbols && strcmp(table[i].name,p.name)!= 0)
    ++i;
     /*saiu porque encontrou*/
if(i<numero_symbols)
{
  for(j=i;j<numero_symbols-1;++j)
      table[j]= table[j+1];
  numero_symbols--;
  prox_end_relativo--;
  return 1;
}
return 0;
}

void printTable(){
    int i;
    printf("|Nro\tTipo\tname\t\tValor Int\tValor Float\tEnd Relativo\tcontext\tProcedure\torder\t|\n");
    for(i=0;i<numero_symbols; i++){
        printf("|%d\t%d\t%8s\t%8d\t%lf\t%d\t\t%d\t%16s %8d\t|\n",i,table[i].tipo,table[i].name, table[i].valori, table[i].valorf, table[i].end_relativo, table[i].context,table[i].procedure, table[i].order);
    }
}