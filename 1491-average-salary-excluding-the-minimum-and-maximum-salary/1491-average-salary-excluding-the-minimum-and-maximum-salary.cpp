class Solution {
public:
    double average(vector<int>& salary) {
        sort(salary.begin() , salary.end());
        int start = 1;
        double sum = 0;
        int end = salary.size()-2;
        for(int i = start; i<=end; i++)
        {
            sum = sum + salary[i];
        }
        double average = sum/(salary.size()-2);
        return average;
        
    }
};