class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ele = 0, cnt = 0;
        for(auto num:nums){
            if(cnt==0){
                ele = num;
            }
            if(num==ele)
                cnt+=1;
            else
                cnt-=1;
        }
        return ele;
    }
};