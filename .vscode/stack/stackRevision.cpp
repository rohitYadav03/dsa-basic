// #include<iostream>
// using namespace std;

// // array implemention of stack

// class Stack{
// int size;
// int top;
// int* arr;

// public:
// Stack(int s){
//     size = s;
//     top = -1;
//     arr = new int [s];
// }

// // push 
// void push (int val){

// // check wheater stack is full or not if it is full then return
// if(top == size -1 ){
//     cout<<" stack overflow"<<endl;
//     return;
//     //overflow happen when u try to push or add number to stack which is already full
// }
// top++;
// arr[top] = val;
// }

// // pop
// void pop(){
//     // check wheather the stack is empty or not
//     if(top == -1){
//         cout<<" stack underflow "<<endl;
//         return;
//         // stack underflow happen when u try to pop element from empty dtack
//     }
//     top--;
// }

// // peek
// void peek(){
//     // check wherther stack is empty or not

//     if(top == -1){
//         cout<<"empty stack "<<endl;
//         return;
//         // 
//     }
// cout<<"Top element is :  "<<arr[top]<<endl;
// }

// // isEmpty
// bool isEmpty(){
//     return top == -1;
// }
// // size
// int getSize (){
//     return top + 1;
// };
// // isFull

// void display(){
//     for(int i = top; i>=0; i--){
//    cout<<arr[i]<<" ";
// };
// cout<<endl;
// }
// };

// int main (){
//     Stack s(5);

//     s.push(10);
//     s.push(20);
//     s.push(30);
//     s.display();   // Should show 30 20 10

//     s.peek();      // Should show top element: 30

//     s.pop();
//     s.display();   // Should show 20 10

//     cout << "Stack size: " << s.getSize() << endl;
//     cout << "Is stack empty? " << (s.isEmpty() ? "Yes" : "No") << endl;

//     return 0;
// }

// Linked list implemention of stack
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

class Stack {
    int size;
    Node* top;
public:
Stack(){
    size = 0;
    top = NULL;
}
// methods of stack 
//1. push
void push (int val){
    // here we dont need to check check wheather the stack is full or not because we are creating using LL so it dynamically add or remoe its size
     
    //create  a new Node
    Node* newNode = new Node(val);

    // point this node next to the top 
    newNode->next = top;

    // update the top
    top = newNode;
    size++;
}
//2. pop
void pop(){
    // cheack wheather the stack is empty or not first before deleting any element 
    if(top == NULL){
        cout<<"empty stack "<<endl;
        return;
    }
    // create a temp of top then update the top to its next
    Node* temp = top;
    top = top->next;

    // delte the temp
    delete temp;
}
//3. peek

void  peek (){
    if(top == NULL){
        cout<<"empty stack "<<endl;
        return;
    }
cout<<"peek element is : "<<top->data<<endl;
}

//4. isEmpty
bool isEmpty(){
    return top == NULL;
}
//5. size
int getSize(){
    return size;
}
//6. display
void display(){
    // cheack wheather the stack is empty or not 
  if(top == NULL){
    cout<<"empty "<<endl;
    return;
  }
Node* temp = top;
while(temp != NULL){
    cout<<temp->data<<" -> ";
    temp = temp->next ;
}
cout<<" NULL "<<endl;
}

};

int main (){
    Stack s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.display();   // Should show 30 20 10

    s.peek();      // Should show top element: 30
}
