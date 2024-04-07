#include<iostream>
using namespace std;

class Hero{
    private:
    int height=20;
    friend class Helper;
};

class Helper{
    public:
    //argument is passed as copy constructor thing so that it can access the members of base class
    void print(Hero &t){
        cout<<t.height<<endl;
    }
};

int main()
{
    Hero h;
    Helper h1;
    h1.print(h);
    return 0;
}