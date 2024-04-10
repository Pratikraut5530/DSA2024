#include<iostream>
using namespace std;
//inheritance -multiple.multilevel,simple,hybrid
//polymorphism
//compiletime polymorphism
//1.function overloading
//2.operator overloading
//runtime polymorphism - function overiding

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

class GermanShepherd:public Dog{
    public:
    void speaking(){
        cout<<"GermanShepherd barking"<<endl;
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
    Dog d1;
    d1.speaking();

    GermanShepherd gs1;
    gs1.speaking();

    gs1.Animal::speaking();

    return 0;
}