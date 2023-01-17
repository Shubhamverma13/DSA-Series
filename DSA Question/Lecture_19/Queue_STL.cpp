#include<iostream>
#include<queue>
using namespace std;
int main()
{
    queue<string> q;

    q.push("Love");
    q.push("Shubham");
    q.push("Verma");

    cout<<"Size before pop "<<q.size()<<endl;

    cout<<"First element is : "<<q.front()<<endl;
    q.pop();
    cout<<"First element is : "<<q.front()<<endl;
    cout<<"Size after pop "<<q.size()<<endl;
}