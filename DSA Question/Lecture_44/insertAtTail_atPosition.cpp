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
    tail -> next = temp;
    tail = temp;
}
void insertAtHead(Node* &head, int d){
    //new nodde create

    Node* temp = new Node(d);
    temp -> next = head;
    head = temp;

}


void insertAtPosition(Node* &tail, Node* &head, int position, int d){


    if(position == 1){
        insertAtHead(head,d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while(count < position - 1) {
        temp = temp -> next;
        count++;
    }

    //inserting at Last position

    if(temp -> next == NULL){
        insertAtTail(tail,d);
    }

    //creating a node for d

    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;

    temp -> next = nodeToInsert;

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
    Node *head = node1;

    insertAtTail(tail,12);
    insertAtTail(tail,15);
    insertAtTail(tail,20);
    insertAtTail(tail,28);
    
    insertAtPosition(tail,head,1,53);

    print(head);


    return 0;
}