class Solution {
public:
    int uniquePaths(int m, int n) {
        int totalsteps = m+n-2;
        int r = min(m,n)-1;
        double res = 1.0;
        for(int i=1;i<=r;i++){
            res = res* (totalsteps-r+i)/i;
        }
        return (int)res;
    }
};