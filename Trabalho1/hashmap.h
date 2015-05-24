#define HASHMAP_SIZE 400
#define PRIME_NUMBER 31
#define DEBUG 0
#define TOKEN_MAX_SIZE 10

typedef struct {
	char* element;
} hashmap;

enum tokens {
INTEIROGRANDEDEMAIS = 1,
NUMERO_INT,
NUMERO_REAL,
IDGRANDEDEMAIS,
ID,
PONTO,
PONTOEVIRGULA,
ATRIBUICAO,
DOISPONTOS,
APARENTESES,
FPARENTESES,
VIRGULA,
MAIORIGUAL,
MENORIGUAL,
DIFERENTE,
MENOR,
MAIOR,
IGUAL,
SOMA,
SUBTRACAO,
MULTIPLICACAO,
DIVISAO,
NUMEROMALFORMADO,
NUMEROMALFORMADO2,
NUMEROMALFORMADO3,
CARACTERINVALIDO,
};

#define BEGIN_ 297
#define CONST 371
#define ELSE 345
#define DO 11
#define END 171
#define FOR 377
#define IF 157
#define INTEGER 270
#define PROCEDURE 338
#define PROGRAM 260
#define READ 342
#define REAL 350
#define THEN 141
#define TO 107
#define VAR 119
#define WHILE 17
#define WRITE 175

#define PALAVRARESERVADA 300
hashmap* hashTable;

// Protótipos das funções
int initTable();
int getHashCode(char* );
int addElement(char* );
int searchElement(char* );
