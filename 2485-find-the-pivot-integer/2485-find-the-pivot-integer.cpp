class Solution
{
    public:
        int pivotInteger(int n)
        {
            int sum = 0, rsum = 0;
            for (int i = 1; i <= n; i++)
            {

                sum = sum + i;
            }
            for (int i = n; i > 0; i--)
            {
                rsum = rsum + i;
                if (rsum == sum)
                {
                    return i;
                }
                sum = sum - i;
            }
            return -1;
        }
};