class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int ans = 0;
        unordered_map<int, int> freq;
        
        // Count the frequency of each number in the input array
        for (int num : nums) {
            freq[num]++;
        }
        
        // Check each number for a valid triplet
        for (int num : nums) {
            if (freq.count(num-diff) && freq.count(num+diff)) {
                ans++;
            }
        }
        
        return ans;
    }
};

