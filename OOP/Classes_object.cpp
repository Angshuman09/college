#include<iostream>
using namespace std;

class Square{
    public:
        int length;
    
    public:
    void getData(){
        cout<<"Enter the length: "<<endl;
        cin>>length;
    }
    void setData(int l){
        length = l;
    }
    void area(){
        int area = length*length;
        cout<<"Area of the Square is: "<<area<<endl;
    }
    void displayData(){
        cout<<"length: "<<length<<endl;
    }
};

int main(){
    Square s1, s2;

    //It is only possible if the data in class are public
    // s1.length = 10;

    // cout<<s1.length<<endl;

    //set rules to modify data(by creating functions)
    s1.setData(4);
    s1.getData();
    s1.displayData();
    s1.area();

    // s2.setData(16);
    s2.getData();
    s2.displayData();
    s2.area();

    return 0;
}