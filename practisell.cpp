#include<iostream>
using namespace std;

// this is what i understand till now in linkedlist

class Node { // node has two property 1. data the actual value 2. next => address of next node or if it last then NULL
    public:
    int data ; 
    Node* next; // we are creting a next varible but using pointer here Node means same dataTtpe as Node and * is used to store address if we 
    // dont use * ne can't store the address into it

    Node(int val){ // construtor for assignaning the value
     this->data = val;
     this->next = NULL; // initally assigning it with the null
    }
};

void printLL(Node* head){
  Node* temp = head;

  while(temp != NULL){
    cout<<temp->data<<" -> ";
  temp =  temp->next;
  }
}

int main (){

// lets create a object with the class 
Node* first = new Node(10); // first is aginn variable name here and Node is here means same datatype as Node this is what i think 
// and * is here because when we create a object using the new keyword then it return the addrss so here 
// first store the address of his own this is what i think ?
// and 10 will be store in the data


Node* second = new Node(20);
// new Node(20) or other create a  Node object in the heap memory with their value
// and address of this object is store in the variable second , third etc
// Node* first stores that address.

Node* third = new Node(30);
Node* forth = new Node(40);

first->next = second; // we are assing the value of first next to the address of second intially while creating
// the object it was assign as the NULL but now we are asssigning it to second which store the address of the second

second->next = third;
third->next = forth;

// now it is working fine but now we need to print the linklist so we can see so lets create another function
// we need to get a copy of first and we need to pass it 

Node* head = first;
printLL(head);

// Node* next;	To store the address of the next node
// new Node(10);	To create node in heap (won’t auto-delete)
// first->next = second;	Connects one node to another

}