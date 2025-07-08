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


int check(char input[]) {

    Stack* stack = createStack(strlen(input));

    for (int i = 0; i < strlen(input); i++) {
        
        char a = input[i];

        if (a == '(' || a == '[' || a == '{') {
            push(stack, a);
        }

        if (a == ')' || a == ']' || a == '}') {

            pop(stack);
        }
    }

    if (stack->top == -1) {
        return 1;
    } else {
        return 0;
    }
}

int main() {
    char str[100];
    printf("Nhap bieu thuc: ");
    gets(str);

    if (check(str)) {

        printf("true");

    } else {
        printf("false");

    }

    return 0;
}
