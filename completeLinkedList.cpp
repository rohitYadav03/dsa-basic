#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
   data = val;
   next = NULL;
    }
};

class linkedList{
public:
Node* head;

linkedList(){
    cout<<"head : "<<head<<endl;
   head = NULL;
}

void insertAtFirsrt(int val){
// create a new node
Node* newNode =  new Node(val);
cout<<"newNode : "<<newNode<<endl;

// now head could be empty because this is the firest
if(head == NULL){
    head = newNode;
    return;
}
newNode->next = head;
head = newNode;
// nead already include many other node 

}

void InsertAtEnd(int val){
    // create a  new Node 
    Node* newNode = new Node(val);

    // 1. condition => head is null this is only node present 
if(head == NULL){
    head = newNode;
    return;
}
Node* temp = head;
while(temp->next != NULL){
    temp = temp->next;
}
temp->next = newNode;

}

void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<" NULL ";
    cout<<endl;
}
};

int main (){
linkedList list;
list.insertAtFirsrt(10);
list.insertAtFirsrt(20);
list.insertAtFirsrt(40);
list.InsertAtEnd(1);
list.print();
}