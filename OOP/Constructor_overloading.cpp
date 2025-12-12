#include<iostream>
using namespace std;

class Sum{
    int a,b;

    public:
        Sum(){
            a=b=0;
        }

        Sum(int a, int b){
            this->a = a;
            this->b = b;
        }

        void showData(){
            cout<<"Sum: "<<a+b<<endl;
        }
};
int main(){
    Sum s1;
    s1.showData();
    Sum s2(1,2);
    s2.showData();

    return 0;
}