//Vector is dynamic array 
//when we clear vector using vclear operation then in this case size of vector will be zero but capacity will not be zero
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;//initialize with 0;

    //vector<int> a(5,1) -> size of vector a is 5 and initially we initialize all vector with the value of 1;

    //vector<int> last(a) -> copying all data of a into last vector;

    

    cout<<"Capacity -> "<<v.capacity()<<endl;

    v.push_back(1);
    cout<<"Capacity -> "<<v.capacity()<<endl;

     v.push_back(2);
    cout<<"Capacity -> "<<v.capacity()<<endl;

     v.push_back(3);
    cout<<"Capacity -> "<<v.capacity()<<endl;
    cout<<"Size -> "<<v.size()<<endl;

    cout<<"Element at index 2 : "<<v.at(2)<<endl;

    cout<<"Front" <<v.front()<<endl;
    cout<<"Back" <<v.back()<<endl;

    cout<<"Before pop" <<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    v.pop_back();

    cout<<"After pop" <<endl;
    for(int i:v){
        cout<<i<<" ";
    }cout<<endl;

    cout<<"Before clear size "<<v.size()<<endl;
    v.clear();
    cout<<"After clear size "<<v.size()<<endl;

}