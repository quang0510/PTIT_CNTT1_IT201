#include <stdio.h>
#include <stdlib.h>


typedef struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
} Node;


Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = NULL;
    newNode->prev = NULL;
    return newNode;
}


void printList(Node* head) {
    Node* current = head;
    while (current != NULL) {
        printf("%d <-> ", current->data);
        current = current->next;
    }
    printf("NULL\n");
}


int getLength(Node* head) {
    int length = 0;
    Node* current = head;
    while (current != NULL) {
        length++;
        current = current->next;
    }
    return length;
}

// Xoá node tại vị trí index
Node* deleteAt(Node* head, int index) {
    if (head == NULL) {
        return NULL;
    }
    int length = getLength(head);

    if (index < 0 || index >= length) {
        printf("vi tri khogn hop le \n");
        return head;
    }

    // Xoa node dau tien
    if (index == 0) {
        Node* temp = head;
        head = head->next;
        if (head != NULL) head->prev = NULL;
        free(temp);
        return head;
    }

    // Duyệt tới node cần xoá
    Node* current = head;
    for (int i = 0; i < index; i++) {
        current = current->next;
    }

    // Nối node trước và sau lại

    Node* nodeTruoc = current->prev;
    Node* nodeSau = current->next;

    if (nodeTruoc != NULL) {
        nodeTruoc->next = nodeSau;
    }

    if (nodeSau != NULL) {
        nodeSau->prev = nodeTruoc;
    }

    free(current);
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
    node1->next = node2;
    node2->prev = node1;
    node2->next = node3;
    node3->prev = node2;
    node3->next = node4;
    node4->prev = node3;
    node4->next = node5;
    node5->prev = node4;

    printf("Danh sach chua xoa :\n");
    printList(head);

    int index;
    printf("moi ban nhap vi tri can xoa: ");
    scanf("%d", &index);

    head = deleteAt(head, index);

    printf("\nDanh sach sau khi xoa :\n");
    printList(head);

    return 0;
}
