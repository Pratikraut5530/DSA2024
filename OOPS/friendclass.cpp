#include<iostream>
using namespace std;

class Hero{
    private:
    int height=20;
    friend class Helper;
};

class Helper{
    public:
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