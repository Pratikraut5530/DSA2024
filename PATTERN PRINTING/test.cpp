#include<iostream>
using namespace std;
int main()
{
    char ch;
    cin>>ch;

    if(ch >=65 && ch <=90){
        cout<<"Charater is in Upper Case"<<endl;
    }
    else if(ch>=97 && ch <= 122){
        cout<<"Character is in Lower Case"<<endl;
    }
    else if(ch >= 48 && ch <= 57){
        cout<<"Character is Numeric"<<endl;
    }
    else{
        cout<<"Character is Symbolic"<<endl;
    }
    
    return 0;
}