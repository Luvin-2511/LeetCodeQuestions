class Solution {
public:
    bool isSafe(vector <string>& board , int row ,int col ,int n){
        //for row checking
        for(int j=0;j<col;j++){
            if(board[row][j]=='Q')return false;
        }
        //for col checking
        for(int i=0;i<row;i++){
            if(board[i][col]=='Q')return false;
        }
        //for left upper diagonal
        for(int i=row-1,j=col-1;j>=0 && i>=0 ; i--,j--){
            if(board[i][j]=='Q')return false;
        }
        //for right upper diagonal
        for(int i=row-1,j=col+1;i>=0 && j<n;i--;j++){
            if(board[i][j]=='Q')return false;
        }
        return true;
    }
    void Nqueens(vector<string>&board ,int row , int n,  vector<vector<string>>&ans){
        if(row==n){
            ans.push_back({board});
            return;
        }
        for(int j=0;j<n;j++){
            if(isSafe(board,row,j,n)){
                board[row][j]='Q';
                Nqueens(board,row+1,n,ans);
                board[row][j]='.';
            }
        }
    }


    vector<vector<string>> solveNQueens(int n) {
        vector<string>board(n,string(n,'.'));
        vector<vector<string>> ans;
        Nqueens(board,0,n,ans);
        return ans;
    }
};