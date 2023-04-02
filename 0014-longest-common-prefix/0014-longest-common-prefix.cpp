class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int i=0;
        while(true)
        {
            char currentchar=0;
            for(auto str : strs)
            {
                if(i>=str.size())
                {
                    currentchar=0;
                    break;
                }
                if(currentchar==0)
                {
                    currentchar=str[i];
                }
                else if(str[i]!=currentchar)
                {
                    currentchar=0;
                    break;
                }
            }
            if(currentchar==0)
            {
                break;
            }
            ans.push_back(currentchar);
            i++;
        }
        return ans;
    }
};
        // string ans;
        // char curr_ch=0;
        // for(int i=0; i<strs.size(); i++)
        // {
        //     for(int j=i+1; j<strs.size(); j++)
        //     {
        //         if(strs[i]==strs[j]){
        //            curr_ch = strs[i];
        //         }
        //         else{
        //             break;
        //         }
        //     }
        //     ans.push_back(curr_ch);
        // }
        // return ans;