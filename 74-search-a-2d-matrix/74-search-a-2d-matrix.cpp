class Solution {
public:
    
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int row = mat.size(), col = mat[0].size();
        int tot = (row*col)-1;
        int lo=0, hi=tot;
        while(lo<=hi){
            int mid = lo+(hi-lo)/2;
            int x = mat[mid/col][mid%col];
            if(x==target) return true;
            if(x<target) lo=mid+1;
            else hi=mid-1;
        }
        return false;
    }
};