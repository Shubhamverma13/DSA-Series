#include<iostream>
using namespace std;
int main()
{
    int num = 5;

    cout<< num << endl;

    //address of Operator ->"&"

    cout<<"Address of num : " << &num << endl;

    int *ptr = &num;

    cout<<"Value is : " << *ptr << endl;

    cout<<"Address is : " << ptr << endl;

    double d = 4.3;
    double *p = &d;

    cout<<"Value is : " << *p << endl;

    cout<<"Address is : " << p << endl;

    cout<<"size of pointer is : " << sizeof(num) << endl;



}