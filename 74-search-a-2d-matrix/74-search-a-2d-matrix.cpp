class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        if(!mat.size()) return false;
        int row=mat.size(), col=mat[0].size();
        int lo=0, hi = (row*col)-1;
        while(lo<=hi){
            int mid = (lo+hi)/2;
            int x = mat[mid/col][mid%col];
            cout<<mid<<""<<x<<" ";
            if(x==target) return true;
            else if(target<x) hi=mid-1;
            else lo = mid+1;
        }
        return false;
    }
};