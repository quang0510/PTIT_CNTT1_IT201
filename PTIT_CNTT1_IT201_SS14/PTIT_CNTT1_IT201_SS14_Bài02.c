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


void printStack(Stack* stack) {

    Node* current = stack->top;

    while (current != NULL) {
        printf("%d->", current->data);
        current = current->next;
    }
    printf("NULL \n");
}


int main() {
    Stack* myStack = createEmptyStack();


    push(myStack, 5);
    push(myStack, 4);
    push(myStack, 3);
    push(myStack, 2);
    push(myStack, 1);

    printf("Truoc khi them:");
    printStack(myStack);


    int value;

    printf("Nhap so nguyen duong can them vao stack: ");

    scanf("%d", &value);

    if (value > 0) {
        push(myStack, value);
        printf("Sau khi them:");
        printStack(myStack);
    } else {
        printf("Chi duoc nhap so nguyen duong");
    }


    Node* current = myStack->top;

    while (current != NULL) {
        Node* temp = current;
        current = current->next;
        free(temp);
    }
    free(myStack);

    return 0;
}
