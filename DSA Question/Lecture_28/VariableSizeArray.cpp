#include<iostream>
using namespace std;

int arraySum(int *arr,int n){
    int sum = 0;
    for(int i = 0; i < n; i++){
        sum += arr[i];
    }
    return sum;
}
int main()
{
    int n;
    cin>>n;

    //variable size array;

    int *arr = new int[n];

    for(int i = 0; i < n; i++){
        cin>>*(arr + i);
    }

    int ans = arraySum(arr,n);

    cout<<"Sum is : " << ans << endl;

}