#include<iostream>
using namespace std;
//compile time polymorphism

class A{
    public:
    int add(int a,int b){
        return a+b;
    }

    int add(int a,int b,int c){
        return a+b+c;
    }

};

int main()
{
    A a;
    cout<< "Addition is : " << a.add(5,10) << endl;
    cout<< "Addition is : " << a.add(5,10,5);

    return 0;
}