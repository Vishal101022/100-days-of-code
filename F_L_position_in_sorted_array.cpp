#include<iostream>
#include<vector>
using namespace std;
/* Find First and Last Position of Element in Sorted Array 
   date 4/may/2022   
   brute force O(n) */
/*class Solution {
public:
    void searchRange(vector<int> nums, int target) {
      int firstOccur,lastOccur,size;
      firstOccur=lastOccur=-1;
      size = nums.size();

      for(int i=0; i<size-1; i++){
        if(nums[i]==target){
          firstOccur=i;
          break;
        }
      }
      for(int j=0; j<size-1; j++){
        if(nums[j]==target)
           lastOccur=j;
      }
      cout << firstOccur << " " << lastOccur;
    }
};

int main(){
  vector<int>v = {5,7,7,7,7,8,8,8,8,8,8,9,14,15,16};
  Solution s;
  s.searchRange(v,8);
}*/
// optimised solution using binary search O(logn)
class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ans;
        if(nums.size()==0 )
           return {-1,-1};
        ans.push_back(firstOccurance(nums, target)) ;
        ans.push_back(lastOccurance(nums, target));
        return ans;
    }
    
    int firstOccurance(vector<int>& nums, int target){
        int index = -1;
        int start = 0;
        int size = nums.size(); 
        int end = size-1;
        
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                 index = mid;
                 end = mid-1;
            }
            else if(nums[mid] < target)
                start = mid+1;
            else 
                end = mid-1;
        }
        return index;
        
    }
    
    int lastOccurance(vector<int>& nums, int target){
        int index = -1;
        int start = 0;
        int size = nums.size(); 
        int end = size-1;
        while(start <= end){
            int mid = start + (end - start)/2;
            if(nums[mid] == target){
                index = mid;
                start = mid+1;
            }
            else if(nums[mid] < target)
                start = mid+1;
            else 
                end = mid-1;
       
        }
        return index;
        
    }
    
};