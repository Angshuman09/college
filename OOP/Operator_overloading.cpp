#include<iostream>
using namespace std;

class Value{
    int x;
    public:
        Value(int x){
            this->x = x;
        }
    Value operator+(Value v){
        return Value(x + v.x);
    }
    void showData(){
        cout<<"x: "<<x<<endl;
    }
};

int main(){
    Value v1(10), v2(20);
    Value v3 = v1 + v2;
    v3.showData();
    
    return 0;
}