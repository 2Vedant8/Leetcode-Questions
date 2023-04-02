class Solution {
public:
    int countSegments(string s) {
        int c=0,word=0;
        string x="";
        for(int i=0;i<s.length();i++)
        {
            if(s[i]==' '&&x.length()>0)
            {
                word++;
                x="";
            }
            else if(s[i]!=' ')
            {
                x+=s[i];
            }
        }
        if(x.length()>0)word++;
        return word==0?0:word;
    }
};