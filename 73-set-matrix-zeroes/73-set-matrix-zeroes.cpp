class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        
        int row=mat.size(), col = mat[0].size();
        vector<bool> r(row,-1), c(col,-1);
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(mat[i][j]==0) {
                    r[i]=0;
                    c[j]=0;
                }
            }
        }
        for(int i=0;i<row;i++){
            for(int j=0;j<col;j++){
                if(r[i]==0 or c[j]==0){
                    mat[i][j]=0;
                }
            }
        }
    }
};