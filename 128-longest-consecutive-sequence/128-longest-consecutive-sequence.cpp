class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
      unordered_set<int> st;
        for(auto num:nums){
            st.insert(num);
        }
        int longestStreak = 0;
        for(auto it:nums){
            if(st.find(it-1)==st.end()){
                int currnum = it;
                int currstreak = 1;
                
                while(st.find(currnum+1)!=st.end()){
                    currnum+=1;
                    currstreak+=1;
                }
                longestStreak = max(longestStreak,currstreak);
            }
            
        }
        return longestStreak;
    }
};