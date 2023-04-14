class Solution
{
    public:
        bool checkPerfectNumber(int num)
        {
            if (num <= 1)
            {
                return false;
            }

            int ans = 0;
            for (int i = 1; i * i <= num; i++)
            {
            	
                if (num % i == 0)
                {
                    ans += i;	
                    if (i != num / i && i != 1)
                    {
                    	
                        ans += num / i;
                    }
                }
            }

            return ans == num;
        }
};