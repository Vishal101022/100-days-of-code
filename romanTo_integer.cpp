#include<iostream>
#include<unordered_map>
using namespace std;
/* leetcode Roman to integer 
   date 16/may/20 */
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> hash;
        hash['I']= 1;
        hash['V']= 5;
        hash['X']= 10;
        hash['L']= 50;
        hash['C']= 100;
        hash['D']= 500;
        hash['M']= 1000;

        int n = s.length();
        int sum = 0;
        for(int i=0; i< n; i++){
          if( i<n-1 && hash[s[i]] < hash[s[i+1]])
             sum -= hash[s[i]];
          else
             sum += hash[s[i]];
        }
        return sum;
    } 
};