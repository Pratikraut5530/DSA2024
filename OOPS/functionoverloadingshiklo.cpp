#include<iostream>
using namespace std;

class Calc{
    public:
    int sum(int a,int b){
        return a+b;
    }

    int sum(int a,int b,int c){
        return a+b+c;
    }
    //function overloading is acheieved

};

int main()
{   
    Calc c1;
    cout<<"Addition of two numbers is : "<<c1.sum(15,15)<<endl;
    cout<<"Addition of two numbers is : "<<c1.sum(15,15,15)<<endl;
    return 0;
}