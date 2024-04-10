#include<iostream>
using namespace std;

class Hero{
    public:
    //virtual function is always declared in the base class
    virtual void print(){
        cout<<"Base Class"<<endl;
    }
};

class Villan:public Hero{
    public:
    void print(){
        cout<<"Derived Class"<<endl;
    }
};

int main()
{   
    Villan v1;  
    
    Hero * h1 = &v1; //pointer to the object of the derived class

    h1->print();

    return 0;
}