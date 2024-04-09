#include<iostream>
#include<string.h>
using namespace std;
//deep copy
//shallow copy
//constructor destructor copy constructor

class Hero{
    public:
    int height;
    int weight;
    char *name;


    public:
    Hero(){
        cout<<"Construtor Called"<<endl;
        name = new char[100];
    }

    // Hero(Hero &temp){
    //     //shallow copy
    //     cout<<"Copy Constructor Called"<<endl;
    //     this->height = temp.height;
    //     this->weight = temp.weight;
    //     this->name = temp.name;
    // }

    Hero(Hero &temp){
        //deep copy 
        char* ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);

        this->height = temp.height;
        this->weight = temp.weight;
        this->name = ch;
    }
    

    public:
    void setHeight(int height){
        this->height = height;
    }

    void setWeight(int weight){
        this->weight = weight;
    }

    void setName(char name[]){
        this->name = name;
    }

    void print(){
        cout<<"[ "<<this->name<<" "<<this->height<<" "<<this->weight<<" ]"<<endl;
    }

    ~Hero(){
        cout<<"Destuctor Called CPU Memory freed"<<endl;
    }

};

int main()
{   
    Hero h1;
    h1.setHeight(150);
    h1.setWeight(70);
    char name[7]="Pratik";
    h1.setName(name);

    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'A';
    h1.print();

    h2.print();
}