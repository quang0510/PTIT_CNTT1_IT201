#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node* next;
    struct Node* prev;

} Node;


Node* createNode(int data) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}


void printList(Node* head) {

    Node* current = head;

    int index = 1;

    while (current != NULL) {

        printf("node %d: %d\n", index++, current->data);
        current = current->next;
    }
}

void sortList(Node* head) {

    if (head == NULL) return;

    Node* i = head;
    while (i != NULL) {

        Node* j = i->next;
        while (j != NULL) {

            if (i->data > j->data) {

                int temp = i->data;
                i->data = j->data;
                j->data = temp;
            }
            j = j->next;
        }
        i = i->next;
    }
}

int main() {

    Node* head = NULL;

    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(5);
    Node* node6 = createNode(6);

    head = node5;
    node5->next = node4;
    node4->prev = node5;
    node4->next = node3;
    node3->prev = node4;
    node3->next = node2;
    node2->prev = node3;
    node2->next = node1;
    node1->prev = node2;
    node1->next = node6;
    node6->prev = node1;

    printf("Danh sach khi chua sap xep la :\n");
    printList(head);

    sortList(head);

    printf("\nDanh sach sau khi sap xep la :\n");
    printList(head);

    return 0;
}
