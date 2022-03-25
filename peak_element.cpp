#include<iostream>
using namespace std;
// * peak element in 1D array log(n)
int peakElement(int arr[], int n)
{
   int beg,end;

   beg = 0;
   end = n-1;
   while(beg<=end){
       int mid = (beg+(end-beg)/2);
       /*
       * checking 3 condition 
       * both edge case & mid case */
       if((mid==0 || arr[mid]>=arr[mid-1]) && (mid==n-1 || arr[mid]>=arr[mid+1]))
             return mid;
        //* ckeck right most array    
       else if(arr[mid] <= arr[mid+1])
             beg = mid + 1;
       //* check left most array
       else
             end = mid - 1;
   }
   return -1;
}

int main(){
    int array[] ={7,60,3,10,2};
    int ans = peakElement(array,5);
    cout << "Index = " << ans;

}