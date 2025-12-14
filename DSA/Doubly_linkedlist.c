#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* next;
    struct Node* prev;
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));

    newNode->data = value;
    newNode->next = newNode->prev = NULL;
    return newNode;
}

void insertAtEnd(Node** root, int value){
    Node* newNode = createNode(value);
    if(*root == NULL){
        *root = newNode;
        return;
    }

    Node* temp = *root;
    while(temp->next != NULL){
        temp = temp->next;
    }

    temp->next = newNode;
    newNode->prev = temp;
}

void display(Node* root){
    if(root == NULL){
        printf("root is empty.");
        return;
    }
    Node* temp = root;
    while(temp!= NULL){
        printf("%d <-> ",temp->data);
        temp = temp->next;
    }
    printf(" NULL");
}
int main(){
    Node* root = NULL;
    insertAtEnd(&root, 1);
    insertAtEnd(&root, 2);
    insertAtEnd(&root, 3);
    display(root);
    return 0;
}