#include <stdio.h>
#include <stdlib.h>
#define max 100
typedef struct Queue
{
    int arr[max];
    int rear;
    int front;
} Queue;

void init(Queue *q)
{
    q->rear = q->front = -1;
}

void add(Queue *q, int value)
{
    if (q->rear == max - 1)
    {
        printf("queue is full");
        return;
    }

    if (q->front == -1)
        q->front = 0;

    q->arr[++q->rear] = value;
}

int dequeue(Queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("queue is empty");
        return -1;
    }

    return q->arr[q->front++];
}

void display(Queue *q)
{
    if (q->front == -1 || q->front > q->rear)
    {
        printf("queue is empty");
        return;
    }

    for (int i = q->front; i <= q->rear; i++)
    {
        printf("%d ", q->arr[i]);
    }
}

int main()
{
    Queue q;
    init(&q);
    add(&q, 1);
    add(&q, 2);
    add(&q, 3);
    add(&q, 4);
    add(&q, 5);
    add(&q, 6);
    display(&q);
    int ele = dequeue(&q);
    display(&q);

    return 0;
}