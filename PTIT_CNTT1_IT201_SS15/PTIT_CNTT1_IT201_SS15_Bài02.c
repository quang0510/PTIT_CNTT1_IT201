#include <stdio.h>
#include <stdlib.h>

typedef struct Queue {

    int* array;
    int front;
    int rear;
    int cap;

} Queue;


Queue* createQueue(int maxSize) {

    Queue* q = (Queue*)malloc(sizeof(Queue));

    if (q == NULL) {

        printf("Khong the cap phat bo nho");
        return NULL;
    }

    q->cap = maxSize;

    q->front = 0;
    q->rear = -1;
    q->array = (int*)malloc(sizeof(int) * maxSize);

    if (q->array == NULL) {

        printf("Khong the cap phat bo nho cho mang hang doi");
        free(q);
        return NULL;
    }

    return q;
}

// them phan tu vao hang doi
void enqueue(Queue* q, int value) {

    if (q->rear == q->cap - 1) {
        printf("queue is full\n");
        return;
    }

    q->rear++;
    q->array[q->rear] = value;
}

// print queue
void printQueue(Queue* q) {


    printf("  array : ");

    for (int i = 0; i <= q->rear; i++) {
        printf("%d", q->array[i]);
        if (i < q->rear) {
            printf(", ");
        }
    }
    printf("  front : %d\n", q->front);
    printf("  rear : %d\n", q->rear);
    printf("  capacity : %d\n", q->cap);

}

int main() {
    int maxSize = 5;

    Queue* myQueue = createQueue(maxSize);

    if (myQueue == NULL) {
        return 1;
    }

    int value;
    for (int i = 0; i < 5; i++) {

        printf("Nhap so nguyen thu %d : ", i + 1);
        scanf("%d", &value);

        enqueue(myQueue, value);
        printQueue(myQueue);
    }

    free(myQueue->array);
    free(myQueue);

    return 0;
}
