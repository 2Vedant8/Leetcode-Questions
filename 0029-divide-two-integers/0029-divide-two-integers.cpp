class Solution
{
public:
    int divide(int dividend, int divisor)
    {
        // Handle special cases
        if (dividend == INT_MIN && divisor == -1)
        {
            return INT_MAX; // Overflow case
        }

        int sign = 1;
        if ((dividend < 0 && divisor > 0) || (dividend > 0 && divisor < 0))
        {
            sign = -1; // Update sign for negative results
        }

        long long s = 0;
        long long e = abs((long long)dividend); // Convert to long long to avoid integer overflow
        long long mid;
        long long ans = -1;

        divisor = abs(divisor); // Convert divisor to positive

        while (s <= e)
        {
            mid = s + (e - s) / 2;

            if (mid * divisor == abs((long long)dividend))
            {
                ans = mid;
                break;
            }
            else if (mid * divisor < abs((long long)dividend))
            {
                ans = mid;
                s = mid + 1;
            }
            else
            {
                e = mid - 1;
            }
        }

        if (sign == -1)
        {
            ans = -ans;
        }

        return ans;
    }
};
