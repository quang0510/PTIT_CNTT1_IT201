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
    printf("NULL\n");
}

Node* addEnd(Node* head, int data ) {
    if (head == NULL) {
        return NULL;

    }
    Node* newNode = createNode(data);

    Node* current = head;
    while (current ->next != NULL) {
        current = current->next;
    }
    current->next = newNode;
    return head;
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

    printList(head);

    int value;
    printf("Moi ban nhap gia tri can tehm");
    scanf("%d", &value);
    head = addEnd(head, value);

    printf("danh sach sau khi them la : \n");
    printList(head);

}