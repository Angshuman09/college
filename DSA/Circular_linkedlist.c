#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->next = newNode;
    return newNode;
}

void insertAtEnd(Node** root, int value){
    Node* newNode = createNode(value);
    if(*root == NULL){
        *root = newNode;
        return;
    }

    Node* temp = *root;
    while(temp->next!=*root){
        temp= temp->next;
    }

    temp->next = newNode;
    newNode->next = *root;
}

void display(Node* root){
    Node* temp = root;
    do{
        printf("%d ->", temp->data);
        temp = temp->next;
    }while(temp != root);

    printf("NULL");
}

int main(){
    Node* root = NULL;
    insertAtEnd(&root, 1);
    insertAtEnd(&root, 3);
    insertAtEnd(&root, 2);

    display(root);

    return 0;
}