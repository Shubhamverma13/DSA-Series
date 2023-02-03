#include<iostream>
using namespace std;

class Hero{
    //properties
    int health;
    char level;

};
int main()
{
    //creating object of our class

    Hero ramesh;

    //why size is 8 Bytes, whereas size of int is 4 and char is 1 bytes
    

    cout <<"Size -> " << sizeof(ramesh) << endl;

    return 0;
}