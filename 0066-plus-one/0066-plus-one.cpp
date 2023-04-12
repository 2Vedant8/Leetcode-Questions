class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n=digits.size(); int i,sum=0,temp;
        i=n-1;
        while(i>=0){
            if(digits[i]<9){
                digits[i]++;
                return digits;
            }
            digits[i]=0;
            i--;
        }
        if(digits[0]==0){
            digits.insert(digits.begin(),1);
            
        }
        return digits;
    }
};