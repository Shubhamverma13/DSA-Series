#include<iostream>
using namespace std;
void update(int& n){//int n -> see defirrence
    n++;
}

int main()
{
    int n = 5;
    cout<<"Before" << n << endl;
    update(n);
    cout<<"after" << n << endl;
}