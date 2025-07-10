#include <stdio.h>
#include <stdlib.h>

typedef struct {

    int* data;
    int front;
    int rear;
    int size;

} Queue;


void createQueue(Queue* q, int size) {

    q->data = (int*)malloc(size * sizeof(int));
    q->front = 0;
    q->rear = -1;
    q->size = size;
}


void add(Queue* q, int value) {
    if (q->rear < q->size - 1) {
        q->rear++;
        q->data[q->rear] = value;
    }
}


int pop(Queue* q) {

    if (q->front <= q->rear) {

        return q->data[q->front++];
    }
    return -1;
}


int check(Queue* q) {

    while (q->front < q->rear) {

        int current = pop(q);

        int next = q->data[q->front];
        if (next - current != 1) {

            return 0;
        }
    }
    return 1;
}

int main() {

    Queue q;

    int n, value;

    scanf("%d", &n);
    createQueue(&q, n);

    for (int i = 0; i < n; i++) {

        scanf("%d", &value);
        add(&q, value);
    }

    if (check(&q)) {

        printf("True");
    } else {
        printf("False");
    }

    free(q.data); //
    return 0;
}
