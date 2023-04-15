class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size();
        int maxCandies = candies[0]; 
        for (int i = 1; i < n; i++) {
            maxCandies = max(maxCandies, candies[i]);
        }

        vector<bool> result(n);
        for (int i = 0; i < n; i++) {
            
            result[i] = (candies[i] + extraCandies >= maxCandies);
        }
        return result;
    }
};
