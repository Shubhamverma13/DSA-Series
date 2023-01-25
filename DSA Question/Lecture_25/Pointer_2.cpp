#include<iostream>
using namespace std;
 int main()
{
    //pointer to int is created, and pointing to some garbage
    // int *p = 0;//int *p = 0;

    // cout<< *p << endl;

    int num = 5;
    int a = num;
    cout << "a before " << num <<endl;
    a++;
    cout << "a after " << num <<endl;

    

    int *p = &num;
    cout << "before " << num <<endl;
    (*p)++;
    cout << "after " << num <<endl;

    //copying a pointer

    int *q = p;
    cout << p << " - " << q << endl;

    cout << *p << " - " << *q << endl;

    //important concept
    int i = 3;
    int *t = &i;

    //cout << (*t)++ << endl;

    *t = *t + 1;

    cout<<" before t " << t << endl;

    t = t + 1;

    cout << " after t " << t << endl;

    // int i = 10;
    // int *p;
    // p = &i;

    // cout<<p<<endl;
    // cout<<&p<<endl;





}