#include<iostream>
using namespace std;


int largestSum(int arr[][4], int m, int n){
    int maxi = INT_MIN;
    int rowIndex = -1;
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum = sum + arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex=i;
        }
    }

    cout<<"The maximum sum is " << maxi << endl;
    return rowIndex;
}

void rowSum(int arr[][4], int m, int n){
    for(int i = 0; i < m; i++){
        int sum = 0;
        for(int j = 0; j < n; j++){
            sum = sum + arr[i][j];
        }
        cout<<"Row sum is " << endl;
        cout<<"->" << sum << endl;
    }
}

int main()
{
    int arr[3][4];
    cout<<"Enter Your array elements : "<<endl;
    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cin>>arr[i][j];
        }
    }
    cout<<"Your array is : " <<endl;
    for(int i = 0 ; i < 3; i++){
        for(int j = 0; j < 4; j++){
            cout<<arr[i][j]<<" ";
        }cout<<endl;
    }

    rowSum(arr,3,4);

    int ansIndex = largestSum(arr,3,4);
    
    cout<<"Present at index" << ansIndex << endl;
}