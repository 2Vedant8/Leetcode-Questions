class Solution {
public:
    
    void printpermutations(vector<vector<int>>&ans, vector<int>& nums, int i)
{
    // base case
    if (i >= nums.size())
    {
        ans.push_back(nums);
        return;
    }
    // ek case
    for (int j = i; j < nums.size(); j++)
    {
        swap(nums[i], nums[j]);
        // recursive call
        printpermutations(ans , nums, i + 1);

        // backtracking
        swap(nums[i], nums[j]);
    }
}
    
    vector<vector<int>> permute(vector<int>& nums) {
    vector<vector<int>>ans;
    int i = 0;
    printpermutations(ans, nums, i);
    return ans;
        
    }
};