class Solution
{
    public:

        void combination_helper(vector<int> &candidates, int target, vector<int> &v, vector< vector< int>> &ans, int index)
        {
            if (target == 0)
            {
                ans.push_back(v);
                return;
            }
            if (target < 0)
            {
                return;
            }

            for (int i = index; i < candidates.size(); i++)
            {
               	///ham ek baar agar 2 ko utha lenge toh uske next wala same element nahi uthayenge coz vo hame duplicate element hi dega hamesha isioye ye wali condition laga rahe hai//
                if (i > index && candidates[i] == candidates[i - 1])
                {
                    continue;
                }
                v.push_back(candidates[i]);
                combination_helper(candidates, target - candidates[i], v, ans, i + 1);
                v.pop_back();
            }
        }

    vector<vector < int>> combinationSum2(vector<int> &candidates, int target)
    {
        sort(candidates.begin(), candidates.end());
        vector<vector < int>> ans;
        vector<int> v;
        combination_helper(candidates, target, v, ans, 0);
       	/////ISSE TLE MAAR RAHA HAIIII iski jagah hamne vo candidates[i]==candidates[i-1] wali condition use karli haii/////
       	// set<vector < int>>st;
       	// for(auto e : ans)
       	// {
       	//     st.insert(e);
       	// }
       	// ans.clear();
       	// for(auto val:st)
       	// {
       	//     ans.push_back(val);
       	// }
        return ans;
    }
};