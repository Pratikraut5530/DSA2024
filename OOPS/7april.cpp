#include<iostream>
using namespace std;

class Animal{
    private:
    int animal_id=21;

    public:
    friend class Animal2;

    public:
    void speaking(){
        cout<<"Animal Speaking"<<endl;
    }
};

class Animal2{
    public:
    void printid(Animal &temp){
        cout<<temp.animal_id<<endl;
    }
};

class Dog:public Animal{
    public:
    void speaking(){
        cout<<"Dog Barking"<<endl;
    }

    // void printid(){
    //     cout<<this->animal_id<<endl;
    // }
};

class Cat:public Animal{
    public:
    void speaking(){
        cout<<"Cat Meowing"<<endl;
    }
};

class GermanShepherd:public Dog{
    public:

};

int main()
{
    Animal a;
    Animal2 a1;
    a1.printid(a);
    return 0;
}