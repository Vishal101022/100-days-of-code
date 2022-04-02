/* * insertion sort
   * date 2/april/2022 */
#include<iostream>
#include<algorithm>
using namespace std;
void insertion_sort(int arr[], int n){
    int i,j,temp;
    for(i=1; i<n; i++){
       temp=arr[i];
       j=i-1;
       while (j>=0 && temp<arr[j])
       {
          arr[j+1] = arr[j];
          j--;
       }
       arr[j+1]=temp;
       
    }
}
int main(){
      int array[]={4,9,5,1,0};
      cout<<"unsorted array: ";
      for(int i=0; i<5; i++)
        cout <<array[i] << " " ;

      insertion_sort(array,5);

      cout <<"\ninsertion sort: ";
      for(int i=0; i<5; i++){
      cout << array[i] << " ";
      }
  return 0;
}