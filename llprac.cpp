#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next; // You are creating a variable next that will store the address of the next node in the linked list.

    Node(int val){
   data = val;
   next = NULL;
    }

};

class LinkedList{
    public:
    Node* head;

    LinkedList(){
        head = NULL;
    }

    void insertAtEnd (int val){
// create a new node
Node* newNode = new Node(val);

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

    void insertAtFirst(int val){
   // create node 
   Node* newNode = new Node(val);

   // newNode->next = head;
   // head = newNode // update the head 

   // head -> first means no other element in that 
   // head will not be the first

   if(head == NULL){
    head = newNode;
    return;
   }

   newNode->next = head;
   head = newNode;


    }

    void displayLL (){
Node* temp = head;
while(temp != NULL){
    cout<<temp->data<<" -> ";
    temp = temp->next;
}
cout<<"NULL ";
cout<<endl;
    }
};


int main (){
    LinkedList ll;
    ll.insertAtEnd(10);
    ll.insertAtEnd(20);
    ll.insertAtEnd(30);
    ll.insertAtFirst(40);   
     ll.displayLL();
}