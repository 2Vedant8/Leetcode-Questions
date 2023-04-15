class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        // Find the maximum value in the vector candies
        int maxCandies = *max_element(candies.begin(), candies.end());

        vector<bool> result;
        for(int i = 0; i < candies.size(); i++) {
            // Check if the current candy count plus extraCandies is greater than or equal to the maxCandies
            result.push_back(candies[i] + extraCandies >= maxCandies);
        }
        return result;
    }
};