#include<iostream>
using namespace std;

template<class T1, class T2>

class Pair{
    private:
    T1 a;
    T2 b;

    public:
    Pair(T1 a, T2 b){
        this->a = a;
        this->b = b;
    }

    void sum(){
        cout<<a+b<<endl;
    }
};
int main(){
    Pair <int, float>p(1, 2.12);
    p.sum();
}