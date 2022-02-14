class Solution {
public:
    bool bs(vector<int>v,int target){
        int lo=0,hi=v.size();
        while(lo<=hi){
            int mid = (lo+hi)/2;
            if(v[mid]==target) return true;
            if(target<v[mid]) hi = mid-1;
            else lo = mid+1;
        }
        return false;
    }
    bool searchMatrix(vector<vector<int>>& mat, int target) {
        int m=mat.size(),n=mat[0].size();
        for(int i=0;i<m;i++){
            vector<int> temp = mat[i];
            if(mat[i][0]==target or mat[i][n-1]==target) return true;
            else if(mat[i][0]<target and mat[i][n-1]>target)
                return bs(temp,target);
        }
        return false;
    }
};