#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "stack.h"

Stack* newStack(){
    Stack *stack = (Stack*) malloc (sizeof(Stack));
    stack->top = -1;
    stack->values = (int*) malloc (sizeof(int) * 100);
    stack->_MAXSIZE = 100;

    return stack;
}

void push(Stack *stack, int number){
    if (stack->top == stack->_MAXSIZE - 1){
        int size = stack->_MAXSIZE + 100;
        int *tmpVar = stack->values;
        int *newArray = (int*) malloc (size * sizeof(int));
        
        memcpy(newArray, tmpVar, stack->_MAXSIZE * sizeof(int));
        stack->values = newArray;
        stack->_MAXSIZE = size;
        free(tmpVar);
    }

    stack->values[++stack->top] = number;
}

int pop(Stack *stack){
    return stack->values[stack->top--];
}

void printStack(Stack *stack){
    printf("[");
    for (int i = stack->top; i >= 0 ; i--){
        printf("%d", stack->values[i]);
        if (i > 0){
            printf(", ");
        }
    }
    printf("]\n");
}
