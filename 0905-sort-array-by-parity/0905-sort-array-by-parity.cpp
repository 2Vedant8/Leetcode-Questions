class Solution {
public:
    vector<int> sortArrayByParity(vector<int>& nums) {
         vector<int> ans(size(nums));
        int p=0,q=size(nums)-1,i=0;
        while(i<size(nums)){
            if(nums[i]%2==0){
                ans[p]=nums[i];
                i++;p++;
            }
            else{
                ans[q]=nums[i];
                i++;q--;
            }
        }
        return ans;
    }
};