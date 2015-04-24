#define HASHMAP_SIZE 30
#define PRIME_NUMBER 31

typedef struct {
	char* element;
} hashmap;

hashmap* hashTable;

int initTable();
int getHashCode(char* );
int addElement(char* );
