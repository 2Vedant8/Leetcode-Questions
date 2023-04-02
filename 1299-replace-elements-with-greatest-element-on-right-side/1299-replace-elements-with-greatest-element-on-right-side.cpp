class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int oldmax = -1;
        int length = arr.size();
        for(int i = length - 1 ; i >=0 ; i--)
        {
            int newmax = max(oldmax , arr[i]);
            arr[i] = oldmax;
            oldmax = newmax;
        }
        return arr;
    }
};
