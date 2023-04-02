class Solution {
public:
    long long zeroFilledSubarray(vector<int>& nums) {
      long count = 0;
    long ans = 0;
    for(int i=0;i<nums.size();i++){
        if(nums[i]==0){
          count++;
          ans = ans + count;
        }
        else count=0;
    }
   
    return ans;
        
        
    }
};