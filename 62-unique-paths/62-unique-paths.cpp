class Solution {
public:
    int uniquePaths(int m, int n) {
        int totalSteps = m+n-2;
        int r = min(m,n)-1;
        double ans = 1.0;
        for(int i=1;i<=r;i++){
            ans = ans *(totalSteps-i+1)/i;
        }
        return (int)ans;
    }
};