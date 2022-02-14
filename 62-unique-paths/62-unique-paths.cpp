class Solution {
public:
    //DP Method
    int dp(int m,int n,int i,int j, vector<vector<int>>& v){
        if(i==m-1 and j==n-1) return 1;
        if(i>=m or j>=n) return 0;
        if(v[i][j]!=-1) return v[i][j];
        return v[i][j] = dp(m,n,i+1,j,v) + dp(m,n,i,j+1,v); 
    }
    
    //Gives TLE ->Recursion Method;
    int rec(int m,int n,int i,int j){
        if(i==m-1 and j==n-1) return 1;
        if(i>=m or j>=n) return 0;
        return rec(m,n,i+1,j) + rec(m,n,i,j+1);
    }
    int uniquePaths(int m, int n) {
        if(m==0 or n==0) return 0;
        // return rec(m,n,0,0);
        vector<vector<int>>v(m,vector<int>(n,-1));
        return dp(m,n,0,0,v);
    }
};