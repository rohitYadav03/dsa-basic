#include<iostream>
using namespace std;

class Node {
    public :
   int data;
   Node* next;

   Node(){
    cout<<"inside defult constructot";
        this->next = NULL;
   }

   Node(int val){
    this->data = val;
    this->next = NULL;
   }
};
void printLL(Node* head){
  
   Node* temp = head;
   while(temp != NULL){
  cout << temp->data <<" -> ";
  
  temp = temp->next;
   }
cout<<endl;

};

int main (){

    // creation of node
    // Node a;
    Node* first = new Node(10); // what is this and how it differnce from Node a and why we are using this not Node a ??
    cout<<"address :"<<first<<endl;
    Node* second = new Node(20);
    Node* third = new Node(30);

   first->next = second;
   second->next = third;
// linked list created ??

Node* head = first;
printLL(head);

}

