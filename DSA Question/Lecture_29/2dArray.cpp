// create with same coloumn and row

#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    //creating a 2d array
    int **arr = new int *[n];
    for(int i = 0; i<n; i++){
        arr[i] = new int[n];
    }

    //creation done

    //taking input
    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cin >> arr[i][j];
        }
    }
    //taking output
    for(int i = 0; i <n; i++){
        for(int j = 0; j < n; j++){
            cout<< arr[i][j]<<" ";
        }cout<<endl;
    }



}