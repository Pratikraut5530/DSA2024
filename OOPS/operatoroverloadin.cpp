#include<iostream>
using namespace std;

class Hero{
    public:
    int height;
    int weight;

    void operator+(Hero &temp){
        int value2 = this->height;
        int value1 = temp.height;
        cout<<"Substraction is : "<<value2-value1<<endl;
    }
};

int main()
{
    Hero h1,h2;
    h1.height = 150;
    h2.height = 120;

    h1 + h2;

    return 0;
}