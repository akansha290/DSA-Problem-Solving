class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxsum = INT_MIN, currsum=0;
        for(auto it:nums){
            currsum+=it;
            maxsum = max(currsum,maxsum);
            currsum = currsum<0?0:currsum;
        }
        return maxsum;
    }
};