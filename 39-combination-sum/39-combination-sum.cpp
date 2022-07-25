class Solution {
public:
    void calc(int ind,vector<vector<int>>& ans,vector<int> &ds,vector<int>& candidates,int target){
        if(ind==candidates.size()){
            if(target==0)
                ans.push_back(ds);
            return;
        }
        if(candidates[ind]<=target){
            ds.push_back(candidates[ind]);
            calc(ind,ans,ds,candidates,target-candidates[ind]);
            ds.pop_back();
        }
        calc(ind+1,ans,ds,candidates,target);
        
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<vector<int>> ans;
        vector<int> ds;
        calc(0,ans,ds,candidates,target);
        return ans;
    }
};