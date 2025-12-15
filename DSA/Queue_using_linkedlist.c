#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* rear = NULL;
Node* front = NULL;

void add(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL){
        printf("Stack overflow.");
        return;
    }

    newNode->data = value;
    newNode->next = NULL;

    if(rear == NULL){
        front = rear = newNode;
        return;
    }

    rear->next = newNode;
    rear = newNode;
}

void dequeue(){
    if(rear == NULL){
        printf("queue is null.");
        return;
    }

    Node* temp = front;
    printf("Remove element: %d", temp->data);

    front = front->next;

    if(front == NULL){
        rear = NULL;
    }
    free(temp);
}

void display(){
    if(rear == NULL){
        printf("no element found");
        return;
    }

    Node* temp = front;
    printf("\nDisplay: \n");
    while(temp != NULL){
        printf("%d \n", temp->data);
        temp = temp->next;
    }
}
int main(){
    add(1);
    add(2);
    add(3);
    add(4);
    add(5);
    display();
    dequeue();
    display();

    return 0;
}