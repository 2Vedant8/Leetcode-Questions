class Solution
{
public:
    int pivotInteger(int n)
    {
        int sum = n * (n + 1) / 2; // Formula to calculate sum of integers from 1 to n
        int rsum = 0;
        for (int i = n; i > 0; i--)
        {
            rsum += i;
            if (rsum == sum)
            {
                return i;
            }
            sum -= i;
        }
        return -1;
    }
};