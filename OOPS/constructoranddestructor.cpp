#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    public:
    int height;
    int weight;
    char *name;

    Hero(){
        cout<<"Constuctor Called"<<endl;
        name = new char[100];
    }

    // Hero(Hero &temp){
    //     //static copy constructor
    //     cout<<"Default copy constructor"<<endl;
    //     this->weight = temp.weight;
    //     this->height = temp.height;
    //     this->name = temp.name;
    // }

    //dynamic copy constructor
    Hero(Hero &temp){
        //example of deep copy
        cout<<"Dynamic Copy constructor for deep copy"<<endl;
        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->weight = temp.weight;
        this->height = temp.height;
        this->name = ch;
    }

    void setweight(int weight){
        this -> weight = weight;
    }
    void setheight(int height){
        this->height = height;
    }
    void setname(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout<<"[ "<<this->name<<" "<<this->height<<" "<<this->weight<<" ]"<<endl;
    }

};

int main()
{
    Hero h1;
    h1.setweight(70);
    h1.setheight(150);
    char name[7]="Pratik";
    h1.setname(name);

    h1.print();
    
    //shallow copy
    Hero h2(h1);
    h2.print();

    h1.name[0]='A';
    h1.print();

    h2.print();

    return 0;
}