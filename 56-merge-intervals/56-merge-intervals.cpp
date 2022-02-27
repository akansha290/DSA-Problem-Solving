class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> merged;
        int n = intervals.size();
        if(n<=1)
            return intervals;
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(int i=0;i<n;i++){
            if(intervals[i][0]<=temp[1]){
                temp[1] = max(temp[1],intervals[i][1]);
            }
            else{
                merged.push_back(temp);
                temp = intervals[i];
            }
        }
        merged.push_back(temp);
        return merged;
    }
};