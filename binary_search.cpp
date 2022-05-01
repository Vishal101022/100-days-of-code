#include<iostream>
using namespace std;
// program to find Binary search date - 1/may/2022
int binarySearch(int arr[], int target,int length){
   int start,mid,end;
   start = 0;
   end = length-1;

   while(start <= end){
      mid=(start+end)/2;
      if(arr[mid] == target)
        return mid;
      else if(arr[mid] < target)
        start = mid+1;
      else
        end = mid-1;
   }
   return -1;
} 

// driver function
int main(){
   int arr[]={2,3,9,14,16,18};
   int length = sizeof(arr)/sizeof(arr[0]);
   int ans = binarySearch(arr,16,length);  // passing whole arr and target element
   (ans == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << ans+1;
    return 0;
}