#include <stdio.h>
#include <stdlib.h>
/*图用邻接表预先定义*/
void TopSort(Graph G);

int main(void){


	return 0;
}
/*伪代码如下
void TopSort(Graph G){
	Queue Q;
	int counter = 0;
	vertex v, w;
	for v in vertex:
		if(indegree[v] == 0){
			Equenue(v, Q);
		}
	while(!IsEmpty(Q)){
		v = Dequque(Q);
		intNum[v] = ++counter;

		for w adjacent to v:
			if (--indegree[w] == 0){
				Equenue(w, Q);
			}
	}
	if(counter != vertex){
		Error('error!')
	}
	DisposeQueue(Q);


}
*/
