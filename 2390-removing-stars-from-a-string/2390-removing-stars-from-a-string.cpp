class Solution {
public:
    string removeStars(string s) {
        vector<char>ans;
        for(auto i:s)
        {
            if(i!='*')
            {
                ans.push_back(i);
            }
            else if(!ans.empty())
            {
                ans.pop_back();
            }
        }
        string res(ans.begin() , ans.end());
        return res;
    }
};