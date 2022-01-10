class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> a;
        unordered_map<int,int> mp;
        int n=nums.size();
        for(int i=0;i<n;i++){
            if(mp.find(target-nums[i])!=mp.end()){
                a.push_back(mp[target-nums[i]]);
                a.push_back(i);
                return a;
            }
            else{
                mp[nums[i]]=i;
            }
        }
        return a;
    }
};