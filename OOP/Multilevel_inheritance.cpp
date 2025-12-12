#include<iostream>
using namespace std;

class Device{
    public:
        void HasCircuit(){
            cout<<"Devices have circuits."<<endl;
        }
};

class Computer: public Device{
    public:
        void OS(){
            cout<<"Computer have a operating system."<<endl;
        }
};

class Laptop: public Computer{
    public:
        void Portability(){
            cout<<"laptop is easy to carry."<<endl;
        }
};

class MacBook: public Laptop{
    public:
        void Battery(){
            cout<<"mac have 18 hours battery life."<<endl;
        }
};

int main(){
    MacBook m;
    m.HasCircuit();
    m.Battery();
    m.OS();
    m.Portability();

    return 0;
}