#include <stdio.h>
#include <stdlib.h>

typedef struct Node {
    int data;
    struct Node* next;
} Node;


Node* createNode(int data) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->next = NULL;
    return newNode;
}


void printList(Node* head) {

    Node* current = head;
    while (current != NULL) {

        printf("%d", current->data);
        if (current->next != NULL) printf("->");
        current = current->next;
    }
    printf("->NULL\n");
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
    Node* node1 = createNode(5);
    Node* node2 = createNode(7);
    Node* node3 = createNode(3);

    head = node1;
    node1->next = node2;
    node2->next = node3;

    printf("Danh sach ban dau:\n");

    printList(head);

    sortList(head);

    printf("Danh sach sau khi sap xep tang dan:\n");

    printList(head);

    return 0;
}
