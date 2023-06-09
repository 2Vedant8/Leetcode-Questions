// class Solution {
// public:
//     int lastStoneWeight(vector<int>& stones) {
//         int n=stones.size();
//         if(n==0)return 0;
//         if(n==1)return stones[0];
//         else{
//             sort(stones.begin(), stones.end());
//             if(stones[n-1]==stones[n-2]){
//                 stones.erase(stones.end() - 2, stones.end());
//             }
//             else{
//                 stones[n-1]=stones[n-1]-stones[n-2];
//                 stones.erase(stones.end()-2);
//             }

//              return lastStoneWeight(stones);
//         }

//     }
// };

class Solution
{
    public:
        int lastStoneWeight(vector<int> &stones)
        {
            while (stones.size() > 1)
            {
                sort(stones.begin(), stones.end());
                int y = stones.back();
                stones.pop_back();
                int x = stones.back();
                stones.pop_back();
                int diff = y - x;
                if (diff > 0)
                {
                    stones.push_back(diff);
                }
            }
            return stones.empty() ? 0 : stones[0];
        }
};