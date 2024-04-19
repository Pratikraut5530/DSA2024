#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    public:
    int height;
    int weight;
    char* name;

    public:
    Hero(){
        cout<<"Constructor Called"<<endl;
        name = new char[100];
    }

    // Hero(Hero &temp){
    //     cout<<"Copy Constructor Called"<<endl;
    //     this->height = temp.height;
    //     this->weight = temp.weight;
    //     this->name = temp.name;
    // }

    Hero(Hero &temp){
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
        cout<<"[ "<<this->name<<" "<<this->weight<<" "<<this->height<<" ]"<<endl;
    }

    friend class Villan;

    void operator+(Hero &temp){
        int value2 = this->height;
        int value1 = temp.height;
        cout<<"Substraction is : "<<value2-value1<<endl;
    }

};

class A{
    public:
    void displayHeight(Hero &temp){
        cout<<temp.height<<endl;
    }
};


int main()
{
    Hero h1;
    h1.setHeight(150);
    h1.setWeight(70);
    char name[7] = "Pratik";
    h1.setName(name);

    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0]='A';
    h1.print();
    
    h2.print();

    A a1;
    a1.displayHeight(h1);
    return 0;
}