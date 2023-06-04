class Solution
{
    public:
        bool canDistribute_helper(vector<int> &counts, vector<int> &quantity, int ithcustomer)
        {
            if (ithcustomer == quantity.size())
            {
                return true;
            }
            for (int i = 0; i < counts.size(); ++i)
            {
                if (counts[i] >= quantity[ithcustomer])
                {
                    counts[i] -= quantity[ithcustomer];
                    if (canDistribute_helper(counts, quantity, ithcustomer + 1))
                    {
                        return true;
                    }
                counts[i] += quantity[ithcustomer];
                }
            }
            return false;
        }

    bool canDistribute(vector<int> &nums, vector<int> &quantity)
    {
        unordered_map<int, int> countmap;
        for (auto num: nums)
        {
            countmap[num]++;
        }
        vector<int> counts;
        for (auto it: countmap)
        {
            counts.push_back(it.second);
        }
       	//ye isliye kara h taaki hamare false wale outputs jaldi mil jaaye warna TLE maar rha tha solution
        sort(quantity.rbegin(), quantity.rend());
        return canDistribute_helper(counts, quantity, 0);
    }
};