class Solution {
public:
    string intToRoman(int num) {
        string romansymbols[] = {"M","CM","D","CD","C","XC","L","XL","X","IX","V","IV","I"};
        
        int values[] = {1000, 900, 500, 400, 100, 90 , 50 , 40 , 10 , 9 , 5 , 4 , 1};

        string ans= "";
        for(int i=0; i<13 ; i++)
        {
            while(num>=values[i])
            {
                ans = ans + romansymbols[i];
                num = num - values[i];
            }
        }
        return ans;
    }
};