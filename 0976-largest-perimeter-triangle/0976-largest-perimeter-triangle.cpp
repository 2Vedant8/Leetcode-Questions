class Solution {
public:
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 0;
        for(int i = nums.size()-3; i >= 0; i--)
        {
            if(nums[i] + nums[i+1] > nums[i+2])
            {
                ans =  nums[i] + nums[i+1] + nums[i+2];
                break;
            }
        }

        return ans;
    }
};