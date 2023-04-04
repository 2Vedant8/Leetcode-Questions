class Solution {
public:
    int sum(int n)
    {
        return n < 2 ? n : n % 10 + sum(n / 10);
    }

    int product(int n)
    {
        return n < 2 ? 1 : n % 10 * product(n / 10);
    }

    int subtractProductAndSum(int n)
    {
        return product(n) - sum(n);
    }
};