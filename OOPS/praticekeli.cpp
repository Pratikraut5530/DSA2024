#include<iostream>
using namespace std;

class Animal{
    public:
    void speaking(){
        cout<<endl;
        cout<<"In Class Animal"<<endl;
        cout<<"Animal Speaking"<<endl;
        cout<<endl;
    }
};

class Dog:public Animal{
    //simple inheritance and also an example of methood overiding
    
    public:
    void speaking(){
        cout<<"In Class Dog"<<endl;
        cout<<"Dog Barking"<<endl;
    }
};

class GermanShepherd:public Dog{
    //multilevel inheritance
    public:
    void print(){
        cout<<"In Class German Shepherd"<<endl;
    }
};

class Cat:public Animal{
    //multiple inheritance
    public:
    void print(){
        cout<<"In Class Cat"<<endl;
    }
};

int main()
{
    Animal a1;
    a1.speaking();

    Dog d1;
    d1.speaking();

    Cat c1;
    c1.speaking();

    GermanShepherd gs1;
    gs1.speaking();
    return 0;
}