class Solution {
public:
    int check(int i,int j,int m,int n,vector<vector<int>>&dp){
        if(i==m-1 and j==n-1) return 1;
        if(i>=m or j>=n) return 0;
        if(dp[i][j])
            return dp[i][j];
        else
            return dp[i][j] = check(i+1,j,m,n,dp) + check(i,j+1,m,n,dp);
    }
    int uniquePaths(int m, int n) {
       vector<vector<int>> dp(m,vector<int> (n,0));
       int ans = check(0,0,m,n,dp);
        return ans;
    }
};