class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        if(nums.size()==1) return nums[0];
        int max_sum=INT_MIN,curr_sum=0;
        for(auto it:nums){
            curr_sum+=it;
            max_sum = max(max_sum,curr_sum);
            curr_sum = curr_sum<=0?0:curr_sum;
        }
        return max_sum;
        
    }
};