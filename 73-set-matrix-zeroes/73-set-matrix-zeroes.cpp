class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int r = mat.size(), c = mat[0].size();
        vector<int> row,col;
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(mat[i][j]==0){
                    row.push_back(i);
                    col.push_back(j);
                }
            }
        }
        
        for(int i=0;i<r;i++){
            for(int j=0;j<c;j++){
                if(find(row.begin(),row.end(),i)!=row.end() or find(col.begin(),col.end(),j)!=col.end()){
                    // cout<<i<<" "<<j<<endl;
                    mat[i][j] = 0;
                }
            }
        }
    }
};