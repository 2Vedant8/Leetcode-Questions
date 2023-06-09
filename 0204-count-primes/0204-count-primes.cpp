class Solution {
public:
    int countPrimes(int n) {
        if(n<=1)
        {
            return 0;
        }
        vector<bool>isprime(n , true);
        int ans = 0;
        for(int i=2; i<n; i++)
        {
            if(isprime[i])
            {
                ans++;
                for(int j=2*i; j<n; j = j + i)
                {
                    isprime[j] = false;
                }
            }
        }
        return ans;
    }
};