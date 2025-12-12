#include<iostream>
using namespace std;

// Inline function = function whose code is copied directly at the point of call → no function-call overhead.
inline int cube(int x){
    return x*x*x;
}

inline int maxValue(int a, int b){
    return (a>b) ? a : b;
}
int main(){
    cout<<cube(5)<<endl;
    cout<<maxValue(4,5)<<endl;

    return 0;
}