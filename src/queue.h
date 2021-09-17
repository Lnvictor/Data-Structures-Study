#ifndef QUEUE.H
#define QUEUE.H

typedef struct {
    int front, rear;
    int *values;
    int _MAXSIZE;
}Queue;

// Functions
Queue* newQueue();
void enqueue(Queue *queue, int val);
int dequeue(Queue *queue);
int isEmpty(Queue *queue);
void printQueue(Queue *queue);

#endif
