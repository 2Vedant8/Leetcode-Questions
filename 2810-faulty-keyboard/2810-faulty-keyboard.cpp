class Solution
{
    public:
        string finalString(string s)
        {
            string ans;
            for (auto string : s)
            {
                if (string == 'i')
                {
                    reverse(ans.begin(), ans.end());
                }
                else
                {
                    ans = ans + string;
                }
            }
            return ans;
        }
};