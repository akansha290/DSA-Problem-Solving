class Solution {
public:
    void addSubset(int ind,vector<vector<int>> &ans,vector<int>& nums,vector<int> temp){
        // vector<int> temp;
        if(ind==nums.size()){
            ans.push_back(temp);
            return;
        }
        addSubset(ind+1,ans,nums,temp);
        temp.push_back(nums[ind]);
        addSubset(ind+1,ans,nums,temp);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> temp;
        addSubset(0,ans,nums,temp);
        return ans;
    }
};