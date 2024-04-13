#include<iostream>
using namespace std;
//inheritance muliple multilevel hybird hierachical
//polymorphism - compile time polymorphism(function overloading,operator overloading)
//runtime - function overriding

class Animal{
    public:
    void speaking(){
        cout<<"I am Animal"<<endl;
    }
    
};

class Dog:public Animal{
    public:
    void speaking(){
        cout<<"I am Dog"<<endl;
    }
};

class GermanShepherd:public Dog{
    public:
    void speaking(){
        cout<<"I am GermanShepherd"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speaking(){
        cout<<"I am Cat"<<endl;
    }
};


int main()
{
    Animal a1;
    
    Dog d1;
    d1.speaking();

    GermanShepherd gs1;
    gs1.speaking();

    gs1.Animal::speaking();

    Cat c1;
    c1.speaking();

    return 0;
}