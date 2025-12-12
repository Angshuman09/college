#include<iostream>
using namespace std;

// You can overload by changing:
// ✔ number of parameters
// ✔ type of parameters
// ✔ order of parameters

class Calculator{
    public:
        int add(int a, int b){
            return a+b;
        }
        double add(double a, double b){
            return a+b;
        }
        float add(float a, float b, float c){
            return a+b+c;
        }
};

int main(){
    Calculator c;
    cout<<c.add(1,2)<<endl;
    cout<<c.add(1.222, 1.333)<<endl;
    cout<<c.add(1.5, 2.9)<<endl;
    return 0;
}