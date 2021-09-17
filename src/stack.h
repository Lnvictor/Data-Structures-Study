/**
* Stack Data Structure Abstraction header
*/

#ifndef stack.h
#define RELOGIO_H

typedef struct{
    int top;
    int _MAXSIZE;
    int *values;
}Stack;

Stack* newStack();
void push(Stack *stack, int number);
int pop(Stack *stack);
void printStack(Stack *stack);
#endif