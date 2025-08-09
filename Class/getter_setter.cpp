#include<iostream>
using namespace std;

class Hero{

    private:
        int health;

    public:
        int level;


    int getHealth(){
        return health;
    }
    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(int l){
        level = l;
    }

};

int main(){


    Hero h1;
    h1.setLevel(10);
    cout<<"The Level is: "<<h1.level<<endl;


    h1.setHealth(20);
    cout<<"The Health is: "<<h1.getHealth();

    return 0;
}