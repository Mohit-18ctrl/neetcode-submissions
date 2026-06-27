class Solution {
public:
    bool helper(vector<vector<char>>& board, int i, int j) {
        //check row
        for(int l= 0; l < 9; l++) {
            if(l != j && board[i][l] == board[i][j])
                return false;
        }
        //check col
        for(int c= 0; c < 9; c++) {
            if(c != i && board[c][j] == board[i][j])
                return false;
        }
        //check grid
        int start= i- (i % 3), end = j- (j % 3);
        for(int l = start; l < start + 3; l++) {
            for(int c = end; c < end + 3; c++) {
                if(!(l == i && c == j) && board[i][j] == board[l][c])
                    return false;
            }
        }
        return true;
    }
    bool isValidSudoku(vector<vector<char>>& board) {

        for(int i = 0; i < 9; i++) {
            for(int j = 0; j < 9; j++) {
                if(board[i][j] != '.') {
                    if( !helper(board, i, j)) {
                        return false;
                    }
                }
            }
        }
        return true;
    }
};
