#include<iostream>
using namespace std;
// ceiling of number date - 1/may/2022
int ceilNum(int arr[], int target,int length){
   int start,mid,end;
   start = 0;
   end = length-1;

   while(start <= end){
      mid=(start+end)/2;
      if(arr[mid] == target)
        return arr[mid];
      else if(arr[mid] < target)
        start = mid+1;
      else
        end = mid-1;
   }
   return arr[start];
} 

// driver function
int main(){
   int arr[]={1,2,9,14,17,21,58,61,98};
   int length = sizeof(arr)/sizeof(arr[0]);
   int ans = ceilNum(arr,52,length);  // passing whole arr and target element
   cout <<"Ceiling of number : " << ans;
    return 0;
}