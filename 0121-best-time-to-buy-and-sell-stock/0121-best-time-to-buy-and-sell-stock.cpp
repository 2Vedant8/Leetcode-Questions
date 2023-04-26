// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int maxprofit = 0;
//         for(int i=0; i<prices.size(); i++)
//         {
//             for(int j=i+1; j<prices.size(); j++)
//             {
//                 int profit = prices[j]-prices[i];
//                 if(profit>maxprofit)
//                 {
//                     maxprofit=profit;
//                 }
//             }
//         }
//         return maxprofit;
//     }
// };

// class Solution {
// public:
//     int maxProfit(vector<int>& prices) {
//         int minprice = INT_MAX;
//         int maxprofit = INT_MIN;
//         for (int i = 0; i < prices.size(); i++) {
//             if (prices[i] < minprice) {
//                 minprice = prices[i];
//             } else if (prices[i] - minprice > maxprofit) {
//                 maxprofit = prices[i] - minprice;
//             }
//         }
//         return maxprofit;
//     }
// };

class Solution {
public:

    void maxprofitfinder(vector<int>& prices, int i , int& minprice , int&maxprofit)
    {
        //base
        if(i==prices.size())
        {
            return;
        }

        //ek case
         if (prices[i] < minprice) {
            
             minprice = prices[i];
         }
         int todayprofit = prices[i] - minprice;
         if(todayprofit > maxprofit)
         {
             maxprofit = todayprofit;
         }
         //recursion
         maxprofitfinder(prices , i+1, minprice, maxprofit);

    }
    int maxProfit(vector<int>& prices) {
        int minprice = INT_MAX;
        int maxprofit = INT_MIN;
        maxprofitfinder(prices , 0 , minprice , maxprofit);
        return maxprofit;

    }
};
