#include<bits/stdc++.h>
using namespace std;

void print(int arr[], int n, int start = 0){//see defult argument start

    for(int i = start; i < n; i++){
        cout << arr[i] << endl;
    }

}

int main()
{
    int arr[5] = {1,2,3,4,5};
    int size = 5;

    print(arr,size);
    cout<<endl;
    print(arr,size,2);

    return 0;
}