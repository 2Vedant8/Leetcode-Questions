class Solution {
public:
bool isvowel( char x)
{
    x= tolower(x);
if (x == 'a' || x == 'e' || x == 'i' || 
                   x == 'o' || x == 'u')
       return true;
    else
        return false;
}
    string reverseVowels(string s) {
        int start = 0;
        int end = s.size()-1;
        while(start<=end)
        {
            if(isvowel(s[start]) && isvowel(s[end]))
            {
                swap(s[start], s[end]);
                start++;
                end--;
            }
            else if(!isvowel(s[start]))
            {
                start++;
            }
            else{
                end--;
            }
        }
        return s;
        
    }
};