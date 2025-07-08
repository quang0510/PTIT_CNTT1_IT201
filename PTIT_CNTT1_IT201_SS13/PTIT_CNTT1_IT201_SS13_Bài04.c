#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {

    int arr[100];
    int top;
    int cap;

} Stack;

Stack* createStack(int cap) {

    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->cap = cap;
    stack->top = -1;
    return stack;
}

void push(Stack* stack, int a) {

    stack->top++;
    stack->arr[stack->top] = a;

}


void viewStack(Stack* stack) {

    for (int i = stack->top; i >= 0; i--) {

        printf("%d\n", stack->arr[i]);
    }
}

int main() {
    Stack* stack = createStack(5);


    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);


    viewStack(stack);

    free(stack);

    return 0;
}
