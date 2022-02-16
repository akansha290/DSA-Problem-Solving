class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size();
        int col = mat[0].size();
        if(!mat.size()) return false;
        int lo=0,hi = (row*col)-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int x = mat[mid/col][mid%col];
            if(x==target) return true;
            if(target<x) hi=mid-1;
            else lo=mid+1;
        }
        return false;
        
    }
};