class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int row = matrix.size(), col = matrix[0].size();
        int r = 0, c = col-1;
        while(r<row and c>=0){
            if(matrix[r][c] == target){
                return true;
            }
            matrix[r][c] > target ? c-- : r++;
        }
        return false;
    }
};