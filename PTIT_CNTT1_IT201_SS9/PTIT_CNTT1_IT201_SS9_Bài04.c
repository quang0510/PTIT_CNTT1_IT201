#include <stdio.h>
#include <stdlib.h>

typedef struct Node {

    int data;
    struct Node* next;

}Node;


Node* createNode(int data) {

    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node -> data = data;
    node -> next = NULL;
    return node;
}

int getLength(Node* head) {

    Node* current = head;

    int length = 0;
    while (current != NULL) {

        length++;
        current = current -> next;
    }
    return length;
}


int main() {
    Node* head = NULL;

    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(5);
    Node* node5 = createNode(7);
    ;
    head = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;

    printf("Danh sach lien ket co %d phan tu", getLenght(head));
}