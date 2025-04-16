#include<iostream>
using namespace std;

void selectionSort(int arr[], int size){
for(int i =0; i<size-1 ; i++){
int miniMum= i;
    for(int j=i+1; j<size; j++){
   if(arr[j] < arr[miniMum]){
    miniMum = j;
   }
    }
    swap(arr[i], arr[miniMum]);
}
}

void printArray (int arr[], int size){
    for (int i = 0; i < size; i++)
{
    cout<<arr[i]<<" ";
    
}
}

int main (){
int arr[]= {3,533,394,494};
int size = 4;
selectionSort(arr,size);
printArray(arr, size);

}