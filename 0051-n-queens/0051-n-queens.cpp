class Solution
{
    public:
    unordered_map<int, bool> rowcheck;
    unordered_map<int, bool> upperleftdiagonalcheck;
    unordered_map<int, bool> bottomleftdiagonalcheck;

    void storesolution(vector<vector < char>> &board, int n, vector< vector< string>> &ans)
    {
        vector<string> temp;
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            string output = "";
            for (int j = 0; j < n; j++)
            {
                output.push_back(board[i][j]);
            }
            temp.push_back(output);
        }
        ans.push_back(temp);
    }

    bool isSafe(int row, int col, vector<vector < char>> &board, int n)
    {
        if (rowcheck[row] == true)
            return false;

        if (upperleftdiagonalcheck[n - 1 + col - row] == true)
            return false;

        if (bottomleftdiagonalcheck[col + row] == true)
            return false;

        return true;

       	// check karna chahte h kya mai current cellpr queen rakh sakta hu??
       	// int i = row;
       	// int j = col;

       	//	// check row
       	// while (j >= 0)
       	// {
       	//     if (board[i][j] == 'Q')
       	//     {
       	//         return false;
       	//     }
       	//     j--;
       	// }

       	//	// check upper left diagonal
       	// i = row;
       	// j = col;
       	// while (i >= 0 && j >= 0)
       	// {
       	//     if (board[i][j] == 'Q')
       	//     {
       	//         return false;
       	//     }
       	//     i--;
       	//     j--;
       	// }

       	//	// check  bottomleft diagonal
       	// i = row;
       	// j = col;
       	// while (i < n && j >= 0)
       	// {
       	//     if (board[i][j] == 'Q')
       	//     {
       	//         return false;
       	//     }
       	//     i++;
       	//     j--;
       	// }
       	//	// kahi par bhi queen nahi mili iska matlabv safe position matlab return true
       	// return true;
    }

    void solve(vector<vector < char>> &board, int col, int n, vector< vector< string>> &ans)
    {
       	// base case
        if (col >= n)
        {
            storesolution(board, n, ans);
            return;
        }

       	// ek case solve karnaa haii
        for (int row = 0; row < n; row++)
        {
            if (isSafe(row, col, board, n))
            {
               	// rakh do
                board[row][col] = 'Q';
                rowcheck[row] = true;
                upperleftdiagonalcheck[n - 1 + col - row] = true;
                bottomleftdiagonalcheck[row + col] = true;

               	// recursion
                solve(board, col + 1, n, ans);
               	// backtracking
                board[row][col] = '.';
                rowcheck[row] = false;
                upperleftdiagonalcheck[n - 1 + col - row] = false;
                bottomleftdiagonalcheck[row + col] = false;
            }
        }
    }
    vector<vector < string>> solveNQueens(int n)
    {
        vector<vector < char>> board(n, vector<char> (n, '.'));
        vector<vector < string>> ans;
        int col = 0;
        solve(board, col, n, ans);
        return ans;
    }
};