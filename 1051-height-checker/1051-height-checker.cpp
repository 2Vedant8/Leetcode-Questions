class Solution {
public:
    int heightChecker(vector<int>& heights) {
        vector<int> ans = heights ; 
        int ans1=heights.size();;
        
        sort(heights.begin() , heights.end());
        for(int i,j = 0 ; i<heights.size(),j<ans.size() ; i++,j++)
        {
           if(heights[i]==ans[j])
           {

            ans1--;

            }
        }
            return ans1;
     } 
    
};