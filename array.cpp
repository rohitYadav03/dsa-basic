#include <iostream>
#include<climits>
using namespace std;

int main (){

// 1.Input 5 integers and print only the even numbers.

// int arr[5];
// for(int i = 0; i<5; i++){
//     cin>>arr[i];
// }
// for(int i =0; i<5; i++){
//     if(arr[i] %2 == 0){
//         cout<<arr[i]<<" ";
//     }
// };

// 2. 🔍 Find the index of the maximum number in the array.

int arri[] = {1,3,4,5,2,8};
int size = 6;
int max = arri[0];
int index;
int secMax = INT_MIN;
for(int i =1; i<size; i++){
   if(arri[i] > max){
      max = arri[i];
      index = i;
   };

}
cout<<"Mximum number is at index : "<<index<<endl;
// second max 

for(int i = 0; i<size; i++){
if(arri[i] > secMax && arri[i] != max){
    secMax = arri[i];
}
};
cout<<"second Maximum is : "<<secMax<<endl;
}