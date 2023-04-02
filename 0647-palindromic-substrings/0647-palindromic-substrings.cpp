class Solution {
public:
int expandaroundindex(string s, int i , int j)
{
    int count = 0;
    while(i>=0 && j<s.length() && s[i]==s[j])
    {
        count++;
        i--;
        j++;
    }
    return count;

}
    int countSubstrings(string s) {
        int count = 0;
        int n = s.length();
        for(int i=0; i<n; i++)
        {
            //odd
            int oddans = expandaroundindex(s, i , i);
            count = count + oddans;

            //even

            int evenans = expandaroundindex(s, i , i+1);
            count = count + evenans;




        }
        return count;
        
    }
};