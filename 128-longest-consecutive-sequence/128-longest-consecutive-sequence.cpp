class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int max_length = 0;
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        for(int i=0;i<nums.size();i++){
            if(st.find(nums[i]-1)==st.end()){
                int ele = nums[i];
                int cnt = 1;
                while(st.find(ele+1)!=st.end()){
                    ele +=1;
                    cnt +=1;
                }
                max_length = max(max_length,cnt);
            }
            
        }
        return max_length;
    }
};