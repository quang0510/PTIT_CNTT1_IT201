#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
}Node;

Node* createNode(int data ) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}

int getLength(Node* head) {
    if (head == NULL) {
        return 0;
    }
    Node* current = head;
    int length = 0;
    while (current != NULL) {
        length++;
        current = current->next;
    }

    return length;
}

int main() {

    Node* head = NULL;

    Node* node1 = createNode(10);
    Node* node2 = createNode(20);
    Node* node3 = createNode(30);
    Node* node4 = createNode(40);
    Node* node5 = createNode(50);

    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    Node* current = head;

    int index = (getLength(head) / 2 ) ;

    for (int i = 0; i < index; i++) {
        current = current->next;

    }
    printf("Node %d : %d", index,  current->data);

}