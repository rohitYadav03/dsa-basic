#include<iostream>
using namespace std;
int main (){

// linear Search => in liner serch we loop through all the element of the array and we check the 
//                   compare the target element and check weather it is true or not if it is true then we reurn
// time and space complexity is = o(n)

// Write a program to input 10 integers and search for a number using linear search. 
// Print "Found" or "Not Found".

int arr[10];
int target = 5;
int size = 10;
bool found = false;
for(int i = 0; i<size ; i++){
   cin>>arr[i];
}
for(int i = 0; i<size; i++){
    if(arr[i] == target){
       found = true; 
       break;
    }
};
if(found){
    cout<<"Target found"<<endl;
}
else{
    cout<<"Target not found "<<endl;
}
}