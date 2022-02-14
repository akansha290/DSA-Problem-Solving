class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int maxsum = INT_MIN,sum=0;
        for(auto it:nums){
            sum += it;
            maxsum = max(maxsum,sum);
            sum = sum<=0?0:sum;
        }
        return maxsum;
    }
};