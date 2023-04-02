class Solution {
public:
    string removeDuplicates(string s) {
        int i=0;
        string str = "";
        while (i<s.length() )
        {
            if(str.length() > 0 && str[str.length()-1] == s[i])
            {
                str.pop_back();

            }
            else{
                str.push_back(s[i]);
            }
            i++;
            
        }
        return str;
    }
};