class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int ans = 0;
        for(auto it:nums){
            ans += (int)log10(it)&1;
        }
        return ans;
    }
};