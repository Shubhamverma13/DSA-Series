#include<iostream>
using namespace std;

void sayDigit(int n, string arr[]){
    //base case

    if(n==0){
        return;
    }

    int digit = n % 10;
    n = n / 10;

    sayDigit(n,arr);

    cout << arr[digit] << " ";
}
int main()
{
    string arr[] = {"zero","one","two","three","four","five","six","seven","eight","nine"};

    int n;
    cin>>n;

    cout<< endl << endl << endl;
    sayDigit(n,arr);
    cout<< endl << endl << endl;
}