class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        if(nums.size()==1) return 1;
        if(nums.size()==2) return 2;
        int n = nums.size();
        int ans = 0;
        int maxele = *max_element(nums.begin(),nums.end());
        int minele = *min_element(nums.begin(),nums.end());
        int pos1, pos2;
        pos1 = find(nums.begin(),nums.end(),maxele) - nums.begin();
        pos2 = find(nums.begin(),nums.end(),minele) - nums.begin();
        if(pos1>pos2) swap(pos1,pos2);
        
        return min({pos2+1,pos1+(n-pos2)+1,n-pos1});
        
        // cout<<maxele<<" "<<pos1<<" "<<minele<<" "<<pos2;
        return ans;
    }
};