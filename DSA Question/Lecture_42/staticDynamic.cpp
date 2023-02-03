#include<iostream>
using namespace std;

class Hero{

    private:
    int health;
    char level;

    public:

    int getHealth() {
        return health;
    }
    char getLevel() {
        return level;
    }

    void setHealth(int h){
        health = h;
    }
    void setLevel(int ch){
        level = ch;
    }


};

int main()
{
    //static allocation

    Hero a;

    a.setHealth(90);
    a.setLevel('A');
    cout<<"level is " << a.getLevel() << endl;
    cout<<"health is " << a.getHealth() << endl;




    //dynamically
    Hero *b = new Hero;
    b->setHealth(70);
    b->setLevel('A');
    cout<<"level is " << (*b).getLevel() << endl;
    cout<<"health is " << (*b).getHealth() << endl;

    //second method
    cout<<"level is " << b -> getLevel() << endl;
    cout<<"health is " << b -> getHealth() << endl;


   

    // cout << "health is " << Hero.getHealth() << endl;
    // cout << "level is " << ramesh.getLevel() << endl;

    return 0;
}