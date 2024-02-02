#include<iostream>
using namespace std;

class A{
    public:
    void sayHello(){
        cout<<"Hello Pratik Raut"<<endl; 
    }

    void sayHello(string name){
        cout<<"Hello "<<name<<endl; 
    }
};



int main()
{
    //fuction overloading
    A obj;
    obj.sayHello("Raut Pratik");
    return 0;
}