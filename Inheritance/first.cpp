#include <iostream>
using namespace std;

class Human
{

public:
    int height;
    int weight;
    int age;

public:
    int getAge()
    {
        return this->age;
    }
    void setWeight(int w)
    {
        weight = w;
    }
};

class Male : public Human
{

private:
    string color = "Green";

public:
    void sleep()
    {
        cout << "male is sleeping.";
    }

    string getColor()
    {
       return this->color;
    }

    int getHeight()
    {
        return this->height;
    }
};

int main()
{

    Male m1;
    // cout<<m1.height<<endl;
    m1.getHeight();
    m1.sleep();
    cout<<m1.getColor()<<endl;

    // Male obj1;
    // // all properties of Human are accessed from male class
    // cout<<obj1.age<<endl;
    // cout<<obj1.weight<<endl;
    // cout<<obj1.height<<endl;
    // cout<<obj1.color<<endl;
    // obj1.sleep();

    return 0;
}