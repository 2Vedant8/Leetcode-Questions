class Solution
{
    public:
        int countNegatives(vector<vector < int>> &matrix)
        {
            int count = 0;
            int m = matrix.size();	// Number of rows
            int n = matrix[0].size();	// Number of columns

            int row = 0;
            int col = n - 1;	// Start from the top-right corner

            while (row < m && col >= 0)
            {
                if (matrix[row][col] < 0)
                {
                    count += (m - row);	//Increment count by the number of remainingrows
                    col--;	// Move to the previous column
                }
                else
                {
                    row++;	// Move to the next row
                }
            }

            return count;
        }
};
///////////////BRUTE FORCE/////////////
// int count = 0;
// for(int i=0; i < grid.size(); i++)
// {
//     for(int j=0; j < grid[0].size(); j++)
//     {
//         if(grid[i][j] < 0)
//         {
//             count++;
//         }
//     }
// }
// return count;
////////////////BRUTE FORCE/////////////