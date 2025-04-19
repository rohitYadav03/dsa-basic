#include<iostream>
using namespace std;

int binarySearch(int arr[], int n , int target){
int start = 0;
int end = n -1;

    while(start <= end){
        int midIndex = (start + end) / 2;
        
        if(arr[midIndex] == target){
           return midIndex;
        }
        else if(arr[midIndex] < target)
        {
            start = midIndex + 1;
        }
        else {
            end = midIndex - 1;
        }
        }
      return -1;  
}

int linearSearch (int arr[] , int n , int target){
    
    for(int i =0 ; i<n; i++){
        if(arr[i] == target ){
            return i;
        }
    }
    return -1;
}

void bubbleSort (int arr[], int n){

    for(int i =0; i<n-1 ; i++){

        for(int j =0 ; j<n-i-1; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}

void selectionSort(int arr[], int n){

for(int i =0 ; i<n; i++){
    int minimun = i;
    for(int j = i + 1; j<n; j++){
        if (arr[j] < arr[minimun])
        {
           minimun = j;
        }
    }
    swap(arr[i], arr[minimun]);
}

}

void print (int arr[], int n){
    for(int i =0; i<n; i++){
      cout<<arr[i]<<" ";
    }
    cout<<endl;
}

 int main () {

// binary search => binary search is a serching algorith in which we seach the target value in array it is deffent than linear seacrh in lineaer search we go to each element of the array and compare it with target , but in the inary seach we we find the midIndex in start + end / 2 and we compare it with the target if it is equal to the target the we return if midIdx is less then target then we shift the start - midIndex + 1 , or else end = midindex -1 untill start is <= end;
    // its complextity is O(logN) and it is more otimized than linear search where linere sech is O(N) and this only work for sorted array 
  
    //tip => always use while loop in binary seacrch
  
    int arr[] = {1,2,3,5,8};
    int size = sizeof(arr)/sizeof(arr[0]);
    int target = 2;

    int result =    linearSearch(arr, size, target);

 int result =    binarySearch(arr, size, target);
 
 if(result != -1){
    cout<<"Target found at Index : "<<result<<endl;

 }
 else{
    cout<<"Target not found"<< endl;
 }

 selectionSort(arr,size);
 print(arr, size);

 }
