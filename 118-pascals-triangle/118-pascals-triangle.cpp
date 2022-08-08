class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> row;
        for(int i=0;i<numRows;i++){
            row.resize(i+1,1);
            for(int j=1;j<i;j++){
                row[j] = ans[i-1][j-1] +ans[i-1][j];
            }
            ans.push_back(row);
        }
        return ans;
    }
};