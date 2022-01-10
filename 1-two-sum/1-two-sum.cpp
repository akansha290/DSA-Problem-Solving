class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        /* If array is Sorted
        vector<int> a;
        sort(nums.begin(),nums.end());
        int i=0,j=nums.size()-1;
        while(i<j){
            if(nums[i]+nums[j]==target){
                a.push_back(i);
                a.push_back(j);
                return a;
            }
            else if(nums[i]+nums[j]<target){
                i++;
            }
            else{
                j--;
            }
        }
        return a;*/
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