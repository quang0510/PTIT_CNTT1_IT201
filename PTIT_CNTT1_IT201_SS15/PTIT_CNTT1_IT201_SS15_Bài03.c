#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

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

void enqueue(Queue* q, int value) {

    if (q->rear == q-> cap - 1) {

        printf("queue is full\n");
        return;
    }

    q->rear++;
    q->array[q->rear] = value;
}


bool isEmpty(Queue* q) {
    return q->rear == -1;
}

void printQueue(Queue* q) {

    printf("  array :");
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

    Queue* myQueue = createQueue(5);

    if (myQueue == NULL) {
        return 1;
    }

    if (myQueue->rear == -1) {

        printf("true");
    } else {

        printf("false");
    }



    enqueue(myQueue, 1);
    enqueue(myQueue, 2);
    enqueue(myQueue, 3);


    printQueue(myQueue);

    if (myQueue->rear == -1) {

        printf("true");
    } else {
        printf("false");
    }



    free(myQueue->array);
    free(myQueue);

    return 0;
}
