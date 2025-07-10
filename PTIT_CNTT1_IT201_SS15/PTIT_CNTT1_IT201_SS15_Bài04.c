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

void printQueue(Queue* q) {

    if (q->rear < q->front) {
        printf("hang doi trong");
        return;
    }

    for (int i = q->front; i <= q->rear; i++) {
        printf("%d", q->array[i]);
    }
}

int main() {
    int maxSize = 5;

    Queue* myQueue = createQueue(maxSize);

    if (myQueue != NULL) {
        printQueue(myQueue);


        myQueue->array[0] = 1;
        myQueue->array[1] = 2;
        myQueue->array[2] = 3;
        myQueue->rear = 2;


        printf("\n Danh sach trong hang doi : ");
        printQueue(myQueue);
    }

    free(myQueue->array);
    free(myQueue);
    return 0;
}
