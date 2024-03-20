#include<iostream>
using namespace std;

int add1(int a,int b){
    return a+b;
}

int add2(int *a,int *b){
    return *a+*b;
}

int add3(int &a,int &b){
    return a+b;
}

//creating array dynamically using malloc function
int* createArr(int n){
    int *arr = (int*)(malloc(n*sizeof(int)));
    return arr;
}

int main()
{
    int a = 20;
    int c = 30;

    int *b = &a;
    int *d = &c;

    
    cout<<"Value of a is : "<< a << endl;
    cout<<"Address of a is : "<< &a <<endl;
    cout<<"Address stored in pointer b is "<< b <<endl;
    cout<<"Value at pointer b is "<< *b << endl;

    cout<<"Addition by pass by value is : "<<add1(a,c)<<endl;
    cout<<"Addition by pass by pointers is : "<<add2(b,d)<<endl;
    cout<<"Addition by pass by reference is : "<<add2(&a,&c)<<endl;

    int *ptr = createArr(10);

    return 0;
}