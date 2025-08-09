#include<iostream>
using namespace std;


class Animal{
    public:
    void bark(){
        cout<<"Barking."<<endl;
    }
};

class dog:public Animal{


};

class lion:public Animal{

};


int main(){

    dog d;
    d.bark();

    lion l;
    l.bark();

    return 0;
}