class Solution
{
    public:

        bool isSafe(int row, int col, vector<vector < char>> &board, char value)
        {
            int n = board.size();
            for (int i = 0; i < n; i++)
            {

               	//row check
                if (board[row][i] == value)
                {
                    return false;
                }

               	//col check
                if (board[i][col] == value)
                {
                    return false;
                }

               	//3x3 dabba check
                if (board[3 *(row / 3) + (i / 3)][3 *(col / 3) + (i % 3)] == value)
                {
                    return false;
                }
            }
            return true;
        }

    bool solve(vector<vector < char>> &board)
    {
        int n = board.size();
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
               	//vhevk for empty cell
                if (board[i][j] == '.')
                {

                   	//fill values ranging from 1 to 9
                    for (char value = '1'; value <= '9'; value++)
                    {
                       	//check safety first
                        if (isSafe(i, j, board, value))
                        {
                           	//iknsert
                            board[i][j] = value;

                           	//recursion for aage ka solution
                            bool aagekasolution = solve(board);
                            if (aagekasolution == true)
                            {
                                return true;
                            }
                            else
                            {
                                board[i][j] = '.';
                            }
                        }
                    }
                    return false;
                }
            }
        }
        return true;
    }

    void solveSudoku(vector<vector < char>> &board)
    {
        solve(board);
    }
};