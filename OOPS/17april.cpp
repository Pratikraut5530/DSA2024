#include<iostream>
using namespace std;
//polymorphism
//compile time polymorphism - 1.function overloading 2.operator overloading
//run time polymorphism - function overriding
//inheritance - single,multiple,multilevel,hybrid

class Animal{
    public:
    void speaking(){
        cout<<"Animal Speaking"<<endl;
    }
};

class Dog:public Animal{
    public:
    void speaking(){
        cout<<"Dog Speaking"<<endl;
    }
};

class GermanShepherd:public Dog{
    public:
    void speaking(){
        cout<<"German Shepherd Barking"<<endl;
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
    d1.speaking();

    GermanShepherd gs1;
    gs1.speaking();
    gs1.Animal::speaking();

    Cat c1;
    c1.speaking();

    return 0;
}