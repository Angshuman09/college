#include<stdio.h>
#include<stdlib.h>

typedef struct Node{
    int data;
    struct Node* left;
    struct Node* right;
}Node;

Node* createNode(int value){
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = newNode->right = NULL;
    return newNode;
}

void insertNode(Node* root, int value){
    if(root == NULL){
        return createNode(value);
    }

    Node* curr = root;
    Node* prev = NULL;

    while(curr!= NULL){
        prev = curr;
        if(value<=curr->data){
            curr = curr->left;
        }else{
            curr = curr->right;
        }
    }

    if(value<=prev){
        prev->left = createNode(value);
    }
    else{
        prev->right = createNode(value);
    }
}


int main(){

}