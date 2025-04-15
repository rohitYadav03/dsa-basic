#include<iostream>
using namespace std;


int main (){

// question 1 
// int arr[] = {3, 5, 7, 9, 11, 13, 15};

// int target = 11;

//Question 2
int arr[] = {1, 4, 6, 9, 13, 18, 21};
int target  = 10;
int size = 7;
int low = 0;
int high = size -1 ;
bool found = false;

while( low <= high){
   int mid = (low + high)/ 2;

   if(arr[mid] == target){
    found = true;
    cout<<"Found at Index : "<<mid<<endl;
    break;
   }
   else if(arr[mid] < target){
     low = mid + 1;
   }
   else {
    high = mid -1 ;
   }
}
if (!found)
{
    cout<<"Not found "<<endl;
}

// Question 3 (Think & Code):
// What will binary search do if you try to search for a number not in the array, like 100 in this array:
// int arr[] = {5, 10, 15, 20, 25, 30};

// ans => first it will find mid which will be 0+5/2 => 2 will be mid and then check arr[mid] == tagert
// means 15 == 100 which will be false then if which check second condition in which it will check that 
// mid is less than taget means 15 < 100 true then it will change low to mid + 1 means low will be now
// low will be 3 , then it will calulate the mid again in which mid will be 3 + 5 /2 = which will be 4 
// arr[mid ] => 25 and then it will check wheather it is equal to taget or not it is not then is will check again
// wheathet mid is less then target 25< 100 true then again it will change the low and change it into 
// mid + 1 => 5 and 5 it will do all again then again arr[mid] will be less than than 100 then again it will change low 
// to 6 and it this condition low will not equal or less then high and we will not enter in the loop so can return or print whatever we want 

// time and space complety = 0(long n)

}