#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int data) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    if (newNode != NULL) {

        newNode->data = data;
        newNode->next = NULL;
    }
    return newNode;
}

typedef struct Stack {
    Node* top;
} Stack;

Stack* createEmptyStack() {

    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack != NULL) {

        stack->top = NULL;
    }
    return stack;
}


void push(Stack* stack, int value) {

    Node* newNode = createNode(value);
    if (newNode != NULL) {

        newNode->next = stack->top;
        stack->top = newNode;
    }
}


int getTop(Stack* stack) {

    if (stack->top == NULL) {
        printf("Ngan xep trong");
        return -1;
    }
    return stack->top->data;
}


void printStack(Stack* stack) {
    Node* current = stack->top;

    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL \n");
}


void freeStack(Stack* stack) {

    Node* current = stack->top;

    while (current != NULL) {

        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(stack);
}


int main() {
    Stack* myStack = createEmptyStack();


    push(myStack, 5);
    push(myStack, 4);
    push(myStack, 3);
    push(myStack, 2);
    push(myStack, 1);

    printStack(myStack);

    int topValue = getTop(myStack);

    if (topValue != -1) {

        printf("phan tu dau ngan xep : %d\n", topValue);
    }


    Stack* emptyStack = createEmptyStack();
    getTop(emptyStack);


    freeStack(myStack);
    freeStack(emptyStack);

    return 0;
}
