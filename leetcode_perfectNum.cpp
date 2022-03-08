#include <bits/stdc++.h>
using namespace std;
/* leetCode 507 perfect Number
   firstly i tried brute-force method of time complexity n/2 O(n)
   then i had learned Euclid-Euler Theorem which has time complexcity of (logn)*/
class solution{
    public : int Euclid_Euler_Theorem(int p){
        return (pow(2,p-1)*(pow(2,p)-1));
    }
    public : bool checkPrefectN(int N) {
        int primes[] = {2,3,5,7,13,17,19,31};
        for(int p: primes){
            if(Euclid_Euler_Theorem(p) == N)
              return true;
        }
        return false;
    }
};
int main(){
   
   solution s;
   cout << s.checkPrefectN(27);
    return 0;
}