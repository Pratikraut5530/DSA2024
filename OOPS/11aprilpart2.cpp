#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    public:
    int height;
    int weight;
    char *name;

    friend class Villan;

    public:
    Hero(){
        cout<<"Constructor Called"<<endl;
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
        cout<<"Copy Constructor Called"<<endl;

        char *ch = new char[strlen(temp.name)+1];
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
        cout<<"[ "<<this->name<<" "<<this->height<<" "<<this->weight<<" ]"<<endl; 
    }
};

class Villan{
    public:
    void print(Hero& temp){
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

    Villan v1;
    v1.print(h1);
    return 0;
}