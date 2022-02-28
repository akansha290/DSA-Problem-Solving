class Solution {
public:
    int rec_dp(int m,int n,int i,int j,vector<vector<int>> &dp){
        if(i==m-1 and j==n-1) return 1;
        if(i>=m or j>=n) return 0;
        if(dp[i][j]!=-1) return dp[i][j];
        return dp[i][j] = rec_dp(m,n,i+1,j,dp) + rec_dp(m,n,i,j+1,dp);
    }
    int uniquePaths(int m, int n) {
        if(m==0 or n==0) return 0;
        vector<vector<int>>dp(m,vector<int>(n,-1));
        return rec_dp(m,n,0,0,dp);
    }
};