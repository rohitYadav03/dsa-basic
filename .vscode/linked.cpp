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

class LinkedList {
    public:
    Node* head;
    Node* tail;

    LinkedList(){
        head = tail = NULL;
    }

void push_front(int val){
// create a new node
Node* newNode = new Node(val); // dynamic object

if(head == NULL){
    head  = tail = newNode;
    return;
}
newNode->next = head;
head = newNode;
}

void push_back(int val){
// create a new Node 
Node* newNode = new Node(val);

// this is the first linked list 
if(head == NULL){
    head = tail = newNode;
    return;
}

// Node* temp = head;
// while(temp->next != NULL){
//     temp = temp->next;
// }

tail->next = newNode;
tail = newNode;

};

void pop_front(){

    if(head == NULL){
    cout<<"LL is empty"<<endl;
    return;
}
  Node* temp = head;  
  head = head->next;
    temp->next = NULL;

    delete temp;
}

void pop_back(){

if(head == NULL){
        cout<<"LL is empty"<<endl;
        return;
    }

Node* temp = head;


while (temp->next != tail){
 temp = temp->next;
}

temp->next = NULL;

delete tail;
tail = temp;

}

void insert(int val , int pos){

    if(pos < 0){
        cout<<" invalid input "<<endl;
        return;
    }

    if(pos == 0){
        push_front(val);
        return;
    }

    Node* temp = head;

    for(int i =0; i<pos-1; i++){
if(temp == NULL){
cout<<"invalid postion "<<endl;
return;
}
 temp = temp->next;
    }

    Node* newNode = new Node(val);
    newNode->next = temp->next;
    temp->next = newNode;

}

int serchLL(int key){

Node* temp = head;
int idx = 0;

while(temp != NULL){
 if(temp->data == key){
    return idx;
 }
 temp = temp->next;
 idx++;
}

return -1;

}

    void displayLL (){
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
LinkedList list;
list.push_front(5);
list.push_front(15);
list.push_back(1);
list.push_back(4);
list.pop_front();
list.pop_back();
list.insert(4,1);
cout<<list.serchLL(6)<<endl;
list.displayLL();

 }