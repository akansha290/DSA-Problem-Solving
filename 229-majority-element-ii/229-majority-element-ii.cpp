class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        int sz = nums.size();
        int can1 = INT_MIN, can2  = INT_MIN;
        int cnt1 = 0, cnt2 = 0;
        for(int i=0;i<sz;i++){
            if(nums[i]==can1) cnt1++;
            else if(nums[i]==can2) cnt2++;
            else if(cnt1==0) {
                can1=nums[i];
                cnt1 = 1;
            }
            else if(cnt2==0) {
                can2=nums[i];
                cnt2 = 1;
            }
            else
            {
                cnt1--;
                cnt2--;
            }
        }
        cnt1 = 0, cnt2=0;
        for(auto it:nums){
            if(it==can1) cnt1++;
            else if(it==can2) cnt2++;
        }
        cout<<can1<<" "<<can2;
        vector<int> ans;
        if(cnt1>(sz/3)) ans.push_back(can1);
        if(cnt2>(sz/3)) ans.push_back(can2);
        return ans;
    }
};