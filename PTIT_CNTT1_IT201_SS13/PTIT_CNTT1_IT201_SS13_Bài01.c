#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {

    int arr[100];
    int top;
    int cap;

} Stack;

// Khởi tạo ngăn xếp
Stack* createStack(int cap) {

    Stack* stack = (Stack*)malloc(sizeof(Stack));

    if (stack != NULL) {

        stack->cap = cap;
        stack->top = -1;
    }
    return stack;
}

int main() {
    Stack* stack;
    int size = 5;

    stack = createStack(size);

    if (stack != NULL) {

        printf("khoi tao thanh cong ");
    } else {
        printf("khoi tao khong thanh cogn ");
    }

    free(stack);

    return 0;
}
