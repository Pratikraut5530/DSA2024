#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    public:
    int weight;
    int height;
    char *name;

    public:
    Hero(){
        cout<<"Constructor Called"<<endl;
        name = new char[100];
    }

    // Hero(Hero &temp){
    //     //shallow copy
    //     cout<<"Copy Constructor Called"<<endl;
    //     this -> weight = temp.weight;
    //     this -> height = temp.height;
    //     this -> name = temp.name;
    // }

    //deep copy
    Hero(Hero &temp){
        cout<<"Copy Constructor called"<<endl;
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);

        this -> weight = temp.weight;
        this -> height = temp.height;
        this -> name = ch;
    }


    void setweight(int weight){
        this->weight = weight;
    }
    void setheight(int height){
        this->height = height;
    }
    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<"[ "<<this->name<<" "<<this->weight<<" "<<this->height<<" ]"<<endl;
    }
};

int main()
{
    Hero h1;
    h1.setweight(70);
    h1.setheight(150);
    char name[7] = "Pratik";
    h1.setName(name);

    h1.print();

    Hero h2(h1); //copy constructor called
    h2.print();

    h1.name[0]='A';
    h1.print();

    h2.print();

    return 0;
}