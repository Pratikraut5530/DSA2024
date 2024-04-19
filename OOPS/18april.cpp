#include<iostream>
using namespace std;
//inheritance
//runtime polymorphism

class Animal{
    public:
    void speaking(){
        cout<<"Animal Speaking"<<endl;
    }

    friend class Bird;
};

class Bird{

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
        cout<<"German Shepherd Speaking"<<endl;
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

    Cat c1;
    c1.speaking();
    c1.Animal::speaking();

    return 0;
}