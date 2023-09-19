class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]+(n*(nums[nums[i]]%n));//ek hi me 2 value store extra space use nhi hogii
        }
        for(int i=0;i<n;i++){
            nums[i]/=n;
        }
        return nums;
    }
};