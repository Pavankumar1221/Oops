#include<iostream>
using namespace std;

class Animal{

    public:
    int age;
    int weight;

    public:
    void bark(){
        cout<<"Barking"<<endl;
    }

};

class Human{
    public:
    string color;

    public:
    void speak(){
        cout<<"Speaking";
    }
};

class multilevel:public Animal, public Human{

};


int main(){

    multilevel obj1;
    obj1.speak();
    cout<<endl;
    obj1.bark();

    return 0;
}