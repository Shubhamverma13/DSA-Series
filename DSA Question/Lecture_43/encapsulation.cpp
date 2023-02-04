#include<iostream>
using namespace std;

class Student{

    private:
    string name;
    int age;
    float height;

    public:
    int gateAge(){
        return this -> age;
    }


};

int main()
{

    cout<<"Sab sahi chal rha h " << endl;
    
    return 0;
}