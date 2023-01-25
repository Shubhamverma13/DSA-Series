
//Double pointer


#include<iostream>
using namespace std;
int main()
{
    int a = 10;

    int *p = &a;

    int **q = &p;//double pointer

    // cout<<"The value of a : " << a << endl;
    // cout<<"The address of a : " << &a << endl;

    // cout<<p<<endl;//this gives us address of a;

    // cout<<*p<<endl;//this gives us value stored at p pointer;

    // cout<<*q<<endl;//give us address of p

    /*Next three statements will print same value i.e. address of a */

    cout << &a << endl;
    cout << p << endl;
    cout << *q << endl;

    /*Next two statements will print same value i.e. address of p */
    
    cout << &p << endl;
    cout << q << endl;

    /*Next three statements will print same value i.e. value of a */

    cout << a << endl;
    cout << *p << endl;
    cout << **q << endl;

    return 0;    

}