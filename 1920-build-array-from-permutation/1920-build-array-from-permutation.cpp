class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans; // Initialize an empty ans vector
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[nums[i]]);
        }
        return ans;
    }
};
