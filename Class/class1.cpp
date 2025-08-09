#include <iostream>
using namespace std;

class Hero{
    int health;
    char ch[100];
};


int main(){

    Hero h1;
    cout<<"Size of the class is: "<<sizeof(h1)<<endl;

    return 0;
}