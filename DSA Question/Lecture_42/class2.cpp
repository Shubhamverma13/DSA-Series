#include<iostream>
using namespace std;


class Hero{
    //by default access modifier is private
    public:
    int health;
    char level;
    
};

int main()
{

    Hero ramesh;

    //why size is 1 Byte 
    
    //for access we use dot(.) operator

   // cout << " Size -> " << sizeof(ramesh) << endl;

   //initializing value

   ramesh.health = 70;
   ramesh.level = 'A';


   //printing value

   cout<<"Health is : " << ramesh.health << endl;
   cout<<"Level is : " << ramesh.level << endl;



    return 0;
}