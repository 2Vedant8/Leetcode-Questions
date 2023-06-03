class Solution {
public:
    int numOfMinutes(int n, int headID, std::vector<int>& a, std::vector<int>& b) {
        std::unordered_map<int, std::vector<int>> mp;
        for (int i = 0; i < a.size(); i++) {
            mp[a[i]].push_back(i);
        }
        std::deque<std::vector<int>> v;
        v.push_back({headID, b[headID]});
        int ans = 0;
        while (!v.empty()) {
            std::vector<int> x = v.front();
            v.pop_front();
            for (int i : mp[x[0]]) {
                v.push_back({i, x[1] + b[i]});
                ans = std::max(ans, x[1] + b[i]);
            }
        }
        return ans;
    }
};