class Solution
{
    public:
        int trap(vector<int> &height)
        {
            int n = height.size();
            int left = 0;
            int right = n - 1;
            int res = 0;
            int maxleft = 0;
            int maxright = 0;
            while (left <= right)
            {
                if (height[left] < height[right])
                {
                    if (height[left] > maxleft)
                    {
                        maxleft = height[left];
                    }
                    else
                    {
                        res = res + maxleft - height[left];
                    }
                    left++;
                }
                else
                {
                    if (height[right] > maxright)
                    {
                        maxright = height[right];
                    }
                    else
                    {
                        res = res + maxright - height[right];
                    }
                    right--;
                }
            }
            return res;
        }
};
////////////////////Prefix suffix wala cocde pr ye extra space khayga so no no///////////
// int n = arr.size();
// int max_val = INT_MIN;
// vector<int> prefix_max(n);
// for (int i = 0; i < n; i++)
// {
//     max_val = max(max_val, arr[i]);
//     prefix_max[i] = max_val;
// }

// max_val = INT_MIN;
// vector<int> suffix_max(n);
// for (int i = n - 1; i >= 0; i--)
// {
//     max_val = max(max_val, arr[i]);
//     suffix_max[i] = max_val;
// }

// vector<int> difference(n);
// for (int i = 0; i < n; i++)
// {
//     difference[i] = min(prefix_max[i], suffix_max[i]) - arr[i];
// }
// return accumulate(difference.begin(), difference.end(), 0);

/////