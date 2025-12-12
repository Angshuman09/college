#include<iostream>
using namespace std;

class Train{
    public:
        Train(){
            cout<<"This is a constructor."<<endl;
        }
        ~Train(){
            cout<<"This is a destructor."<<endl;
        }
};
int main(){
    Train t;
    return 0;
}