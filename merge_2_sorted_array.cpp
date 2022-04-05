/* program to merge two sorted array in third array
 * date 5/april/2022 */
#include<iostream>
using namespace std;
void merge(int A[], int B[],int m,int n){//passing two array with n values
int C[8];  // third array c
int i=0,j=0,k=0,p;
while(i<m && j<n){ //comparing Array A & B element 
   if(A[i]<B[j])
     C[k++]=A[i++];
   else
     C[k++]=B[j++];
}
for(; i < m; i++) //storing remening element in arraay c from a
  C[k++]=A[i];
for (; j <  n; j++) //storing remening element in arraay c from b
  C[k++]=B[j];
// print array c
for(p=0; p < sizeof(C)/sizeof(int); p++)
    cout << C[p] << " ";
}
int main(){
   // array a,b
  int A[]={2,8,15,18};
  int B[]={5,9,12,17};
  merge(A,B,4,4);
   return 0;
}