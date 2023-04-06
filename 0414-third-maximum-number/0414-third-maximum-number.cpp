class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int ans = 0;
        sort(nums.begin() , nums.end());
        nums.erase(std::unique(nums.begin(), nums.end()), nums.end());
        if(nums.size() >= 3)
        {
            ans = nums[nums.size()-3];
        }
        else{
            ans = nums[nums.size()-1];
        }
        return ans;
        
    }
};