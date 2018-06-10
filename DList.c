#include <stdlib.h>
#include <stdio.h>
struct Node{
	int data;
	struct Node *pre;
	struct Node *next;
};
typedef struct Node *position;
typedef struct Node DListNode;
typedef struct Node *DLinkList;
int insertDList(DLinkList head, position p);
int createDList(DLinkList head, int n);
int initDList(DLinkList *head);
position getElem(DLinkList h, int element);
void printDList(DLinkList head);
int main(void){
	DLinkList h;
	initDList(&h);
	int res = createDList(h, 5);
	printf("this is %d", res);
	printDList(h);

};
int initDList(DLinkList *head){
	*head = (DLinkList)malloc(sizeof(DListNode));
	(*head)->next = *head;
	(*head)->pre = *head;
	return 1;
}
int createDList(DLinkList head, int n){
	DListNode *p, *q;
	q = head;
	for(int i = 1; i<= n;i++){
		p = (DListNode*)malloc(sizeof(DListNode));
		if(p == NULL){
			printf("内存分配失败");
			exit(-1);
		}
		printf("please input %d number: ", i);
		int temp;
		scanf("%d",&temp);
		p->data = temp;
		p->next = q->next;
		q->pre = p;
		p->pre = q;
		head->pre = p;
		q = p;
	}
	return 1;
}
position getElem(DLinkList h, int element){
	return  h;	
}
void printDList(DLinkList head){
	DLinkList p;
	p = head->next;
	printf("开始打印:\n");
	while(p!=head){
		printf("%d", p->data);
		p = p->next;
	}
	putchar('\n');
}
