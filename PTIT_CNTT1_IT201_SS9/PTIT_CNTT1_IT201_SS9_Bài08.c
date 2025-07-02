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


Node* deleteNode(Node* head, int index) {

    if (head == NULL) return NULL;

    Node* current = head;

    for (int i=0; i<index-2; i++) {
        current = current -> next;
    }
    Node* temp = current->next;

    if (temp == NULL) return head;

    current->next = temp->next;
    free(temp);

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

    int index;

    printf("Moi nhap vi tri can xoa(khac dau/cuoi): ");
    scanf("%d", &index);

    head = deleteNode(head, index);

    printf("Sau khi xoa: \n");

    prinList(head);


}