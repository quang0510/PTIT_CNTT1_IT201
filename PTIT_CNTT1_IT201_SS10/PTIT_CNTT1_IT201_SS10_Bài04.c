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

void printList(Node* head) {
    if (head == NULL) {
        return;
    }
    Node* current = head;

    while (current != NULL) {
        printf("%d ", current->data);

        current = current->next;
    }

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

Node* deleteEnd(Node* head) {
    if (getLength(head) <= 0) {
        return NULL;
    }
    Node* current = head;
    while (current->next->next != NULL) {
        current = current->next;
    }

    current->next = NULL;
    return head;
}

int main() {

    Node* head = NULL;
    Node* node1 = createNode(10);
    Node* node2 = createNode(20);
    Node* node3 = createNode(30);
    Node* node4 = createNode(40);
    Node* node5 = createNode(50);
    Node* node6 = createNode(60);


    head = node1;
    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = node6;

    printList(head);
    head = deleteEnd(head);

    printf("\n danh sach sau khi xoa la \n");
    printList(head);

}