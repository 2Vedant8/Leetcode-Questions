class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int c = 0;
        for(int i = 0 ; i < jewels.size() ; i++){
            c = c + count(stones.begin() , stones.end() , jewels[i] );
        }
        return c;
    }
};