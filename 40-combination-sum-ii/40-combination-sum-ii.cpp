class Solution {
public:
    void calc(int ind,vector<vector<int>> &ans,vector<int> &ds,vector<int> &nums,int target){
        if(target==0){
            ans.push_back(ds);
            return;
        }
        for(int i=ind;i<nums.size();i++){
            if(i>ind and nums[i]==nums[i-1]) continue;
            if(nums[i]>target) break;
            ds.push_back(nums[i]);
            calc(i+1,ans,ds,nums,target-nums[i]);
            ds.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        sort(candidates.begin(),candidates.end());
        calc(0,ans,ds,candidates,target);
        return ans;
    }
};