class Solution {
public:
    void recursion(vector<char>& s, int start, int end) {
        // Base case
        if (start >= end) {
            return;
        }
        // Swap first and last characters
        swap(s[start], s[end]);
        // Recurse on the remaining substring
        recursion(s, start + 1, end - 1);
    }
    void reverseString(vector<char>& s) {
        
        // int start =0;
        // int end = s.size()-1;
        // while(start<=end)
        // {
        //     swap(s[start] , s[end]);
        //     start++;
        //     end--;
        // }
        
        recursion(s, 0, s.size()-1);
        
       
        
    }
};