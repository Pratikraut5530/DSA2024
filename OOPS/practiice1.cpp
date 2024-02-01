#include<iostream>
#include<string.h>
using namespace std;

class Hero{
    private:
    int health; 

    public:
    char *name;
    char level;

    Hero(){
        cout<<"Simple Constructor called"<<endl;
        name = new char[100];
    }

    Hero(int health){
        this -> health = health;
    }

    Hero(int health,char level){
        this -> level = level;
        this -> health = health;
    }


    // copy construtor
    Hero(Hero& temp){

        cout<<"Copy Constructor called"<<endl;

        char *ch = new char[strlen(temp.name)+1];
        strcpy(ch,temp.name);
        this->name  = ch;
        this->health = temp.health;
        this->level = temp.level;
    }

    int getHealth(){
        return health;
    }

    char getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(char l){
        level = l;
    }

    void setName(char name[]){
        strcpy(this->name,name);
    }

    void print(){
        cout<<endl;
        cout <<"Name : "<<this->name<<endl;
        cout<<"health "<<this->health<<endl;
        cout<<"level "<<this->level<<endl;
        cout<<endl;
    }

    ~Hero(){
        cout<<"Destructor Called"<<endl;
    }
};

int main()
{
    Hero hero1;
    hero1.setHealth(12);
    hero1.setLevel('D');
    char name[7] = "Babbar";
    hero1.setName(name);
    hero1.print();

    //use default copy constructor
    Hero hero2(hero1);
    hero2.print();

    hero1.name[0] = 'G';
    hero1.print();

    hero2.print();
    
    //assignment operator
    hero1 = hero2;

    hero1.print();
    hero2.print();  

    Hero *b  = new Hero();

    delete b;

    // Hero suresh(70,'C');
    // suresh.print();

    // //copy constructor
    // Hero ritesh(suresh);
    // ritesh.print();
    // cout<<"health of ritesh : "<<ritesh.getHealth()<<endl;

    // //object created statically 
    
    // Hero ramesh(10,'A');
    // cout<<"Address of ramesh is "<<&ramesh<<endl;
    // cout<<"Health:"<<ramesh.getHealth()<<endl;
    // cout<<"Level : "<<ramesh.getLevel()<<endl;

    // //object created dynamically
    // Hero *h = new Hero;


    /*
    //static allocation
    Hero a; 
    a.setHealth(90);
    a.setLevel('B');
    cout<<"Health is : "<<a.getHealth()<<endl;
    cout<<"Level is : "<<a.level<<endl;

    //dynamic allocation
    Hero *b = new Hero;
    b->setLevel('A');
    b->setHealth(70);
    cout<<"Health is : "<<(*b).getHealth()<<endl;
    cout<<"Level is : "<<(*b).level<<endl;

    //another method
    cout<<"Health is : "<<b->getHealth()<<endl;
    cout<<"Level is : "<<b->level<<endl;
    */

    // //creating an object of class
    // Hero ramesh;
    // //accessing 
    // cout<<"Health of Ramesh is "<<ramesh.getHealth()<<endl;
    // ramesh.setHealth(80);
    // cout<<"Health "<<ramesh.getHealth()<<endl;

    // cout<<endl;
    // cout<<"Level of Ramesh is "<<ramesh.getLevel()<<endl;
    // ramesh.setLevel('B');
    // cout<<"Level "<<ramesh.level<<endl;

    return 0;
}