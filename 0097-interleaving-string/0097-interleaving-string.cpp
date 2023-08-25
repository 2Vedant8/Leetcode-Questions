class Solution {
public:
vector<vector<int>>memo;
    bool helper(string&s1,string&s2,string&s3,int i,int j){
        if(i+j==s3.length())return true;
        if(memo[i][j]!=-1)return memo[i][j];
        int ans=false;
        if(i<s1.length()&&j<s2.length()&&s1[i]==s3[i+j]&&s2[j]==s3[i+j]){
            bool take1 =helper(s1,s2,s3,i+1,j);
            bool take2=helper(s1,s2,s3,i,j+1);
            ans=take1||take2;
        }
        else if(i<s1.length()&&s1[i]==s3[i+j]){
            ans=helper(s1,s2,s3,i+1,j);
        }
        else if(j<s2.length()&&s2[j]==s3[i+j]){
            ans=helper(s1,s2,s3,i,j+1);
        }
        return memo[i][j]= ans;

    }
    bool isInterleave(string s1, string s2, string s3) {
        memo.resize(s1.length()+1,vector<int>(s2.length()+1,-1));
        if(s1.length()+s2.length()!=s3.length())return false;
        return helper(s1,s2,s3,0,0);
    }
};