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


void add(Queue* q, int value) {

    if (q->rear < q->cap - 1) {

        q->rear++;
        q->array[q->rear] = value;
    } else {
        printf("Hang doi full");
    }
}

// Lấy phần tử đầu tiên ra khỏi hàng đợi
int removeFront(Queue* q) {

    if (q->front > q->rear) {

        printf("hang doi trong");
        return -1;
    }

    int value = q->array[q->front];
    q->front++;
    return value;
}

void printQueue(Queue* q) {
    printf("\n array ");
    for (int i = 0; i <= q->rear; i++) {

        printf("%d", q->array[i]);
        
        if (i < q->rear) printf(", ");
    }
    printf(", front = %d, rear = %d, cap = %d \n", q->front, q->rear, q->cap);
}

int main() {
    Queue* q = createQueue(5);


    removeFront(q);
    printQueue(q);


    add(q, 1);
    add(q, 2);
    add(q, 5);

    printQueue(q);

    free(q->array);
    free(q);

    return 0;
}
