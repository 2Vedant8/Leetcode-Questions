class Solution {
public:
int helper (int n)
{
  int mx = 0;
  while(n>0)
  {
      mx = max(mx, n%10);
      n/=10;
  }
  return mx;
}
    int maxSum(vector<int>& nums) {
        int ans = -1;
        for(int i=0; i<nums.size(); i++)
        {
            for(int j=i+1;j<nums.size(); j++ )
            {
                int a=nums[i];
                int b= nums[j];
                if(helper(a)==helper(b))
                {
                    ans = max(a+b,ans);
                }
            }
        }
        return ans;
    }
};