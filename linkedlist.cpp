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

class List {
    Node* head;
    Node* tail;

    public: 
  List(){
    head = tail = NULL;
  }

  void push_front(int val){
  Node* newNode = new Node(val); // dynamic 
    // head -> 1. null  2.not null value
  
if(head == NULL){
    head = tail = newNode;
    return;
}
else{
    // new nodce -> next = head
    // head = newNode 
    newNode->next = head;
    head = newNode;
}
  }
void printLL(){
  Node* temp = head;
  while(temp != NULL){
cout<<temp->data<<" ";
temp = temp->next;
  }
}

};


 int main (){
   
List ll;
ll.push_front(1);
ll.push_front(2);
ll.push_front(3);


ll.printLL();
 }