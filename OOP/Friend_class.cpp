#include<iostream>
using namespace std;
class Secret{
    private:
        int data;
    
    public:
        Secret(int data){
            this->data = data;
        }

    friend class Viewer;
};

class Viewer{
    public:
    void reveal(Secret s){
        cout<<"so the secret is: "<<s.data<<endl;
    }
};

int main(){
    Secret s(1);
    Viewer v;
    v.reveal(s);

    return 0;
}