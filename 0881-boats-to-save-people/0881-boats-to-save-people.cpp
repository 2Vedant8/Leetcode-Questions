class Solution {
public:
    int numRescueBoats(vector<int>& people, int limit) {
        int boatcount = 0;
        sort(people.begin(), people.end());

        int start = 0;
        int end = people.size()-1;

        while(start<=end)
        {
            if((people[start]+people[end])<=limit)
            {
                boatcount++;
                start++;
                end--;
            }
            else{
                boatcount++;
                end--;

            }
        }
        return boatcount;
        
    }
};