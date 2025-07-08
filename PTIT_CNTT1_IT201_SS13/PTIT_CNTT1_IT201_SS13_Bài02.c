#include <stdio.h>
#include <stdlib.h>

typedef struct Stack {

    int arr[100];
    int top;
    int cap;

} Stack;

// Hàm tạo ngăn xếp

Stack* createStack(int cap) {

    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->cap = cap;
    stack->top = -1;
    return stack;
}

// Hàm thêm phần tử vào ngăn xếp
void push(Stack* stack, int value) {
    stack->top++;
    stack->arr[stack->top] = value;
}

// in ngăn xếp ra màn hình

void printStack(Stack* stack) {

    printf("cac pahn tu cua ngan aep : ");
    for (int i = 0; i <= stack->top; i++) {

        printf("%d", stack->arr[i]);
        if (i < stack->top) {
            printf(", ");
        }
    }

    printf(" \n top: %d,\n", stack->top);
    printf("  cap: %d\n", stack->cap);

}

int main() {
    int size = 5;
    Stack* stack = createStack(size);

    int a;
    printf("Nhap cac phan tu:\n");

    for (int i = 0; i < size; i++) {
        printf("Nhap phan tu %d :", i + 1);
        scanf("%d", &a);
        push(stack, a);
    }

    printStack(stack);

    free(stack);
    return 0;
}
