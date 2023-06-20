class Solution {
public:
    string makeSmallestPalindrome(string s) {
        int start = 0;
        int end = s.length()-1;
        while(start<=end)
        {
            if(s[start]!=s[end])
            {
                if(s[start]>s[end])
                {
                    s[start]=s[end];
                }
                else{
                    s[end]=s[start];
                }
            }
            start++;
            end--;

        }
        return s;
    }
};