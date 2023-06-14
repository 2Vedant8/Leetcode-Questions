// class Solution
// {
//     public:
//         bool divideArray(vector<int> &nums)
//         {
//             map<int, int> frequencyMap;

//             for (int num: nums)
//             {
//                 frequencyMap[num]++;
//             }
//             for (const auto &pair: frequencyMap)
//             {
//                 if (pair.second % 2 != 0)
//                 {
//                    	// If any frequency is not 2, return 0
//                     return false;
//                 }
//             }

//             return true;
//         }
// };
class Solution {
public:
    bool divideArray(std::vector<int>& nums) {
        int maxNum = *max_element(nums.begin(), nums.end());
        vector<int> frequency(maxNum + 1, 0);

        for (int num : nums) {
            frequency[num]++;
        }

        for (int count : frequency) {
            if (count % 2 != 0) {
                return false;
            }
        }

        return true;
    }
};