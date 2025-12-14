#include<stdio.h>
#include<stdlib.h>
# define max 100
typedef struct Stack{
    int arr[max];
    int top;
}Stack;

void init(Stack* s){
    s->top = -1;
}

void push(Stack* s,int value){
    if(s->top == max-1){
        printf("stack is full");
        return;
    }else{
        s->arr[++s->top] = value;
    }
}

int pop(Stack* s){
    if(s->top == -1){
        printf("stack is empty");
        return -1;
    }else{
        return s->arr[s->top--];
    }
}

void display(Stack* s){
    if(s->top == -1){
        printf("stack is empty");
        return;
    }
    for(int i=0;i<=s->top;i++){
        printf("%d ", s->arr[i]);
    }
}

int main(){
    Stack s;
    init(&s);
    push(&s, 1);
    push(&s, 2);
    push(&s, 3);
    display(&s);
    int p = pop(&s);
    display(&s);

    return 0;
}