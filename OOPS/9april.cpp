#include<iostream>
using namespace std;
//single inheritance
//multiple inheritance
//multiple inheritance
//multilevel inheritance
//polymorphism
//compile time polymorphism
//1.Function overloading
//2.operator overloading
//run time polymorphism
//1.Function overriding

class Animal{
    public:
    void speaking(){
        cout<<"Animal Speaking"<<endl;
    }

    int add(int a,int b){
        return a+b;
    }

    void print();
};

class Dog:public Animal{
    public:
    void speaking(){
        cout<<"Dog Barking"<<endl;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }
};

class GermanShepherd:public Animal{
    public:
    void speaking(){
        cout<<"GermanShepherd Barking"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speaking(){
        cout<<"Cat Meowing"<<endl;
    }
};

//defining a function outside the class
void Animal::print(){

};

struct Hero{
    int weight=70;
};


int main()
{
    Animal a1;

    Dog d1;
    d1.speaking();

    Cat c1;
    c1.speaking();

    GermanShepherd gs1;
    gs1.speaking();

    cout<<"Addition of two numbers is : "<<a1.add(5,4)<<endl;
    cout<<"Addition of two numbers is : "<<d1.add(5,4,5)<<endl;

    Hero h1;
    cout<<"Weight of Hero is " <<h1.weight<<endl;

    return 0;
}