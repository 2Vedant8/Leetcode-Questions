class Solution {
public:

    void solve(vector<string>&ans , int n , int open , int close , string output)
    {
        if(open==0 && close == 0)
        {
            ans.push_back(output);
            return;
        }

        //include open case
        if(open>0)
        {
            output.push_back('(');
             solve(ans , n , open-1 , close , output);

             //backtrack
             output.pop_back();
        }

        //include close case
        if(open<close)
        {
            output.push_back(')');
             solve(ans , n , open , close-1 , output);

             //backtrack
             output.pop_back();
        }



    }



    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open = n;
        int close = n;
        string output = "";
        solve(ans , n , open , close , output);
        return ans;
    }
};