class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> mergeInt;
        if(!intervals.size()) return mergeInt;
        sort(intervals.begin(),intervals.end());
        vector<int> temp=intervals[0];
        for(auto it:intervals){
            if(it[0]<=temp[1]){
                temp[1] = max(it[1],temp[1]);
                
            }
            else{
                mergeInt.push_back(temp);
                temp=it;
            }
        }
        mergeInt.push_back(temp);
        return mergeInt;
    }
};