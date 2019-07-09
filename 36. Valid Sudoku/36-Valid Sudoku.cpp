class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for(int i=0;i<9;i++){
            unordered_map<char,int> row;
            unordered_map<char,int> col;
            unordered_map<char,int> nine;
            for(int j=0;j<9;j++){
                if(board[i][j]==','||board[i][j]=='.'||row.find(board[i][j])==row.end())
                    row[board[i][j]]=1;
                else
                    return false;
                if(col.find(board[j][i])==col.end()||board[j][i]=='.'||board[j][i]==',')
                    col[board[j][i]]=1;
                else return false;
                if(nine.find(board[i/3*3+j/3][i%3*3+j%3])==nine.end()||board[i/3*3+j/3][i%3*3+j%3]==','||board[i/3*3+j/3][i%3*3+j%3]=='.')
                    nine[board[i/3*3+j/3][i%3*3+j%3]]=1;
                else return false;
            }
            
        }
        return true;
        
    }
};
