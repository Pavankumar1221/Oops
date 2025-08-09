#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void speak(){
        cout<<"Speaking"<<endl;
    }

};

class Dog:public Animal{




};

class labdour:public Dog{

};

int main(){

    Dog d;
    d.speak();

    labdour l;
    l.speak();

    return 0;
}