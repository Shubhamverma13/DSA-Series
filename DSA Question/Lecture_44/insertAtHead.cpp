#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

};

void insertAtHead(Node* &head, int d){
    //new nodde create

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}

void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout<<endl;

}


int main()
{
    //created new node
    Node* node1 = new Node(10);    
    // cout<<node1 ->data << endl;
    // cout<<node1->next<< endl;

    //head pointed to node 1
    Node* head = node1;

    insertAtHead(head,18);
    insertAtHead(head,20);
    insertAtHead(head,28);

    print(head);

    return 0;
}