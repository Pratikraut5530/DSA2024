#include<iostream>
#include<string.h>
using namespace std;

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

    Hero(int height,int weight,char name[]){
        cout<<"Constructor Called"<<endl;
        this->height = height;
        this->weight = weight;
        strcpy(this->name,name);
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
    
    // Hero(Hero& temp){
    //     cout<<"Copy constructor called"<<endl;
    //     this->height = temp.height;
    //     this->weight = temp.weight;
    //     this->name = temp.name;
    // }

    Hero(Hero& temp){
        cout<<"Copy constructor called"<<endl;

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this -> name = ch;
        this->height = temp.height;
        this->weight = temp.weight;
    }

    void print(){
        cout<<endl;
        cout<<"Height is : "<<this->height<<endl;
        cout<<"Weight is : "<<this->weight<<endl;
        cout<<"Name is : " <<this->name<<endl;
        cout<<endl;
    } 

    ~Hero(){
        cout<<"Destructor called"<<endl;
    }
};


int main()
{

    Hero h1;
    h1.setHeight(160);
    h1.setWeight(75);
    char name[7]= "Pratik";
    h1.setName(name);     
    h1.print();

    Hero h2(h1);
    h2.print();

    h1.name[0] ='A';
    h1.print();

    h2.print();

    return 0;
}