class Solution {
public:
    int findMin(vector<int>& nums) {
        int i = 0, j = nums.size()-1,mid;
        while(i<j){
            mid = ((j-i)>>1)+i;
            if(nums[mid]>nums[j]){
                i = mid+1;
            }else{
                j--;
            }
        }
        return nums[i];
    }
};