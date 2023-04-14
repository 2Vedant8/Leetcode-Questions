class Solution {
public:
    char nextGreatestLetter(vector<char>& letters, char target) {
        int start = 0;
        int end = letters.size() - 1;
        int mid = 0;
        while (start <= end) {
            mid = start + (end - start) / 2;
            if (letters[mid] <= target) {
                start = mid + 1;
            } else {
                end = mid - 1;
            }
        }
        if (start == letters.size()) {
            start = 0;
        }
        return letters[start];
    }
};


