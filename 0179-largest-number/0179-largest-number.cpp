class Solution {
public:

static bool mycomp(string a, string b)
{
    string t1 = a+b;
    string t2 = b+a;
    return t1>t2;
}
    string largestNumber(vector<int>& nums) {
        vector<string>snums;
        for(auto n:nums)
        {
            snums.push_back(to_string(n));
        }
        sort(snums.begin(), snums.end() , mycomp);//mycomp is used to sort according to our conditions and we used tr1 and t2 because vo 303 and330 me se vo 303 ko bada lera tha islieeeeee//
        if(snums[0]=="0")
        {
            return "0";
        }

        string ans = "";

        for(auto str: snums)
        {
            ans+=str;
        }
        return ans;
    }
};