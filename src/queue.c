#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "queue.h"

Queue* newQueue(){
    Queue *queue = (Queue*) malloc (sizeof(Queue));
    queue->front = 0;
    queue->rear = -1;
    queue->_MAXSIZE = 100;
    queue->values = (int*) malloc (100 * sizeof(int));

    return queue; 
}

int isEmpty(Queue *queue){
    return queue->rear < 0;
}

void enqueue(Queue *queue, int val){
	if (isEmpty(queue)){
		int size = queue->_MAXSIZE + 100;
		int *tmpVar = queue->values;
		int *newArray = (int*) malloc (size * sizeof(int));

        memcpy(newArray, tmpVar, queue->_MAXSIZE * sizeof(int));
        queue->values = newArray;
        queue->_MAXSIZE = size;
        free(tmpVar);
	}
	
    queue->values[++queue->rear] = val;
}

int dequeue(Queue *queue){
    return queue->values[queue->front++];
}

void printQueue(Queue *queue){
	printf("[");
	for (int i = queue->front; i <= queue->rear; i++){
		printf("%d", queue->values[i]);
		if (i < queue->rear){
			printf(", ");
		}
	}
	printf("]\n");
}
