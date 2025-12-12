#include<iostream>
using namespace std;

class Animal{
    public:
        void eat(){
            cout<<"Animal can eat."<<endl;
        }
};

class Mammal{
    public:
        void milk(){
            cout<<"Mammal can produce milk."<<endl;
        }
};

class Dolphin: public Animal, public Mammal{
    public:
        void brain(){
            cout<<"Dolphin have such a big brain."<<endl;
        }
};
int main(){
    Dolphin d;
    d.eat();
    d.brain();
    d.milk();
    
    return 0;
}