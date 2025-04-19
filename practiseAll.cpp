#include<iostream>
using namespace std;
int main () {
  // practise => 1. lineeatr serch 2. binary search 3.bubble sort 4. selection sort 

// liner serch => linear serarch is a way to find to target value in array , in this we capare each element 
// of the array with the target value and check wheather  it is eaual or not and its time and space complexity is O(n)
// example 

// int arr[] = {1,35,59,4,5,89};
// int target = 5;
// bool found = false;
// int size = 6;

// for(int i =0 ; i<6; i++){
//     if(arr[i] == target){
//         found = true;
//         cout<<"found target at index : "<<i <<endl;
//         break;
//     }
// }
// if(!found){
//     cout<<"Not found"<<endl;
// }


// Binary search => binary search is a seching teching in which we first find the mid index by using formula
// start + end /2 and then we compare the mid number with the  target if the number is greather than target 
// then we set the start index = mid + 1 else end to = mid -1 the in first we check if mid == target or not 
// if we found target then we cant retun 1 or print tareget found or whaterveer we wnat else we can return -1
// o(logn)
// this only work for sorted array 

// int arr[] = {1,2,3,4,56,67,89};
// int target = 4;
// bool found = false;
// int size = 7;
// int start = 0;
// int end = size -1;

// while(start <= end){
//   int mid = (start + end)/2; // 0+7/2 => 3.5 => 3 arr[3] => 4
//   if(arr[mid] == target){
//     cout<<"found target "<<endl;
//     found = true;
//       break;
//   }

// else if(arr[mid] < target){
//     start = mid + 1; // start = arr[4]
// }
// else {
//   end = mid - 1;
// }
// }

// if(!found){
//       cout<<"Not found"<<endl;
//   }

// sorting => sorting algoritm 

// 1.bubble sort => in bubble sort , we put the lagrest value to the end if we are arranging the array 
//          in assending order 
// O(n^2)
// bool swapped;
// int arr[] = {2,4,5,96,47,9};
// int size = 6;

// for(int i =0; i<size -1; i++){
//   swapped = false;
//   for(int j =0; j<size-i-1; j++){
//     if(arr[j] > arr[j+ 1]){
//       swap(arr[j], arr[j+1]);
//       swapped = true;
//     }
//   }
// if(!swapped) break; // no swap means array is alredy sorted
// }

// for(int i=0; i<size; i++){
//   cout<<arr[i]<<" ";
// }

// selection sort => selection sort is oppostise of bubble sort in selection sort we find the minimum 
//                and swap it whith its respective index

int arr[] = {3,5,62,1,4};
int size = 5;

for(int i =0; i<size-1; i++){
   int minimunIdx = i;
  for(int j = i + 1; j<size; j++){
      if(arr[j] < arr[minimunIdx]){
        minimunIdx = j;
      }
  }
  swap(arr[i], arr[minimunIdx]);
}

for(int i =0; i<size; i++){
  cout<<arr[i]<<" ";
}

}