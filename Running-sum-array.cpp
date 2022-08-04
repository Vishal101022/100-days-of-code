/* 1480 Running Sum of 1d Array
   date 4/Aug/2022  10:51pm */
class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector <int> vec;
        int sum = 0;
        for(int i=0; i < nums.size(); i++){
            sum += nums[i];
            vec.push_back(sum);
        }
        return vec;
        
    }
};