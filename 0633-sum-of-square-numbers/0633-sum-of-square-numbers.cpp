class Solution {
public:
    bool judgeSquareSum(int c) {
        long start = 0;
        long end = sqrt(c);
        while(start <=end)
        {
             long total = (start*start + end*end);
        if(total==c)
        {
            return true;
        }
        else if(total > c)
        {
            end--;
        }
        else{
            start++;
        }

        }
        return false;
    }
};