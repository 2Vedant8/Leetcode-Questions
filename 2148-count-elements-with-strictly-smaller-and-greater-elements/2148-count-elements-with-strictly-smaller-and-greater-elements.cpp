class Solution {
public:
    int countElements(vector<int>& nums) {
        int count = 0 ; 
        int maxi = *max_element(nums.begin(), nums.end()) ;
        int mini = *min_element(nums.begin(), nums.end()) ; 

        for (int i = 0 ; i < nums.size() ; i++)
        {
            if (nums[i] < maxi && nums[i] > mini)
            {
                count ++ ;
            }
        }
        return count ; 
    }
};