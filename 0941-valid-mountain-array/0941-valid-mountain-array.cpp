class Solution
{
public:
    bool validMountainArray(vector<int> &arr)
    {
        int n = arr.size();
        if (n < 3) {
            return false; // Mountain array must have at least 3 elements
        }

        int s = 0;
        int e = n - 1;

        // Check for increasing sequence
        while (s < e && arr[s] < arr[s + 1]) {
            s++;
        }

        // Check for decreasing sequence
        while (e > 0 && arr[e] < arr[e - 1]) {
            e--;
        }

        // Check if there is a peak element
        if (s == e && s > 0 && e < n - 1) {
            return true;
        } else {
            return false;
        }
    }
};
