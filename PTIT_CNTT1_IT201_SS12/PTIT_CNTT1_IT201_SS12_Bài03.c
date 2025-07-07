#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node* next;
    struct Node* prev;

}Node;

Node* createNode(int data) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    newNode -> prev = NULL;
    return newNode;
}

void printList(Node* head) {
    if (head == NULL) return;
    Node* current = head;
    while (current != NULL) {
        printf("%d", current -> data);
        if (current -> next != NULL) {
            printf(" <-> ");
        }else {
            printf(" -> ");
        }
        current = current -> next;
    }
    printf("NULL\n");
}



Node* addEnd(Node* head, int data) {

    Node* newNode = createNode(data);
    if (head == NULL) {
        return newNode;
    }

    Node* current = head;

    while (current -> next != NULL) {
        current = current -> next;
    }

    newNode -> prev = current;
    current -> next = newNode;
    newNode -> next = NULL;
    return head;
}



int main() {
    Node* head = NULL;
    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(5);

    head = node1;

    head -> next = node2;
    node2 -> prev = node1;
    node2 -> next = node3;
    node3 -> prev = node2;
    node3 -> next = node4;
    node4 -> prev = node3;
    node4 -> next = node5;
    node5 -> prev = node4;

    printList(head);

    head = addEnd(head, 999);

    printf("danh sach sau khi them: \n");

    printList(head);
}