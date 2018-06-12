#include <stdlib.h>
#include <stdio.h>
#include "hash.h"
enum KindOfEntry {legitimate, deleted, empty};
typedef struct HashEntry{
	ElementType Element;
	enum KindOfEntry Info;	
}Cell;
struct HashTabl{
	int TableSize;
	Cell  *theCells;
	
};
HashTable InitHashTable(int TableSize);
Position Find(ElementType key, HashTable H);
Position Hash(const char *key, int TableSize){
	unsigned int HashVal = 0;
	while(*key != '\0'){
		HashVal = (HashVal << 5) + *key++;
	}
	return HashVal % TableSize;
}
int main(void){
	HashTable H = InitHashTable(10);
	return 0;
}

HashTable InitHashTable(int TableSize){
	HashTable H;
	H = (HashTable)malloc(sizeof(struct HashTabl));
	if (H == NULL)
		printf("can`t assign the memory for HashTabl");
	H->TableSize = TableSize;
	for(int i=1;i<=TableSize;i++){
		H->theCells[i].Info = empty;
	}
	return H;
}
Position Find(ElementType key, HashTable H){
	Position CurrPos;
	int CollisionNum;
	CurrPos = Hash(key, H->TableSize);
	while(H->theCells[CurrPos].Info != empty && H->theCells[CurrPos].Element != key ){
		CurrPos += 2 * ++CollisionNum -1;
	}
	if(CurrPos >= H->TableSize){
		CurrPos -= H->TableSize;
	}
	return CurrPos;
}

void Insert(ElementType key, HashTable H){
	Position pos = Find(key, H);
	if(H->theCell[pos].Info != legitimate){
		H->theCell[pos].Info = legitimate;
		H->theCell[pos].Element = key;
	}

	
}
void Delete(ElementType key, HashTable H){
	

}
