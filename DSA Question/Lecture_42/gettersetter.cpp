#include<iostream>
using namespace std;


class Hero{
    //by default access modifier is private
    private:

    int health;
    char level;


    public:
    

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

   Hero ramesh;

   ramesh.setHealth(70);
   ramesh.setLevel('A');

   //printing value

   cout<<"Health is : " << ramesh.getHealth() << endl;
   cout<<"Level is : " << ramesh.getLevel() << endl;



    return 0;
}