class Solution {
public:
    void setZeroes(vector<vector<int>>& mat) {
        int row = mat.size(),col=mat[0].size();
        bool col1 = false;
        for(int i=0;i<row;i++){
            if(mat[i][0]==0)
                col1=true;
            for(int j=1;j<col;j++){
                if(mat[i][j]==0){
                    mat[i][0]=0;
                    mat[0][j]=0;
                }
            }
        }
        for(int i=row-1;i>=0;i--){
            for(int j=col-1;j>=1;j--){
                if(mat[i][0]==0 or mat[0][j]==0){
                    mat[i][j]=0;
                }
            }
            if(col1)
                mat[i][0]=0;
        }
    }
};