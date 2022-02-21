class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> res;
        int n=nums.size();
        if(n<3)
            return res;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n-2;i++){
            
            if(i==0 or (i>0 and nums[i]!=nums[i-1])){
                int lo=i+1,hi=n-1;
                int tar = 0 - nums[i];
                while(lo<hi){
                    int sum = nums[lo]+nums[hi];
                    // cout<<tar<<" "<<sum<<endl;
                    if(sum==tar){
                        vector<int> temp(3);
                        temp[0] = nums[i];
                        temp[1] = nums[lo];
                        temp[2] = nums[hi];
                        res.push_back(temp);

                        while(lo<hi and nums[lo]==nums[lo+1]) lo++;
                        while(lo<hi and nums[hi]==nums[hi-1]) hi--;
                        lo++;
                        hi--;
                    }
                    else if(sum<tar) lo++;
                    else hi--;
                }
            }
            
        }
        return res;
    }
};