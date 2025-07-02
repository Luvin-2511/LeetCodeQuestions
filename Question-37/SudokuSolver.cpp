class Solution {
public:
    bool isSafe(vector<vector<char>>& board, int row , int col  ,char dig){
        for(int i=0;i<9;i++){
            if(board[i][col]==dig){
                return false;
            }
        }
        for(int j=0;j<9;j++){
            if(board[row][j]==dig){
                return false;
            }
        }

        int sr=(row/3)*3;
        int sc=(col/3)*3;

        for(int i=sr;i<=sr+2;i++){
            for(int j=sc;j<=sc+2;j++){
                 if(board[i][j]==dig){
                return false;
            }
        }
        }
        return true;
    }


    bool SudokuSolver(vector<vector<char>>& board, int row ,int col){
        if(row==9){
            return true;
        }

        int NextRow = row;
        int NextCol = col+1;
        if(NextCol==9){
            NextCol=0;
            NextRow=row+1;
        }
        if(board[row][col]!='.'){
           return SudokuSolver(board,NextRow,NextCol);
        }
        for(char dig='1' ; dig<='9' ; dig++){
            if(isSafe(board,row,col,dig)){
                board[row][col]=dig;
                if(SudokuSolver(board,NextRow,NextCol)) return true;
                board[row][col]='.';
            }
        }
        return false;
    }

    void solveSudoku(vector<vector<char>>& board) {
      SudokuSolver(board,0,0);
    }
};