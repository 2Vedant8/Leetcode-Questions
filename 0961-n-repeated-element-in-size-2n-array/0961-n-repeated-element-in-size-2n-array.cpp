class Solution {
public:
   int repeatedNTimes(vector<int>& A) {
       if(A[0] == A[1]) {
           return A[0];
       }
        for(int i = 2;i < (int)A.size();++i) {
            if(A[i] == A[i - 2] || A[i] == A[i - 1]) {
                return A[i];
            }
        }
       return A.back();
      
   }
};