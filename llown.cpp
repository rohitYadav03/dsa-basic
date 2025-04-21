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
    head = NULL;
}

void inserAtEnd(int val){
    // create a new Node
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

void insertAtfirst(int val){
    Node* newNode = new Node(val);

    newNode->next = head; // we are linking the new node to the head and before head
    head = newNode; // here we are updatng the head because while printing the ll it print from the head

}

void displayLL(){
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
list.inserAtEnd(3);
list.inserAtEnd(6);
list.insertAtfirst(9);
list.displayLL();
}