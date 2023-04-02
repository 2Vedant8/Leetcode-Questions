class Solution {
public:
    int findMinDifference(vector<string>& timePoints) {
        vector<int> minutes;
        
        for(int i=0; i<timePoints.size(); i++)
        {
            string curr = timePoints[i];
            int hours = stoi(curr.substr(0,2));
            int min = stoi(curr.substr(3,2));

            int totalminutes = hours*60 + min;
            minutes.push_back(totalminutes);
        }
        sort(minutes.begin(), minutes.end());

        int mini = INT_MAX;
        for(int i=0; i<minutes.size()-1 ; i++)
        {
            int diff = minutes[i+1]- minutes[i];
            mini = min(mini, diff);
        }
        int lastdiff = (minutes[0]+1440) - minutes[timePoints.size()-1];
        mini = min(mini , lastdiff);



        return mini;
        
    }
};