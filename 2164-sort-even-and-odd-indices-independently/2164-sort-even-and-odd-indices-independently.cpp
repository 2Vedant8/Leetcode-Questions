class Solution {
public:
    vector<int> sortEvenOdd(vector<int>& nums) {
        int n=nums.size();
        vector<int> a;
        vector<int> b;
        vector<int> ans;

        for(int i=0;i<n;i++)
        {
            if(i==0 || i%2==0){
                a.push_back(nums[i]);
            }
            else{           
                b.push_back(nums[i]);
            }
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end(),greater<>());
        int m=n/2;
        int z=a.size()-1;
        
        if(n%2!=0){
            for(int i=0;i<m;i++){
                ans.push_back(a[i]);
                ans.push_back(b[i]);
            }
            ans.push_back(a[z]);
        }
        else{
            for(int i=0;i<m;i++)
            {
                ans.push_back(a[i]);
                ans.push_back(b[i]);
            }
        }
        return ans;
    }
};