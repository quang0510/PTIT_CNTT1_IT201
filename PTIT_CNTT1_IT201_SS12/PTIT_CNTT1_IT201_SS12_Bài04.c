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
    if (head == NULL) {
        return;
    }
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
    printf("NULL");
    printf("\n");
}


Node* deleteEnd(Node* head) {
    if (head == NULL) return NULL;
    if (head -> next == NULL) {
        free(head);
        return NULL;
    }
    Node* current = head;
    while (current -> next != NULL) {
        current = current -> next;
    }

    current = current -> prev;
    current -> next = NULL;
    return head;
}



int main() {
    Node* head = NULL;
    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(999);

    head = node1;
    head -> next = node2;
    node2 -> prev = node1;
    node2 -> next = node3;
    node3 -> prev = node2;
    node3 -> next = node4;
    node4 -> prev = node3;
    node4 -> next = node5;
    node5 -> prev = node4;


    printf("danh sach truoc khi xoa : \n ");
    printList(head);

    head = deleteEnd(head);

    printf("danh sach sau khi xoa o cuoi: \n");

    printList(head);
}