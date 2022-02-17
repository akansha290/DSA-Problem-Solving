class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> st;
        for(auto it:nums){
            st.insert(it);
        }
        int longestStreak = 0;
        for(auto it:nums){
            if(st.find(it-1)==st.end()){
                int ele = it;
                int cnt = 1;
                while(st.find(ele+1)!=st.end()){
                    ele+=1;
                    cnt++;
                }
                longestStreak = max(longestStreak,cnt);
            }
            
        }
        return longestStreak;
    }
};