class Solution {
public:
    int hammingWeight(uint32_t n) {
        //return __builtin_popcount(n);
        int count =0;
        uint32_t bit = 1;
        for(int i=0; i<32; i++)
        {
            if((n&bit)!=0)
            {
                count ++;
            }
            bit = bit<<1;
        }
        return count;
    }
};