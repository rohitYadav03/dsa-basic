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

class LinkedList{
    public:
    Node* head; // node pointer to store the address of the adress what i think ??

    LinkedList(){
        head = NULL;
    }

    void insertAtEnd(int val){
         Node* newNode = new Node(val); //

         // If list is empty, make newNode the head
         if(head == NULL){
            head = newNode;
            return;
         }

         // Traverse to the last node
         Node* temp = head;
         while(temp->next != NULL){
            temp = temp->next;
         }

         // Attach newNode at the end
         temp->next = newNode;
    }

    void printLL(){
        Node* temp = head;

        // Traverse and print each node
        while(temp != NULL){
            cout << temp->data << " -> ";
            temp = temp->next;
        }

        cout << "NULL" << endl;
    }
};

int main (){
    LinkedList list;
    list.insertAtEnd(10);
    list.insertAtEnd(20);
    list.insertAtEnd(30);

    list.printLL();  // Output: 10 -> 20 -> 30 -> NULL
}

// Node is a class (you defined it).

// Node* means a pointer that stores the address of a Node object.

// So head is a variable that will store the address of a node.

