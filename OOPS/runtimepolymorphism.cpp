#include<iostream>
using namespace std;
//dynamic polymorphism
//method overriding

class Animal{
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
    Dog obj;
    obj.speak();
    return 0;
}