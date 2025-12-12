// Method Overriding happens when:
// ✔ A derived class has a function
// ✔ With same name, same parameters, and same return type
// ✔ As a function in the base class

#include<iostream>
using namespace std;

class Animal{
    public:
    virtual void sound(){ //virtual function is used for dynamic binding(execute the function at runtime)
        cout<<"Animal makes sound."<<endl;
    }
};

// At compile time, the compiler does not know which object a will point to.
// So it decides the function call at runtime → this is dynamic binding.

class Dog:public Animal{
    public:
        void sound() override {
            cout<<"Dog can bark"<<endl;
        }
};

class Cat:public Animal{
    public:
        void sound() override {
            cout<<"Cat can meeewww"<<endl;
        }
};

int main(){
    Animal *a = new Animal();
    Animal *d = new Dog();
    Animal *c = new Cat();
    a->sound();
    d->sound();
    c->sound();
    return 0;
}