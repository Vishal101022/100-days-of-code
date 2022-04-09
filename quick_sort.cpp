#include <iostream>
#include <iomanip>
using namespace std;
/* quickSort date 9/april/2022 */
int partition(int array[],int beg,int end){
  int left,right,pivot;
  left=beg;
  right=end;
  pivot=array[beg];
  // stop while right crossed to left
  while(left<right){
    // move left while element < pivot
    while(array[left]<=pivot)
       left++;
    // move right while element > pivot
    while(array[right]>pivot)
       right--;
    // if left < right then swap array[left] <--> array[right]
    if(left<right)
       swap(array[left],array[right]);
  }
  // right is final position for pivot
   swap(array[beg],array[right]);
   return right;
}

// quickSort using divide and conquer algorithm
void quick_sort(int array[],int beg,int end){
  int pivot;
  if(beg<end){
    pivot=partition(array,beg,end);
    quick_sort(array,beg,pivot-1);
    quick_sort(array,pivot+1,end);
  }
}

// printing sorted array
void print_array(int array[], int size){
  for(int i=0;i<size;i++)
    cout << array[i] <<" ";
}

 main(){
  
  int A[]={2,62,15,50,69,3,56,70,21,100};
  system("cls");
  quick_sort(A,0,10);
  print_array(A,10);

}