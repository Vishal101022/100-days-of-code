// TwoSum problem 
vector<int> twoSum(vector<int>& nums, int target){
    // solved using two-pointer TC O(n lon n)
    // SC O(n)
    int n=nums.size();
    vector<pair<int, int>> Array(n);
    //inserting each value with its index
    for(int i=0; i<n; i++)
       Array[i]={nums[i],i};

    sort(Array.begin(),Array.end()); // sorting O(logn)

    int left,right,sum;
    left=0;
    right=n-1;
    sum=0;
    while(left<right){
        sum=Array[left].first + Array[right].first;
        if(sum==target)
           return {Array[left].second,Array[right].second}; // return index of pair
        else if(sum>target)
           right--;  //decrease  right if sum>target
        else
           left++;   // increase left if sum<target
    }
    return {-1,-1};
}

