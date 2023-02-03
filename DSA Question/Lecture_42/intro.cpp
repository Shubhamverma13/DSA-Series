#include<iostream>
using namespace std;

class Hero {

    //properties
    private:
    int health;

    public:
    char level;

    Hero() {
        cout <<"Constructor called" << endl;
    }

    // Parameterised Constructor

    Hero(int health){
        health = health;
    }

    int getHealth(){
        return health;
    }

    int getLevel(){
        return level;
    }

    void setHealth(int h){
        health = h;
    }

    void setLevel(int ch){
        level = ch;
    }

};

int main(){

//     Hero ramesh;

//     cout<<"Ramesh health is " << ramesh.getHealth() << endl;
//     ramesh.setHealth(70);
//     ramesh.level = 'A';
//     cout<<"Ramesh health is " << ramesh.getHealth() << endl;

//    // cout<<" Health is " << ramesh.health << endl;


//     cout<< " Level is " << ramesh.level << endl;


    //static allocation

    // Hero a;
    // a.setHealth(80);
    // a.setLevel('8');
    // cout << "level is " << a.level << endl;
    // cout << " health is " << a.getHealth() << endl;

    // //dynamically
    // Hero *b = new Hero;
    // b->setLevel('A');
    // b->setHealth(70);

    // cout << " level is " << (*b).level << endl;
    // cout << " health is " << (*b).getHealth() << endl;

    // cout << " level is " << b->level << endl;
    // cout << " health is " << b->getHealth() << endl;

    Hero ramesh;

    Hero *h = new Hero;

}