#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"Animal can eat."<<endl;
        }
};

class Lion: public Animal{
    public:
        void roar(){
            cout<<"Lion can roar."<<endl;
        }
};

int main(){
    Lion l;
    l.eat();
    l.roar();

    return 0;
}