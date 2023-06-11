class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int min = nums[0];
        int max = nums[nums.size()-1];
        for(int i =0; i<nums.size(); i++)
        {
            if(nums[i]!=min && nums[i]!=max)
            {
                return nums[i];
            }
        }
        return -1;
        
    }
};