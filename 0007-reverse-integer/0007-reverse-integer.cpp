class Solution {
public:
    int reverse(int x) {
        int ans=0 , rem=0;
        bool IsNeg = false;
        if(x<=INT_MIN){
            return 0;
        }
        if(x<0){
            IsNeg = true;
            x = -x;
        }
        while (x>0){
            if(ans> INT_MAX / 10){
                return 0;
            }
            int digit = x%10;
            ans = ans * 10 + digit;
            x= x/10;
        }
        return IsNeg? -ans : ans;

    }
};