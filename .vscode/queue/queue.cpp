#include<iostream>
using namespace std;

// queue implemenntation using linked list =>

class Node{
    public:
    int data;
     Node* next;

     Node(int val){
        data = val;
        next = NULL;
     }
    
};

class Queue{
 Node* head;
 Node* tail;
    
 public:
    Queue(){
        head = tail = NULL;
    }

    void push (int val){
// create a new node 
Node* newNode = new Node(val);

// there will 2 considition  of push 
// 1. either this is the first and only one in the queue

if(head == NULL){
    head = tail = newNode;
}

//2. other elments are already there in the quue 
tail->next = newNode;
tail = newNode;

    }

    void pop (){
        // in pop we want to delete from the first so we need to update the head pointer 

        // check wheather the queue is empty or not
        if(head == NULL){
            cout<<"empty queue "<<endl;
            return;
        }

    Node* temp = head;
    head = head->next;
    delete temp;
    }

    int front(){
        if(head == NULL){
            cout<<"empty stack"<<endl;
            return -1;
        }
        return head->data;
    }

    bool isEmpty(){
        return head == NULL;
    }
};


 int main (){
    Queue q;

    q.push(10);
    q.push(20);
    q.push(30);

    cout << "Front: " << q.front() << endl; // 10
    q.pop();

    cout << "Front after pop: " << q.front() << endl; // 20
    q.pop();

    cout << "Front after second pop: " << q.front() << endl; // 30
    q.pop();

    q.pop(); // empty queue

    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;


 }