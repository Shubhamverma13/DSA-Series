#include<iostream>//Stack -> LIFO
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("Shubham");
    s.push("Kumar");
    s.push("Verma");

    cout<<"Top element -> "<<s.top()<<endl;

    s.pop();
    cout<<"Top element -> "<<s.top()<<endl;

    cout<<"Size of stack"<<s.size()<<endl;

    cout<<"Empty or Not"<<s.empty()<<endl;


    
}