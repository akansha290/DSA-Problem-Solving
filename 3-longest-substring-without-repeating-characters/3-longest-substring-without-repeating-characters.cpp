class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(!s.size()) return 0;
        int len = 0;
        int left=0,right=0;
        unordered_set<int> st;
        int sz = s.size();
        while(left<=right and right<sz){
            if(st.find(s[right])!=st.end()){
                while(left<right and st.find(s[right])!=st.end()){
                    st.erase(s[left]);
                    left++;
                }
            }
            st.insert(s[right++]);
            len = max(len,right-left+1);
        }
        return len-1;
        
    }
};