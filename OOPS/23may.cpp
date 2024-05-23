#include<iostream>
#include<string.h>
using namespace std;
//inheritance - single,multiple,multilevel,hybrid
//polymorphism - 1.run time polymorphsim - function overloading
//2. compile time polymorphism - function overloading,operator overloading

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
    int value;

    void operator+(Math& temp){
        int value2 = this->value;
        int value1 = temp.value;
        cout<<"Substraction of two numbers is : "<<value2-value1<<endl;
    }
    
    int add(int a,int b){
        cout<<"Addition of two numbers is : "<<a+b<<endl;
    }

    int add(int a,int b,int c){
        cout<<"Addition of three numbers is : "<<a+b+c<<endl;
    }
};

//shallow copy deep copy
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

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void setHeigth(int height){
        this->height = height;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    void print(){
        cout<<"[ "<<this->name<<" "<<this->weight<<" "<<this->height<<" ]"<<endl;
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
    // gs1.Dog::speaking();
    // gs1.Animal::speaking();

    // Cat c1;
    // c1.speaking();

    // Math m1,m2;
    // m1.add(3,4);
    // m1.add(3,4,3);

    // m1.value = 200;
    // m2.value = 100;
    // m1+m2;

    Hero h1;
    h1.setWeight(70);
    h1.setHeigth(150);
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