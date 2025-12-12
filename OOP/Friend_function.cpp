#include<iostream>
using namespace std;

class Rectangle{
    private:
    int a, b;
    public:
        Rectangle(int a, int b){
            this->a = a;
            this->b = b;
        }

    friend void area(Rectangle r);
};

void area(Rectangle r){
    cout<<"Area of the rectangle: "<<r.a*r.b<<endl;
}

int main(){
    Rectangle r(10,20);
    area(r);
    return 0;
}