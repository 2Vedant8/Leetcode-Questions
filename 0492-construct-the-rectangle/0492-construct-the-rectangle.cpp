class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        int width = 1;
        for(int i= 1 ; i<=sqrt(area); i++)
        {
            if(area%i==0)
            width = i;

        }
        ans.push_back(area/width);
        ans.push_back(width);
        return ans;
    
        
    }
};

