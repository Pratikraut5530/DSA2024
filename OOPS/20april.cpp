#include<iostream>
#include<string.h>
using namespace std;
//all in one

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

class GermanShepherd:public Animal{
    public:
    void speaking(){
        cout<<"German Shepherd Barking"<<endl;
    }
};

class Cat: public Animal{
    public:
    void speaking(){
        cout<<"Cat Meowing"<<endl;
    }
};

class Hero{
    public:
    int height;
    int weight;
    char *name;

    public:
    Hero(){
        cout<<"Constructor Called"<<endl;
        name = new char[100];
    }

    // Hero(Hero &temp){
    //     cout<<"Copy Constuctor Called"<<endl;
    //     this->height = temp.height;
    //     this->weight = temp.weight;
    //     this->name = temp.name;
    // }

    Hero(Hero &temp){
        cout<<"Copy Constructor Called"<<endl;
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);

        this->weight = temp.weight;
        this->height = temp.height;
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
        cout<<"[ "<<this->name<<" "<<this->weight<<" "<<this->height<<" ]"<<endl;
    }

    friend class Villan;
};

class Villan{
    public:
    void displayHeight(Hero &temp){
        int height_villan = temp.height + 20;
        cout<<"Height of villan  : "<<height_villan<<endl;
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

    Hero h1;
    h1.setHeight(150);
    h1.setWeight(70);
    char name[7]="Pratik";
    h1.setName(name);

    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0]= 'A';
    h1.print();

    h2.print(); 

    Villan v1;
    v1.displayHeight(h1);
    

    return 0;
}