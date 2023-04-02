class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        set<pair<int,int>> count;

        int i=0 , j=1;
        while(j<nums.size())
        {
            int diff= nums[j]-nums[i];
            if(diff==k)
            {
                count.insert({nums[i],nums[j]});
                i++,j++;
            }
            else if(diff>k)
            {
                i++;
            }
            else{
                j++;
                }
                if(i==j)
                j++;
        }
    return count.size();
    }
};