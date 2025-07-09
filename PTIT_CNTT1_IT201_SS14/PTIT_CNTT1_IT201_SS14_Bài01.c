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


Stack* createStack() {

    Stack* stack = (Stack*)malloc(sizeof(Stack));
    if (stack != NULL) {
        stack->top = NULL;
    }
    return stack;
}


Stack* createEmptyStack() {
    Stack* stack = createStack();

    if (stack != NULL) {

        Node* node = createNode(0);
        node->next = NULL;
        stack->top = NULL;
    }
    return stack;
}


void printStack(Stack* stack) {

    Node* current = stack->top;
    printf("Ngăn xếp: ");

    while (current != NULL) {

        printf("%d -> ", current->data);
        current = current->next;
    }
    printf("NULL");
}

int main() {

    Stack* myStack = createStack();
    printStack(myStack);


    Stack* nullStack = createEmptyStack();

    printStack(nullStack);


    free(myStack);
    free(nullStack);

    return 0;
}
