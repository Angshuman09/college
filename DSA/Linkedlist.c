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

    return 0;
}