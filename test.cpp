#include<iostream>
using namespace std;
/*Search an element position in a sorted and infinite array O(log n)
 date 21/may/2022 */
int binarySearch(int arr[], int start,int end, int target){
   
   while(start <= end)
   {
      int   mid=(start+end)/2;
      if(arr[mid] == target)
        return mid;
      else if(arr[mid] < target)
        start = mid+1;
      else
        end = mid-1;
   }
   return -1;
} 

// this function do exponential search for upper_bound element
int infinitySearch(int arr[], int x){
   int lower_bound = 0;
   int upper_bound = 1;
   while (x > arr[upper_bound])
   {
      lower_bound = upper_bound;
      upper_bound *= 2;
   }
   return binarySearch(arr,lower_bound,upper_bound,x);
   
}

// driver function
int main(){
   int arr[]={2,3,9,14,16,18,21,34,47,55,59,71,455};
   int ans = infinitySearch(arr,59);  // passing whole array and target element
   (ans == -1)
        ? cout << "Element is not present in array"
        : cout << "Element is present at index " << ans+1;
    return 0;
}