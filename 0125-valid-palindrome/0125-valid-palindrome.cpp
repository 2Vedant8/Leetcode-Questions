class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0, end = s.size()-1;
        while(start <= end){
            // lowercase the char
            char startChar =tolower(s[start]);
            char lastChar = tolower(s[end]);

            // if not alpha numeric increase/decrement pointer respectiverly
            if(!isalnum(int(startChar))){
                start++;
                continue;
            }
            if(!isalnum(int(lastChar))){
                end--;
                continue;
            }

            // if char match go for next char
            if(startChar==lastChar){
                start++;
                end--;
            }else{
                return false;
            }
        }
        return true;
    }
};