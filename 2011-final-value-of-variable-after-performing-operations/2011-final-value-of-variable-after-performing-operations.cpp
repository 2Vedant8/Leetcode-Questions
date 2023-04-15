class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int ans=0;
        for(int i=0; i<operations.size(); i++)
        {
            if(operations[i] == "++X" || operations[i] == "X++" )
            {
                ans = ans+1;
            }
            else if(operations[i] == "--X" || operations[i] == "X--" )
            {
                ans = ans-1;
            }
        }
        return ans;
        
    }
};