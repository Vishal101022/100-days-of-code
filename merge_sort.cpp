#include <iostream>
#include <iomanip>
using namespace std;
/* mergeSort date 9/april/2022 */
void merge(int array[],int beg,int mid,int end){
  int i,j,k,index,temp_array[100];
  i=beg,
  j=mid+1,
  index=beg;
  // comparing element 
  while((i<=mid)&&(j<=end)){
    if(array[i] < array[j]){
       temp_array[index]=array[i];
       i++;
    }
    else{
      temp_array[index]=array[j];
      j++;
    }
    index++;
  }
  //Copy the remaining elements of right sub-array
  if(i>mid){
    while(j<=end)
      temp_array[index++]=array[j++];
  }
  // Copy the remaining elements of left sub-array
  else{
    while(i<=mid)
      temp_array[index++]=array[i++];
  }
  // getting back temp_array to orininal array
  for(k=0;k<index;k++)
    array[k]=temp_array[k];
}
// mergeSort using divide and conquer algorithm
void merge_sort(int array[], int beg, int end){
int mid;
  if(beg<end){
      mid = (beg+end)/2;
      merge_sort(array, beg, mid);
      merge_sort(array, mid+1, end);
      merge(array, beg, mid, end);
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
  merge_sort(A,0,10);
  print_array(A,10);

}