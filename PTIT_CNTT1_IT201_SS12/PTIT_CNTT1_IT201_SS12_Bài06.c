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
    if (head == NULL) {
        return;
    }
    Node* current = head;
    int index = 1;
    while (current != NULL) {
        printf("node %d: %d\n",index++, current->data);
        current = current -> next;
    }
}

int getLength(Node* head) {

    int count = 0;
    Node* current = head;

    while (current != NULL) {
        count++;
        current = current->next;
    }
    return count;
}


void findNode(Node* head) {

    int length = getLength(head);

    if (length == 0) {
        printf("Danh sach trong\n");
        return;
    }

    int middleIndex = length / 2;
    Node* current = head;

    for (int i = 0; i < middleIndex; i++) {
        current = current->next;
    }

    printf("Node %d: %d\n", middleIndex + 1, current->data);
}

int main() {
    Node* head = NULL;


    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(5);

    head = node1;
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;

    printf("Danh sach ban dau :\n");
    printList(head);


    printf("phan tu o giua :\n");

    findNode(head);

    return 0;
}
