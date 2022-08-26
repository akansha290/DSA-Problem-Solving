class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxlength = 0;
        int left=0, right = 0;
        int n = s.size();
        map<char,int> mpp;
        while(right<n){
        
            if(mpp.find(s[right]) != mpp.end())
                left = max(left,mpp[s[right]]+1);
            mpp[s[right]] = right;
            
            maxlength = max(maxlength,right-left+1);
            right+=1;
        }
        return maxlength;
    }
};