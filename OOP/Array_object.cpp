#include<iostream>
#include<string>
using namespace std;

// Array of objects is a collection of objects stored in contiguous memory locations. 
// Each element of the array is an object of the same class.
class Student{
    string name;
    int rollno;

    public:
        void setData(string name, int rollno){
            this->name = name;
            this->rollno = rollno;
        }

        void showData(){
            cout<<"name: "<<name<<"  rollno: "<<rollno<<endl;
        }

};
int main(){
    Student s[3];
    s[0].setData("Angshu", 21);
    s[1].setData("billa", 1);
    s[2].setData("anon", 2);

    for(int i=0;i<3;i++){
        s[i].showData();
    }
    
    return 0;
}
