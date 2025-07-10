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

        printf("Khong the cap phat bo nho cho mang hang doi ");
        free(q);
        return NULL;
    }

    return q;
}


int main() {

    int maxSize = 5;
    Queue* myQueue = createQueue(maxSize);

    if (myQueue != NULL) {

        printf("tao hang doi thanh cong\n");
        printf("Front = %d, Rear = %d, Cap = %d\n", myQueue->front, myQueue->rear, myQueue->cap);
    }

    free(myQueue->array);

    free(myQueue);

    return 0;
}
