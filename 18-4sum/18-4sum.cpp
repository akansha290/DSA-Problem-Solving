class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        long long n = nums.size();
        if(n<=3) return ans;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                long long new_target = target-nums[i]*1L-nums[j];
                long long left = j+1, right = n-1;
                while(left<right){
                    long long newsum = nums[left]+nums[right];
                    vector<int> temp(4,0);
                    if(newsum<new_target) left++;
                    else if(newsum>new_target) right--;
                    else{
                        
                        temp[0] = nums[i];
                        temp[1] = nums[j];
                        temp[2] = nums[left];
                        temp[3] = nums[right];
                        ans.push_back(temp);
                        
                        while(left<right and temp[2]==nums[left]) left++;
                        while(left<right and temp[3]==nums[right]) right--;
                    }
                    
                }
                while(j+1<n and nums[j+1]==nums[j]) j++;
            }
            while(i+1<n and nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};