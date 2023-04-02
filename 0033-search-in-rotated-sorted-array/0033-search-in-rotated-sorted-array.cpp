class Solution {
public:
int binarysearch(vector<int> arr, int target, int start, int end)
{
    int mid = (start + end) / 2;
    while (start <= end)
    {
        int element = arr[mid];

        if (element == target)
        {
            return mid;
        }
        else if (target < element)
        {
            end = mid - 1;
        }
        else
        {
            start = mid + 1;
        }
        mid = (start + end) / 2;
    }
    return -1;
}
int findpivot(vector<int> arr)
{
    int s = 0;
    int e = arr.size() - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if (mid + 1 < arr.size() && arr[mid] > arr[mid + 1])
        {
            return mid;
        }
        if (mid - 1 > 0 && arr[mid - 1] > arr[mid])
        {
            return mid - 1;
        }
        if (arr[s] >= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}
    int search(vector<int>& nums, int target) {
       int pivotindex = findpivot(nums);

       if(target >= nums[0] && target<=nums[pivotindex])
       {
           //stearch in A
           int ans = binarysearch(nums,target,0,pivotindex);
           return ans;
       }

       if(pivotindex+1<nums.size() && target>=nums[pivotindex+1] && target<=nums[nums.size()-1])
       {
           //stearch in B
           int ans = binarysearch(nums,target,pivotindex+1,nums.size()-1);
           return ans;
       }
       return-1;
    }
};