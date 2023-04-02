class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int>ans;
        int a = 0;
        int b =  n;
        while(a<n && b<nums.size())
        {
            ans.push_back(nums[a]);
            ans.push_back(nums[b]);
            a++;
            b++;
        }
        return ans;
        
        
    }
};