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

    int value = stack->arr[stack->top];

    stack->top--;
    return value;
}





void reverseArray(int number[], int n) {

    Stack* stack = createStack(n);

    for (int i = 0; i < n; i++) {

        push(stack, number[i]);
    }

    for (int i = 0; i < n; i++) {

        number[i] = pop(stack);

    }

    free(stack);
}

int main() {

    int n;
    int number[100];

    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("number[%d] = ", i);
        scanf("%d", &number[i]);
    }

    reverseArray(number, n);

    printf("Mang sau khi dao nguoc: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", number[i]);
    }

    return 0;
}
