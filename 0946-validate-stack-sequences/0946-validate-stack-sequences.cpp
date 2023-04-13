class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int i = 0;
        int j = 0;

        for (int k = 0; k < pushed.size(); k++) {
            pushed[i] = pushed[k];
            i++;

            while (i > 0 && pushed[i - 1] == popped[j]) {
                i--;
                j++;
            }
        }

        if (i == 0) {
            return true;
        } else {
            return false;
        }
    }
};
