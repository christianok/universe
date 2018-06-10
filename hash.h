#ifndef _Hash_H
#define _Hash_H
#define ElementType char*
typedef unsigned int Index;
typedef Index Position;
struct HashTabl;
typedef struct HashTabl *HashTable;


HashTable InitHashTabl(int TableSize);
void DestoryTable(HashTable H);
Position Find(ElementType key, HashTable H);
void Insert(ElementType key, HashTable H);


#endif
