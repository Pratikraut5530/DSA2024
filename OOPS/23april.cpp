#include<iostream>
#include<string.h>
+
using namespace std;

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
        cout<<"German Shepherd Speaking"<<endl;
    }
};

class Cat:public Animal{
    public:
    void speaking(){
        cout<<"Cat Meowing"<<endl;
    }
};

class Hero{
    public:
    int height;
    int weight;
    char* name;

    public:
    Hero(){
        cout<<"Constuctor Called"<<endl;
        name = new char[100];
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
        cout<<"[ "<<this->height<<" "<<this->weight<<" ]"<<endl;
    }
};



int main()
{
    Animal* a1 = new GermanShepherd();
    a1->speaking();

    // Hero h1;
    // h1.setHeight(150);
    // h1.setWeight(50);

    // h1.print();


    // return 0;
}