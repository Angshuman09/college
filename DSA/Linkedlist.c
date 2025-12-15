#include <stdio.h>
#include <stdlib.h>

typedef struct Node
{
    int data;
    struct Node *next;
} Node;

Node *createNode(int value)
{
    Node *newNode = (Node *)malloc(sizeof(Node));

    newNode->data = value;
    newNode->next = NULL;
    return newNode;
}

void insertAtEnd(Node **root, int value)
{
    Node *newNode = createNode(value);
    if (*root == NULL)
    {
        *root = newNode;
        return;
    }
    Node *temp = *root;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    temp->next = newNode;
}

void deleteAtmiddle(Node** root, int value){
    Node* temp = *root;
    Node* prev = NULL;

    if(temp!=NULL && temp->data == value){
        *root = temp->next;
    }
    while(temp!=NULL){
        if(temp->data == value){
            prev->next = temp->next;
            free(temp);
        }

        prev = temp;
        temp = temp->next;
    }
}

void reverseLinkedList(Node** root){
    Node* prev = NULL;
    Node* curr = *root;
    Node* next;
    while(curr != NULL){
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
    }

    *root = prev;
}

void display(Node *node)
{
    Node *temp = node;
    while (temp != NULL)
    {
        printf(" %d ->", temp->data);
        temp = temp->next;
    }
    printf(" NULL");
}
int main()
{
    Node *root = NULL;
    insertAtEnd(&root, 1);
    insertAtEnd(&root, 2);
    insertAtEnd(&root, 3);
    insertAtEnd(&root, 4);
    display(root);

    deleteAtmiddle(&root, 3);
    display(root);

    reverseLinkedList(&root);
    display(root);

    return 0;
}