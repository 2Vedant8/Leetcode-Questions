class Solution {
public:
    string decodeAtIndex(string s, int k) {
        long long d = 0;

        for (auto x : s) {
            if (isdigit(x)) {
                d *= (x - '0');
            } else {
                d++;
            }
        }

        for (int i = s.size() - 1; i >= 0; i--) {
            if (isdigit(s[i])) {
                d /= (s[i] - '0');
                k %= d;
            } else {
                if (k == 0 || k == d) {
                    return string("") + s[i];
                }
                d--;
            }
        }

        // You need to add a return statement here in case k is not found in the loop.
        return "";
    }
};
