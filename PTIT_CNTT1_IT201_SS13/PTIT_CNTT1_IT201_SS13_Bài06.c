#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct Stack {

    char arr[100];
    int top;
    int cap;

} Stack;

Stack* createStack(int cap) {

    Stack* stack = (Stack*)malloc(sizeof(Stack));
    stack->cap = cap;
    stack->top = -1;

    return stack;

}

void push(Stack* stack, char character) {

    stack->top++;
    stack->arr[stack->top] = character;

}

char pop(Stack* stack) {

    char character = stack->arr[stack->top];
    stack->top--;
    return character;

}

int check(char str[]) {

    int n = strlen(str);
    Stack* stack = createStack(n);

    for (int i = 0; i < n; i++) {
        push(stack, str[i]);
    }

    for (int i = 0; i < n; i++) {
        if (str[i] != pop(stack)) {
            return 0;

        }
    }

    return 1;
}

int main() {

    char str[100];

    printf("Nhap chuoi: ");
    gets(str);

    if (check(str)) {

        printf("true\n");
    } else {
        printf("false\n");
    }

    return 0;
}
