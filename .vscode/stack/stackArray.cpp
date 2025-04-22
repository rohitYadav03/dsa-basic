#include<iostream>
using namespace std;

class stack{
    int size;
    int* arr;
    int top;
public:
    stack(int s){
  size = s;
  top =-1;
  arr = new int[s]; // dyanmically created array
    }

    void push (int value){

        if(top == size - 1){
            cout<<" stack overflow "<<endl;
// Stack Overflow means trying to push() (add) an element into a stack that is already full.
// correupt memory or crash your program
            return;
        }

       top++;
       arr[top] = value;
    }

    void pop (){
        if(top == -1){
            cout<<"empty stack or underflow"<<endl;
            return;
  // This occurs when you try to pop an element from an empty stack
        }
        top--;
    }
    
    void peek (){
        if(top == -1){
            cout<<"empty stack "<<endl;
            return;
        }
        cout<<"Top element is : "<<arr[top]<<endl;
    }

    bool isEmpty(){
        if(top == -1){
            return true; // means empty 
        }
        else{
            return false;
        }
    }

    bool isFull (){
        if(top == size -1){
            return true;
        }
        else {
            return false;
        }
    }

    int current (){
        return top + 1;
    };
};




int main (){
    stack s(3);       // Create a stack of size 3

s.push(10);       // arr[0] = 10, top = 0
s.push(20);       // arr[1] = 20, top = 1

s.peek();         // shows "Top element is : 20"
cout << s.isEmpty()<<endl;  // returns false (0)
cout<<s.isFull()<<endl;
cout<<s.current()<<endl;
}