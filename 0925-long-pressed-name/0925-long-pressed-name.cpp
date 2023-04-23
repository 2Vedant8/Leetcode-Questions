class Solution {
public:
    bool isLongPressedName(string name, string typed) {
        int m = name.size();
        int n = typed.size();
        if(m > n || m==0 || n==0) return false;
        if(name[0] != typed[0]) return false;
        int i=1;
        for(int j=1; j < n; j++){
            if(name[i] == typed[j]){
                i++;
            }else if(typed[j]!=typed[j-1]){
                return false;
            }           
        }
        return i==m;
    }
};