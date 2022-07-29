#include <stdio.h>
#include "stack.h"

int main(){
    Stack *stack = newStack();
    push(stack, 1);
    push(stack, 2);
    push(stack, 3);
    printStack(stack); // 1, 2, 3
    push(stack, 4);
    printf("%d", stack->_MAXSIZE);
    printStack(stack); // 1, 2, 3, 4
    return 0;
}