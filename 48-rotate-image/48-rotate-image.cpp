class Solution {
public:
    void rotate(vector<vector<int>>& mat) {
        int r=mat.size(), c = mat[0].size();
        vector<vector<int>>v;
        for(int i=0;i<r;i++){
            vector<int> temp;
            for(int j=c-1;j>=0;j--){
                temp.push_back(mat[j][i]);
            }
            v.push_back(temp);
        }
        mat.clear();
        mat=v;
        v.clear();
    }
};