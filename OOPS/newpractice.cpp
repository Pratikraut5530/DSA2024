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

    Hero(Hero &temp){
        cout<<"Copy Constructor called"<<endl;

        char *tp = new char[strlen(temp.name)+1];
        strcpy(tp,temp.name);
        this->weight = temp.weight;
        this->height = temp.height;
        this->name = tp;
    }

    void setWeight(int weight){
        this->weight = weight;
    }
    
    void setHeight(int height){
        this->height = height;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<<"[ ";
        cout<<this->weight<<", ";
        cout<<this->height<<", ";
        cout<<this->name<<" ]"<<endl;
        cout<<endl;
    }
};

int main()
{
    Hero h1;
    h1.setWeight(70);
    h1.setHeight(150);
    char name[7] = "Pratik";
    h1.setName(name);
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] = 'A';
    h1.print();

    cout<<"Deep Copy"<<endl;
    h2.print();

    return 0;
}