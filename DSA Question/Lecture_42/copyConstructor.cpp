#include<iostream>
using namespace std;


class Hero{
    //by default access modifier is private
    private:

    int health;
    char level;

    

    public:

    //constructor
    Hero(){
        cout<< " Constructor Called " << endl;
    }  

    //parameterised Constructor
    Hero(int health){
        cout << " this -> " << this << endl;
        this -> health = health;
    }

    Hero(int health, char level){
        this -> level = level;
        this -> health = health;
    }

    void print(){
        cout << " health " << this -> health << endl;
        cout << " level " << this -> level << endl;
    }
    

    //getter
    int getHealth(){
        return health;
    }
    char getLevel(){
        return level;
    }
    //setter

    void setHealth(int h){
        health = h;
    }

    void setLevel(int ch){
        level = ch;
    }
    
};

int main()
{
    Hero suresh;
    suresh.setHealth(70);
    suresh.setLevel('C');
    // or we can use-> Hero suresh(70, 'C);

    Hero ritesh(suresh);

    ritesh.print();

    //means ritesh ka health equal hoga suresh k health k and same for level


}