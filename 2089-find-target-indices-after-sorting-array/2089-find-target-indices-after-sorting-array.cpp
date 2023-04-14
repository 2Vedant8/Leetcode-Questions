// class Solution {
// public:
//     vector<int> targetIndices(vector<int>& nums, int target) {
//          sort(nums.begin(), nums.end());
//         int n = nums.size();
//         vector<int> ans;
//         for (int i = 0; i < n; ++i) {
//             if (nums[i] == target) {
//                 ans.push_back(i);
//             }
//         }
//         return ans;
//     }
// };
//USING BINARY SEARCH/////////
class Solution
{
    public:
        vector<int> targetIndices(vector<int> &nums, int target)
        {

            sort(nums.begin(), nums.end());
            int n = nums.size();
            vector<int> ans;
            int left = 0;
            int right = n - 1;

            while (left <= right)
            {
                int mid = left + (right - left) / 2;
                if (nums[mid] == target)
                {
                    ans.push_back(mid);

                    int i = mid - 1;
                    while (i >= 0 && nums[i] == target)
                    {
                        ans.push_back(i);
                        i--;
                    }
                    int j = mid + 1;
                    while (j < n && nums[j] == target)
                    {
                        ans.push_back(j);
                        j++;
                    }
                    sort(ans.begin(), ans.end());
                    return ans;
                }
                else if (nums[mid] < target)
                {
                    left = mid + 1;
                }
                else
                {
                    right = mid - 1;
                }
            }
            
            return ans;
        }
};