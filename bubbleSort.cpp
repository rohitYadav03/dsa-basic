#include<iostream>
using namespace std;

void bubbleSort(int arr[], int size){
int swapHappen;
    // outer loop 
  for(int i =0; i<size-1; i++){
   swapHappen = false;
    // inner loop
   for(int j =0; j<size -i -1 ; j++){
    if(arr[j] > arr[j+1]){
    swap(arr[j], arr[j+1]);
    swapHappen = true;
    }
   }
   if (!swapHappen)
   {
   break;
   }
  }
 
  
}

void printArr (int arr[], int size){
    for (int i = 0; i < size; i++)
    {
       cout<<arr[i]<<" ";
    }
    cout<<endl;
}

int main (){
    int arr[] = {8, 5, 2, 7, 1, 6};
     int size = 6;
     bubbleSort(arr, size);
     printArr(arr, size);
}

//After every full pass, the maximum unsorted element is moved to its correct position at the end of the array.
// So after n - 1 passes, the array is completely sorted — that's why we don’t need the outer loop to run n times.

// n - i - 1 in inner loop because:
// In each outer loop pass, one element is placed correctly, 
// so we don’t need to compare or touch the already sorted part again.

