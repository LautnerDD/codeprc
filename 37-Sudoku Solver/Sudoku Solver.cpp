class Solution {
public:
    void solveSudoku(vector<vector<char>>& board) {
        if(board.empty()||board.size()!=9||board[0].size()!=9) return;
        dfs(board,0,0);
    }
    bool dfs(vector<vector<char>>& board,int i,int j){
        if(i==9) return true;
        if(j>=9) return dfs(board,i+1,0);
        if(board[i][j]=='.'){
            for(int k=1;k<=9;k++){
                board[i][j]=(char)(k+'0');
                if(truevalue(board,i,j))
                    if(dfs(board,i,j+1))
                        return true;
                board[i][j]='.';
                    
            }
        }else
            return dfs(board,i,j+1);
        return false;
    }
    bool truevalue(vector<vector<char>>& board,int i,int j){
        for(int row=0;row<9;row++){
            if(row!=j&&board[i][row]==board[i][j])
                return false;
        }
        for(int col=0;col<9;col++){
            if(col!=i&&board[col][j]==board[i][j])
                return false;
        }
        for(int row=i/3*3;row<i/3*3+3;row++){
            for(int col=j/3*3;col<j/3*3+3;col++){
                if((row!=i||col!=j)&&board[row][col]==board[i][j])
                    return false;
            }
        }
        return true;
    }
};
