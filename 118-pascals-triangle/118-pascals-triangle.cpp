class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        int n=1;
        for(int i=0;i<numRows;i++){
            int n=1;
            vector<int> row;
            for(int j=0;j<=i;j++){
                row.push_back(n);
                n = n*(i-j)/(j+1);
            }
            ans.push_back(row);
        }
        return ans;
    }
    
};