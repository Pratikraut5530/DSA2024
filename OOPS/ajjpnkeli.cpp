#include<iostream>
using namespace std;
//inheritance and polymorphism
//function overriding - run time polymorphism

class Animal{
    public:
    void speaking(){
        cout<<"Animal Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speaking(){
        cout<<"Dog Barking"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speaking(){
        cout<<"Cat Meowing"<<endl;
    }
};

int main()
{
    Animal a1;
    a1.speaking();

    Dog d1;
    d1.speaking(); // this function will call speaking of the derived class Dog
    d1.Animal::speaking(); //this function will call speaking of the base class 

    Cat c1;
    c1.speaking();
    return 0;
}