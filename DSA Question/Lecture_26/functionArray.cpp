#include<iostream>
using namespace std;

int print(int *p){
    cout<< *p << endl;
   
}

void update(int *p) {
    //p = p + 1;

    //cout<<p<<endl;//update

    *p = *p + 1;
}


int main()
{
    int value = 5;
    int *p = &value;

    //print(p);

    cout<<"Before  " << *p << endl;
    update(p);
    cout<<"after  " << *p << endl;

    return 0;
}