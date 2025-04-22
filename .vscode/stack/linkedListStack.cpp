#include<iostream>
using namespace std;

// linked list implementation of stack

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
        data = val;
        next = NULL;
    }
};

class Stack{
    public:
    int size;
    Node* top;

    Stack(){
        size = 0;
        top = NULL;
    }

    void push(int val){
        // logic we need to create a new node evertime and connect its next to top and change the top to newNode

        //create a new Node 
        Node* newNode = new Node(val);

        // connect it to the new node ? but here is my question so while push this will becaome the first element or top element
        newNode->next = top;

        // update the top to newNode
        top = newNode;
        size++;
    }

    void pop(){
        // logic for pop => create a tempoery valrible of top then update the top to its next value and the delte the temp
        // we only need to update the top

        // check for empty stack
        if(top == NULL){
            cout<<"stack is empty , stack underflow "<<endl;
            return;
        }

        Node* temp = top;

        // update the top to its next value 
        top = top->next;

        // delete the temmp 
        delete temp;
        size--;
    }

// peek => mens it will return or print the top value
void peek(){
    // check if stack is empty or not 
   if(top == NULL){
    cout<<"empty stack no peek value "<< endl;
    return;
   }
else{
    cout<<"top element is : "<<top->data<<endl;
}

}

bool isEnpty(){
    return top == NULL;
}

int getSize (){
    return size;
}

void search(int key){
    Node* temp = top;
    int index = 0;
    while(temp != NULL){
        if(temp->data == key){
            cout<<"element found at "<<index<<endl;
            break;
        }
        index++;
        temp= temp->next;
    }
}

void display(){
    Node* temp = top;
    while (temp != NULL){
        cout<<temp->data<<" -> ";
        temp = temp->next;
    }
    cout<<"NULL "<<endl;
}

};


int main (){
Stack s;
s.push(5);
s.push(6);
s.push(7);
// s.pop();
s.search(6);
cout<<s.isEnpty()<<endl;
cout<<"size : "<<s.getSize()<<endl;
s.display();
// s.pop();
}