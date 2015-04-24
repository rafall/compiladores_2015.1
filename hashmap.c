#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "hashmap.h"

int main () {

	initTable();
	char word[30];
	gets(word);
	addElement(word);

	return 0;
	
}

// Inicializa a hashTable alocando espaço
int initTable() {
	hashTable = (hashmap*) malloc (HASHMAP_SIZE*sizeof(hashmap));
	for(int i = 0; i < HASHMAP_SIZE; i++)
	{
		hashTable[i].element = NULL;
	}
	return 0;
}

// Passa a palavra pelo algoritmo para gerar o numero do hash dela
// retorna esse numero
int getHashCode(char* s)
{
	int hash = 0;
	
	for (int i = 0; i < strlen(s); i++)
	    hash = (PRIME_NUMBER * hash + s[i]) % HASHMAP_SIZE;

	printf("Hash Code de %s eh %d\n", s, hash);

	return hash;
}

// Adiciona elemento na tabela hash
// chama a função getHashCode que retorna o codigo hash de acordo
// com a string passada. Verifica se aquela posição já foi ocupada.
// Se não foi, adiciona na tabela
int addElement(char* s)
{
	int hash;
	hash = getHashCode(s);
	if(hashTable[hash].element != NULL)
	{
		printf("ERROR: Colision. This hash already exists!\n");
		return 1;
	}

	hashTable[hash].element = (char*) malloc (strlen(s)*sizeof(char));
	strcpy(hashTable[hash].element, s);
	printf("Elemento %s adicionado\n", hashTable[hash].element);

	return 0;
}
