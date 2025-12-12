#include<iostream>
using namespace std;

template<typename T>

void sum(T a, T b){
    cout<<"sum is: "<<a+b<<endl;
}
int main(){
    sum(1, 2);
    sum(1.02, 2.22);

    return 0;
}