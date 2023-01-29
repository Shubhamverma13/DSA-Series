#include<bits/stdc++.h>
using namespace std;
// jagged 2d array
int main()
{

    int n;
    cin >> n;

    int ** arr = new int* [n]; // n number of rows

    // jagged array is a 2d array in which ith row has i number of columns (1 based indexing) 
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[i+1];
    }

    // Input

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cin >> arr[i][j] ;
            // OR  cin >> *(*(arr+i)+j) ;
        }
    }
    
    cout << "============= " << endl;
    // print

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i+1; j++)
        {
            cout << arr[i][j] << " " ;
            // OR  cout <<  *(*(arr+i)+j) << " " ;
        }
        cout << endl;
    }    

    
    // memory free

    for (int i = 0; i < n; i++)
    {
        delete []arr[i];
    }

    delete []arr;
}