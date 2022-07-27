class Solution {
public:
    void calc(int col,vector<string>& board, vector<vector<string>>& ans,int n,vector<int>& leftrow,vector<int>& lowerdiag,vector<int>& upperdiag){
        if(col==n){
            ans.push_back(board);
            return;
        }
        for(int row=0;row<n;row++){
            if(leftrow[row]==0 and lowerdiag[row+col]==0 and upperdiag[(n-1)+(col-row)]==0){
                board[row][col]='Q';
                leftrow[row] = 1;
                lowerdiag[row+col] = 1;
                upperdiag[(n-1)+(col-row)] =1;
                calc(col+1,board,ans,n,leftrow,lowerdiag,upperdiag);
                board[row][col]='.';
                leftrow[row] = 0;
                lowerdiag[row+col] = 0;
                upperdiag[(n-1)+(col-row)] = 0;
            }
        }
        
    }
    
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> ans;
        vector<string> board(n);
        string s(n,'.');
        for(int i=0;i<n;i++){
            board[i]=s;
        }
        vector<int> leftrow(n,0), lowerdiag(2*n-1,0), upperdiag(2*n-1,0);
        calc(0,board,ans,n,leftrow,lowerdiag,upperdiag);
        return ans;
    }
};