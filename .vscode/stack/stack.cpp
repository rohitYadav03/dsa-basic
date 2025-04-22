#include<iostream>
using namespace std;

class stack {
    int *arr;
    int size;
    int top;

    public:
stack(int s){
  size = s;
  top = -1;
  arr = new int[s];
}

// push 
void push (int value){
 
    if(top == size -1){
        cout<<"stack overflow "<<endl;
        return;
    }
    else{
        top++;
        arr[top] = value;
    }
}

// pop
void pop(){
    if( top == -1){
        cout<<"underflow"<<endl;
        return;
    }
    else {
        top--;
    }
}

// peek
int peek(){
    if(top == -1){
        cout<<"stack is empty";
        return -1;
    }
    else {
        return arr[top];
    }
}

// is empty
bool isEmpty(){
    return top==-1;
}
// isSize
int isSize(){
    return top+1;
}

};

int main (){
   stack S(5);
   S.push(5);
   S.push(4);
   S.pop();
   S.pop();
   S.pop();
}