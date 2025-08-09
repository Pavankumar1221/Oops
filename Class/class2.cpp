#include<iostream>
using namespace std;

class Hero{

    public:
        int number=10;
        
    void print(){
        cout<<"Hello"<<endl;
    }
};

int main(){

    Hero h1;
    cout<<h1.number<<endl;
    h1.print();
    return 0;
}