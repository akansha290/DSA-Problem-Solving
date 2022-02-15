class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        vector<vector<int>> ans;
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n<4) return ans;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int target2 = target - nums[i] -nums[j];
                int left=j+1, right=n-1;
                while(left<right){
                    
                    int x = nums[left] + nums[right];
                    if(x<target2) left++;
                    else if(x>target2) right--;
                    else{
                        vector<int> quad(4,0);
                        quad[0]=nums[i];
                        quad[1]=nums[j];
                        quad[2]=nums[left];
                        quad[3]=nums[right];
                    
                    while(left<right and nums[left]==quad[2]) left++;
                    while(left<right and nums[right]==quad[3]) right--;
                    ans.push_back(quad);}
                 }
                
                while(j+1<n and nums[j+1]==nums[j]) j++;
            }
            while(i+1<n and nums[i+1]==nums[i]) i++;
        }
        return ans;
    }
};