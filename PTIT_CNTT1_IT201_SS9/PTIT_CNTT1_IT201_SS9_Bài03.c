#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

typedef struct Node {

    int data;
    struct Node* next;

}Node;

Node* createNode(int data) {

    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;

}

bool search(Node* head, int target) {

    Node* current = head;
    int index = -1;

    while (current != NULL) {

        if (current -> data == target) {
            return true;
        }
        current = current -> next;

    }
    return false;
}


int main() {
    Node* head = NULL;
    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(4);
    Node* node5 = createNode(9);
    Node* node6 = createNode(10);

    head = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;
    node5 -> next = node6;

    if (search(head, 7)) {

        printf("true\n");

    }else {
        printf("false\n");
    }


}