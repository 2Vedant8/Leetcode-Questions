/*
 * // This is the custom function interface.
 * // You should not implement it, or speculate about its implementation
 * class CustomFunction {
 * public:
 *     // Returns f(x, y) for any given positive integers x and y.
 *     // Note that f(x, y) is increasing with respect to both x and y.
 *     // i.e. f(x, y) < f(x + 1, y), f(x, y) < f(x, y + 1)
 *     int f(int x, int y);
 * };
 */

class Solution {
public:
    vector<vector<int>> findSolution(CustomFunction& customfunction, int z) {

        vector<vector<int>>ans;
        for(int i=1; i<=1000; i++)
        {
            for(int j=1; j<=1000; j++)
            {
                vector<int>temp;
                if(customfunction.f(i,j)==z)
                {
                    temp.push_back(i);
                    temp.push_back(j);
                    ans.push_back(temp);
                }
                else if(customfunction.f(i,j)>z)
                {
                    break;
                }
            }
        }
            return ans;
    }
};