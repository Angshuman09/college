#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* top = NULL;

void push(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));

    if(newNode == NULL){
        printf("stack is overflow.");
        return;
    }

    newNode->data = value;
    newNode->next = top;
    top = newNode;
}

void pop(){
    if(top == NULL){
        printf("Stack is empty.");
        return;
    }

    Node* temp = top;
    printf("POP: %d", temp->data);

    top = top->next;
    free(temp);
}

void display(){
    if(top == NULL){
        printf("Stack is empty.");
        return;
    }

    Node* temp = top;
    printf("\ndisplay:\n");
    while(temp != NULL){
        printf("\n %d \n", temp->data);
        temp = temp->next;
    }

}
int main(){
    push(1);
    push(2);
    push(3);
    display();
    pop();
    display();
    return 0;
}