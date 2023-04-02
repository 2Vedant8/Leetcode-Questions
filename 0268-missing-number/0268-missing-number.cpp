class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int XOR = 0,total=0 ,i ;
        for(i=0;i<nums.size();i++){
           XOR^=nums[i];        // XOR of nos. in nums
           total^=i;            // XOR of all nos. from 0 till nums.size()
        }
        total^=i;
        return total^XOR;
    }
};