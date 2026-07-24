class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        bool rows[9][9] = {false};
        bool column[9][9] = {false};
        bool grid[9][9] = {false};

        for(int r = 0; r < 9; r++){
            for(int c =0; c < 9; c++){
                if(board[r][c] == '.') continue;

                int num = board[r][c] - '1';
                int boxIndex = (r / 3) * 3 + (c / 3);

                if(rows[r][num] || column[c][num] || grid[boxIndex][num]){
                    return false;
                }

                rows[r][num] = true;
                column[c][num] = true;
                grid[boxIndex][num] = true;



            }
        }
        return true;
        
    }
};
