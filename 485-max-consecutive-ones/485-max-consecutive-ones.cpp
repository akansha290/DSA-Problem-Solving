class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt = 0,temp_cnt=0;
        for(auto it:nums){
            if(it){
                temp_cnt++;
            }
            else{
                max_cnt = max(max_cnt,temp_cnt);
                temp_cnt=0;
            }
        }
        return max(max_cnt,temp_cnt);
    }
};