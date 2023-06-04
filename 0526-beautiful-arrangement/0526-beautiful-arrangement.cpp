class Solution
{
    public:
        void count_helper(vector<int> &v, int &ans, int &n, int currnum)
        {
            if (currnum == n + 1)
            {
                ans++;
                return;
            }
            for (int i = 1; i <= n; ++i)
            {
                if (v[i] == 0 && (currnum % i == 0 || i % currnum == 0))
                {
                    v[i] = currnum;
                    count_helper(v, ans, n, currnum + 1);
                    v[i] = 0;
                }
            }
        }

    int countArrangement(int n)
    {
        vector<int> v(n + 1);
        int ans = 0;
        count_helper(v, ans, n, 1);
        return ans;
    }
};