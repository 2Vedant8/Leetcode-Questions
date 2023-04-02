class Solution {
public:
    int xorOperation(int n, int start) {
int XOR=0;
    while(n>=1)
        XOR ^= start + 2 * --n;        
    return XOR;
    }
   
};