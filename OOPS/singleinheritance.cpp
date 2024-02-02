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
    public:
    void speak(){
        cout<<"Barking"<<endl;
    }
};

int main()
{
    Animal d;
    d.speak();
    return 0;
}