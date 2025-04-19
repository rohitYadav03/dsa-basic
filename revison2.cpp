#include<iostream>
using namespace std;

int main () {
    //. linear serach => in linear serch algoritm we copare the target with each index value 
    // time => 0(n)
//   int arr[] = {1,2,46,6,4,9};
//   int target = 6;
// int size = sizeof(arr)/ sizeof(arr[0]);
// bool found = false;
//   for (int i =0; i<size; i++){
//   if(arr[i] == target){
//     cout<<"Target found "<<endl;
//     found = true;
//     break;
//   }
//   }
// if(!found){
//     cout<<"Target not found"<<endl;
// }

// binary seacrch => in binary serch we mid the midindex and we compare with that if midindex == targe then we break 
//   if not then we compare is midindex is less than targer arr[mid] < target then we update start = mid + 1;  else end = mid -1
// untill start is less then or equal to end
// O(log n)

int arr[] = {1,2,46,6,4,9};
  int target = 6;
int size = sizeof(arr)/ sizeof(arr[0]);
bool found = false;
int start = 0;
int end = size -1;

while (start <= end)
{
   int midIdx = (start + end)/2;
   if(arr[midIdx] == target){
    cout<<"Target found ";
    found = true;
    break;
   }
   else if(arr[midIdx] < target){
    start = midIdx + 1;
   }
    else {
        end = midIdx - 1;
    }
}

  
if(!found){
    cout<<"Target not found"<<endl;
}

}