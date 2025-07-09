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


int pop(Stack* stack) {
    if (stack->top == NULL) {
        printf("Ngăn xếp trống\n");
        return -1;
    }

    Node* temp = stack->top;
    int poppedValue = temp->data;
    stack->top = temp->next;
    free(temp);
    return poppedValue;
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

    printf("truoc khi pop : ");

    printStack(myStack);

    int value = pop(myStack);

    if (value != -1) {

        printf("gia tri lay ra: %d\n", value);
    }

    printf("Sau khi pop : ");

    printStack(myStack);

    freeStack(myStack);
    return 0;
}
