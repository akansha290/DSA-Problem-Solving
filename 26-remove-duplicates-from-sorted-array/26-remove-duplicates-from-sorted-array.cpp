class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        set<int> st;
        for(auto num:nums){
            st.insert(num);
        }
        int len = st.size();
        int j=0;
        for(int x:st){
            nums[j++]=x;
        }
        return len;
    }
};