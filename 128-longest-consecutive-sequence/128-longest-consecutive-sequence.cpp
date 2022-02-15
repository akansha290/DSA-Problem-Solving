class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int> st;
        for(auto num:nums){
            st.insert(num);
        }
        int longestStreak = 0;
        for(auto it:nums){
            if(!st.count(it-1)){
                int currnum = it;
                int currstreak = 1;
                
                while(st.count(currnum+1)){
                    currnum+=1;
                    currstreak+=1;
                }
                longestStreak = max(longestStreak,currstreak);
            }
            
        }
        return longestStreak;
    }
};