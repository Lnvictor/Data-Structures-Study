#include <stdio.h>
#include "queue.h"

int main(){

	Queue *queue = newQueue();
	enqueue(queue, 1);
	enqueue(queue, 2);
	enqueue(queue, 3);
	enqueue(queue, 4);
	
	printQueue(queue);
	printf("%d\n", dequeue(queue));
	printQueue(queue);
	
	return 0;
}
