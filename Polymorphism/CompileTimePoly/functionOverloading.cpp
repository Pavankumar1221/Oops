#include<iostream>
using namespace std;

class A{

    public:
    void satHello(){
        cout<<"Hello Pavan.";
    }

    // Same function name but diff parameters
    void satHello(string name){
        cout<<"My name is: "<<name<<endl;
        cout<<"Hello Pavan.";
    }


};

int main(){

    A obj;
    obj.satHello("Pavan");
    return 0;
}