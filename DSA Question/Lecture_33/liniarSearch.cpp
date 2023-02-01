#include<iostream>
using namespace std;

bool liniarSearch(int arr[], int size, int k){
    // base case
    if(size == 0);
        return false;

    if(arr[0] == k){
        return true;
    }
    else {
        bool remainingPart = liniarSearch(arr+1 , size-1 , k);
        return remainingPart;
    }
}

int main()
{
    int arr[5] = { 3,5,1,2,6};
    int size = 5;
    int key = 1;

    int  ans = liniarSearch(arr,size,key);

    if(ans){
        cout<<"Present"<<endl;

    } else {
        cout<<"Not present" << endl;
    }
}