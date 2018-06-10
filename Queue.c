#include "queue.h"

int main(int argc, const char * argv[])
{
    LinkQueue queue;
    puts("初始化队列 queue");
    initQueue(&queue);
    traversal(queue);
    
    puts("start to insert into the queue");
    for(int i=1;i<=5;i++){
	int temp;
	printf("please input number %d: ", i);
	scanf("%d",&temp);
    	insertQueue(&queue, temp);
    }
    traversal(queue);
    
    puts("先进先出，删除队列从头开始， 0 ");
    deleteQueue(&queue);
    traversal(queue);
    
    puts("先进先出，删除队列从头开始， 1 ");
    deleteQueue(&queue);
    traversal(queue);
    
    puts("先进先出，删除队列从头开始， 2 ");
    deleteQueue(&queue);
    traversal(queue);
    
    puts("先进先出，删除队列从头开始， 3");
    deleteQueue(&queue);
    traversal(queue);
    
    destoryQueue(&queue);
    return 0;
}
