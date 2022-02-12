class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        vector<bool> check(nums.size()+1,0);
        int i;
        for(i=0;i<nums.size();i++){
            if(check[nums[i]]) break;
            else check[nums[i]]=1;
        }
        return nums[i]; 
    }
};