#include<iostream>
using namespace std;
/* leetcode Palindrome Number 
   date 16/may/20 */
class Solution {
public:
   bool isPalindrome(int x) {
    long reverse = 0,digit;
    long num = abs(x);

    while(x != 0){
        digit = x % 10;
        reverse = (reverse*10) + digit;
        x /= 10;
    }
    return reverse == num;

  }
};

//driver function 
int main(){
    int n;
    cout<<"Enter number to check palindrome or not: ";
    cin>>n;
    Solution s;
    cout <<"\n" << s.isPalindrome(n);
}