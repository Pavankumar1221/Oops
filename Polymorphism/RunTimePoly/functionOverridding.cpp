#include<iostream>
using namespace std;

class Animal{
    public:
    void speak(){
        cout<<"Speaking."<<endl;
    }
};

class Dog:public Animal{
    public:
    void speak(){
        cout<<"Dog is barking."<<endl;
    }
};


int main(){


    Dog d;
    d.speak();

    return 0;
}