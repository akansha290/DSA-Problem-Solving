class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int tar2 = target - nums[i] - nums[j];
                int left=j+1, right=n-1;
                while(left<right){
                    int x = nums[left]+nums[right];
                    if(x<tar2) left++;
                    else if(x>tar2) right--;
                    else{
                        vector<int> v(4,0);
                        v[0] = nums[i];
                        v[1] = nums[j];
                        v[2] = nums[left];
                        v[3] = nums[right];
                        ans.push_back(v);
                        
                        while(left<right and nums[left]==v[2]) left++;
                        while(left<right and nums[right]==v[3]) right--;
                        
                    }
                }
                while(j+1<n and nums[j+1]==nums[j]) j++;
            }
            while(i+1<n and nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};