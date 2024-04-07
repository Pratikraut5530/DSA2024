#include<iostream>
using namespace std;

class Person{
    private:
    int id=22;

    public:
    void speaking(){
        cout<<"I am a person"<<endl;
    }

    //function overriding + overloading
    //compile time abd run time polymorphism
    //inheriance
    int add(int a, int b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }

    friend class Animal;
};

class Animal{
    public:
    void printid(Person &t){
        cout<<"Id of person is :  "<< t.id <<endl;
    }
};

class Hero:public Person{
    public:
    void speaking(){
        cout<<"I am Hero"<<endl;
    }
};

class Villan: public Person{
    public:
    void speaking(){
        cout<<"I am Villan"<<endl;
    }
};

int main()
{
    Hero h1;
    h1.speaking();

    Villan v1;
    v1.speaking();

    cout<<"Calling function from derived class Hero"<<endl;
    h1.Person::speaking();

    cout<<"Addition of two numbers is " << h1.add(5,4) <<endl;

    cout<<"Addition of three numbers is "<< h1.add(5,4,5) << endl;

    Animal a1;
    a1.printid(h1);

    return 0;
}