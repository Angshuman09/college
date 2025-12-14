#include <stdio.h>
#include <stdlib.h>
#define MAX 100
typedef struct Queue
{
    int arr[MAX];
    int front;
    int rear;
} Queue;

void init(Queue *q)
{
    q->front = q->rear = -1;
}

void add(Queue *q, int value)
{
    if ((q->rear + 1) % MAX == q->front)
    {
        printf("Circular queue is full.");
        return;
    }
    if (q->front == -1)
    {
        q->front = 0;
    }
    q->rear = (q->rear + 1) % MAX;
    q->arr[q->rear] = value;
}

int dequeue(Queue *q)
{
    if (q->front == -1)
    {
        printf("circular queue is empty.");
        return -1;
    }

    int value = q->arr[q->front];

    if (q->front == q->rear)
    {
        q->front = q->rear = -1;
    }
    else
    {
        q->front = (q->front + 1) % MAX;
    }

    return value;
}

void display(Queue *q)
{
    if (q->front == -1)
    {
        printf("circular queue is empty.");
        return;
    }

    int i = q->front;
    while (1)
    {
        printf("%d ", q->arr[i]);
        if (i == q->rear)
            break;

        i = (i + 1) % MAX;
    }
}

int main()
{
    Queue q;
    init(&q);
    add(&q, 1);
    add(&q, 8);
    add(&q, 2);
    add(&q, 3);
    add(&q, 4);
    add(&q, 5);
    add(&q, 6);
    display(&q);
    dequeue(&q);
    display(&q);
    
    return 0;
}