#include<iostream>
using namespace std;
/* pair pain from codeChef
   You are given an array A containing N positive integers. 
   Find the number of pairs (i,j) such that 1≤i<j≤N and Ai+Aj≥Ai*Aj
   date -17/april/2022 */
int main(){
	long long T,X,N,i,count1,count2,ans;
	cin>>T;
	while(T--){
	cin>>N;
	ans=0;
	count1=count2=0;
	for(i=1; i<=N; i++){
		cin>>X;
	    if(X==1)
		  count1++;
		else if(X==2)
		  count2++;
	}
	//   (1,Aj)               (1,1)                  (2,2)
	ans=count1*(N-count1) + count1*(count1-1)/2 + count2*(count2-1)/2;
	cout <<ans <<endl;
	}
	return 0;
}