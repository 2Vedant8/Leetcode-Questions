class Solution {
public:
    int hIndex(vector<int>& citations) {
        int n = citations.size();
        int start = 0;
        int end = n-1;
        int mid = start + (end-start)/2;
        while(start<=end)
        {
            if(citations[mid]==(n-mid))
            {
                return citations[mid];
            }
            else if(citations[mid]>(n-mid))
            {
                end = mid - 1;
            }
            else{
                start = mid + 1;
            }
            mid = start + (end-start)/2;
        }
        return n-start;


        
    }
};