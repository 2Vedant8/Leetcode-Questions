class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> output;
        
        for(int i=0; i<nums.size(); i++)
        {
            // Skip duplicates for the first element
            if(i > 0 && nums[i] == nums[i-1]) continue;

            for(int j = i+1; j<nums.size(); j++)
            {
                // Skip duplicates for the second element
                if(j > i+1 && nums[j] == nums[j-1]) continue;

                int k = j+1;
                int l = nums.size() -1 ;
                while(k<l)
                {
                    long long sum = (long long)nums[i]+nums[j]+nums[k] + nums[l]; // Use long long to avoid overflow
                    if(sum==target)
                    {
                        output.push_back({nums[i], nums[j], nums[k], nums[l]});
                        k++;
                        l--;

                        // Skip duplicates for the third and fourth elements
                        while(k < l && nums[k] == nums[k-1]) k++;
                        while(k < l && nums[l] == nums[l+1]) l--;
                    }
                    else if(sum<target)
                    {
                        k++;
                    }
                    else{
                        l--;
                    }
                }
            }
        }
        return output;
    }
};