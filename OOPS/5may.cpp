#include<iostream>
#include<string.h>
using namespace std;
//inheritance - single,multilevel,multiple,hybrid
//polymorphism - runtime polymorphism : function overriding
//comiple time polymorphism - 1.function overloading 2.operator overloading

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
        cout<<"German Shepherd Barking"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speaking(){
        cout<<"Cat Meowing"<<endl;
    }
};

class Math{
    public:
    int num1;
    public:
    void add(int a,int b){
        cout<<"Addition of Two NUmbers is : "<<a+b<<endl;
    }

    void add(int a,int b,int c){
        cout<<"Addition of Three Number is : "<<a+b+c<<endl;
    }

    void operator+(Math& temp){
        int value1 = temp.num1;
        int value2 = this->num1;
        cout<<"Substraction of Two Numbers is : "<<value2-value1<<endl;
    }
};

class Hero{
    private:
    int height;
    int weight;

    public:
    char* name;

    Hero(){
        cout<<"Constructor Called"<<endl;
        name = new char[100];
    }

    // Hero(Hero& temp){
    //     cout<<"Copy Constructor Called"<<endl;

    //     this->height = temp.height;
    //     this->weight = temp.weight;
    //     this->name = temp.name;
    // }

    Hero(Hero& temp){
        cout<<"Copy Constructor Called"<<endl;

        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);

        this->height = temp.height;
        this->weight = temp.weight;
        this->name = ch;
    }

    void setHeight(int height){
        this->height = height;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"[ "<<this->name<<" "<<this->height<<" "<<this->weight<<" ]"<<endl;
    }
};


int main()
{
    // Animal a1;
    // a1.speaking();

    // Dog d1;
    // d1.speaking();

    // GermanShepherd gs1;
    // gs1.speaking();
    // gs1.Animal::speaking();

    // Cat c1;
    // c1.speaking();

    // Math m1,m2;
    // m1.add(5,7);
    // m1.add(5,7,3);

    // m1.num1 = 200;
    // m2.num1 = 100;

    // m1 + m2;

    Hero h1;
    h1.setHeight(150);
    h1.setWeight(70);
    char name[7] = "Pratik";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'A';
    h1.print();

    h2.print();

    return 0;
}