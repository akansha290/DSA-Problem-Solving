class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN, tempsum=0;
        for(auto it:nums){
            tempsum+=it;
            maxsum = max(maxsum,tempsum);
            tempsum = tempsum<0?0:tempsum;
        }
        return maxsum;
    }
};