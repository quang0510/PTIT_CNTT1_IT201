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


Node* addNode(Node* head, int index, int data) {

    if (index < 0 || index > getLenght(head)) {

        printf("\nVi tri can chen khong hop le");

        return head;
    }


    Node* current = head;
    for (int i = 0; i < index-2; i++) {
        current = current -> next;
    }

    Node* newNode = createNode(data);

    Node* nextNode = current -> next;
    current -> next = newNode;
    newNode -> next = nextNode;

    return head;
}

void prinList(Node* head) {

    Node* current = head;
    int i = 1;
    while (current != NULL) {
        printf("%d -> ", current -> data);
        current = current -> next;
    }

    printf("NULL");
}



int main() {

    Node* head = NULL;

    Node* node1 = createNode(1);
    Node* node2 = createNode(2);
    Node* node3 = createNode(3);
    Node* node4 = createNode(5);
    Node* node5 = createNode(7);
    head = node1;
    node1 -> next = node2;
    node2 -> next = node3;
    node3 -> next = node4;
    node4 -> next = node5;

    prinList(head);

    int value, index;

    printf("Moi nhap vi tri can them (khac dau/cuoi): ");
    scanf("%d", &index);

    printf("Moi nhap du lieu can them: ");
    scanf("%d", &value);


    addNode(head, index, value);

    printf("Sau khi them: \n");

    prinList(head);



}