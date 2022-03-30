// * program to implement bubble_sort
// * date 30/march/2022
#include<iostream>
#include<algorithm>
using namespace std;
int swap_count = 0;
   void bubbleSort(int array[], int n){
     int flag=0;
     for(int i=0; i<n; i++){
       for(int j=0; j<n-i-1; j++){
         if(array[j]>array[j+1]){
           flag = 1;
           swap(array[j],array[j+1]);
           swap_count++;
         }
       }
       if(flag==0)
         return;
     }
   }
int main(){
  int array[]={30,52,29,87,63,27,19,54};
  bubbleSort(array,8);
  // sorted array in accending order
  for(int i=0; i<8; i++){
    cout << array[i] << " ";
    cout << "\nArray sorted in " << swap_count << " swap";
    return 0;
  }
}
