class Solution {
public:
    bool isSafe(int row, int col, vector<vector<char>>& board, char value) {
        int n = board.size();
        for (int i = 0; i < n; i++) {
            // Row check
            if (board[row][i] == value) {
                return false;
            }

            // Column check
            if (board[i][col] == value) {
                return false;
            }

            // 3x3 box check
            if (board[3 * (row / 3) + (i / 3)][3 * (col / 3) + (i % 3)] == value) {
                return false;
            }
        }
        return true;
    }

    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                // Check for filled cell
                if (board[i][j] != '.') {
                    char value = board[i][j];
                    // Temporarily set cell as empty
                    board[i][j] = '.';

                    // Check if the current value violates the rules
                    if (!isSafe(i, j, board, value)) {
                        return false;
                    }

                    // Restore the original value
                    board[i][j] = value;
                }
            }
        }
        return true;
    }
};