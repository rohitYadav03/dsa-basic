#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int val){
       data =val;
       next = NULL;
    }
};

class list{
    public:
    Node* head;
    Node* tail;

     list(){
        head = tail = NULL;
     };
// method 1 => Insertion is linked list 1.front 2. back 3. at anywhere

// push_front => add at the begging of the linked list 
void pushFront (int val){
    // create a new Node 
    Node* newNode = new Node(val);

    // check if is the only node or there are other node as well
    if(head == NULL){
        head = tail = newNode;
        return;
    };

    // what if there is alreay node 
    newNode->next = head;
    head = newNode;
};

// add at back 
void push_back(int val){
// create A new Node
Node* newNode = new Node(val);

     if(head == NULL){
        head = tail = newNode;
        return;
     };
// what if it is not the only node in the linked list

tail->next = newNode;
tail = newNode;
};

// now lets add a method to insert At any index  

void insert(int val, int index){

    // check if it is not an negative index
if(index < 0){
    cout<<"Invlaid index "<<endl;
   return;
}

if(index == 0){
    pushFront(val);
    return;
}
// main logic 

Node* temp = head;
for(int i =0; i<index -1; i++){

    if(temp == NULL){
        cout<<"wrong input "<<endl;
        return;
    }

    temp = temp->next;
}
// create a new Node
Node* newNode = new Node(val);
newNode->next = temp->next;
temp->next = newNode;

}

//serching in linked list 
int search(int key){
  Node* temp = head;
  int index =0;

  while(temp != NULL){
    if(temp->data == key){
        return index;
    }
    temp = temp->next;
    index++;
  }
  return -1;

}

void pop_front(){

    if(head == NULL){
        cout<<"Empty list"<<endl;
        return;
    }

    Node* temp = head;
    head = head->next;

    if (head == NULL) {
        tail = NULL;
    }

    delete temp;
}

void pop_back(){

    if(head == NULL){
        cout<<"empty linked list"<<endl;
        return;
    }

    Node* temp = head;
    while(temp->next->next != NULL){
        temp= temp->next;
    }
    cout<<temp->data<<endl;
delete temp->next;
temp->next = NULL;
tail = temp;
}

// traversing in LL
void print(){
    Node* temp = head;
    while(temp != NULL){
        cout<<temp->data<<" -> ";
       temp = temp->next;
    };
    cout<<" NULL "<<endl;
};

};

int main (){
list ll;
ll.pushFront(5);
ll.pushFront(3);
ll.pushFront(2);
ll.pushFront(1);
ll.insert(4,3);
ll.pop_front();
ll.pop_back();
// cout<<ll.search(5)<<endl;
ll.print();
}