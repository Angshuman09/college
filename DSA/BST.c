#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node* createNode(int value){
    Node* node = (Node*)malloc(sizeof(Node));
    node->data = value;
    node->left = NULL;
    node->right = NULL;

    return node;
}

Node* insert(Node* root, int value){
    if(root == NULL){
        return createNode(value);
    }

    if(value<root->data){
        root->left = insert(root->left, value);
    }
    else if(value> root->data){
        root->right = insert(root->right, value);
    }

    return root;
}

void inOrder(Node* root){
    if(root != NULL){
        inOrder(root->left);
        printf("%d ",root->data);
        inOrder(root->right);
    }
}

void preOrder(Node* root){
    if(root != NULL){
        printf("%d ",root->data);
        preOrder(root->left);
        preOrder(root->right);
    }
}

void postOrder(Node* root){
    if(root != NULL){
        postOrder(root->left);
        postOrder(root->right);
        printf("%d ",root->data);
    }
}

int main(){
    Node* root = NULL;
    root = insert(root, 1);
    insert(root, 2);
    insert(root, 6);
    insert(root, 99);

    printf("\ninorder traversal-->\n");
    inOrder(root);
    printf("\npostorder traversal-->\n");
    postOrder(root);   
    printf("\npreorder traversal-->\n");
    preOrder(root);  
}