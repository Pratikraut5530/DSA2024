#include<iostream>
using namespace std;

class Main{
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
    Main m1;
    cout<<"Addition of two numbers is: "<<m1.add(3,4)<<endl;
    cout<<"Addition of three numbers is: "<<m1.add(3,4,2)<<endl;

    return 0;
}