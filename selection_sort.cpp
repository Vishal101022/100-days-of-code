/* * selection sort
   * date 2/april/2022 */
#include<iostream>
#include<algorithm>
using namespace std;
void selection_sort(int arr[], int n){
   int i,j,min;
   for (i=0; i < n-1; i++){
      min=i;
      for (j = i+1; j<n; j++)
      {
            if (arr[j]<arr[min])
               min=j;
             
      }
      swap(arr[i],arr[min]);
   }
}
int main(){
      int array[]={4,9,5,1,0};
      selection_sort(array,5);
      cout <<"selection sort: ";
      for(int i=0; i<5; i++){
      cout << array[i] << " ";
      }
  return 0;
}