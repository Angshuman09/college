#include<iostream>
using namespace std;

template<class T>

class Stack{
    private:
    T arr[20];
    int top;
    public:
    Stack(){
        top = -1;
    }

    void push(T x){
        if(top == 19){
            cout<<"stack is full."<<endl;
            return;
        }
        arr[++top] = x;
    }
    void pop(){
        if(top == -1){
            cout<<"Stack is empty."<<endl;
        }else{
            top--;
        }
    }

    void display(){
        if(top==-1){
            cout<<"Stack is empty."<<endl;
            return;
        }
        
        for(int i=0;i<=top;i++){
            cout<<arr[i]<<" ";
        }
        cout<<endl;
    }

};
int main(){
    Stack <int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    s.display();
    s.pop();
    s.display();
    return 0;
}