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


void push(Stack* stack, int value) {

    stack->top++;
    stack->arr[stack->top] = value;

}


int pop(Stack* stack) {

    if (stack->top == -1) {

        printf("khong co phan tu trong ngan xep\n");
        return -1;

    } else {
        int value = stack->arr[stack->top];
        stack->top--;
        return value;
    }
}

int main() {
    Stack* stack = createStack(5);

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);
    push(stack, 40);
    push(stack, 50);

    int value = pop(stack);

    if (value != -1) {

        printf("%d\n", value);
    }


    free(stack);
    return 0;
}
