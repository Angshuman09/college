#include<iostream>
using namespace std;

int main(){
    int a = 9;
    int b = 0;

    try
    {
        if(b==0){
            throw "can't divisible by zero!";
        }
        int div = a/b;
        cout<<div<<endl;
    }
    catch(const char *message)
    {
        cout<< message <<endl;
    }
    
    return 0;
}