#include<iostream>
using namespace std;

class Node{

    public:
    int data;
    Node* next;

    Node (int data){
        this -> data = data;
        this -> next = NULL;
    }


};

void insertAtTail(Node* &tail, int d){
    //new node create
    Node* temp = new Node(d);
    tail -> next = tail;
    tail = temp;
}

void print(Node* &head ){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}


int main()
{
    Node* node1 = new Node(10);

    // cout << node1 -> data << endl;
    // cout << node1 -> next << endl;

    Node* tail = node1;


    insertAtTail(tail,12);

    print(tail);

    insertAtTail(tail,15);

    print(tail);


    return 0;
}