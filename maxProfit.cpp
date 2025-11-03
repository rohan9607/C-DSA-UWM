#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

class Solution
{
public:
    int maxProfit(vector<int> &prices)
    {
        int profit = 0;
        // std::sort(prices.begin(), prices.end());
        int buy = prices[0];
        // O(n^2)
        // for (int i = 0; i < prices.size(); i++)
        // {
        //     for (int j = prices.size() - 1; j > i; j--)
        //     {
        //         profit = max(profit, (prices[j] - prices[i]));
        //     }

        // }

        // O(n)
        for (int i = 0; i < prices.size(); i++)
        {
            if (prices[i] < buy)
            {
                buy = prices[i];
            }
            else if (prices[i] - buy > profit)
            {
                profit += prices[i] - buy;
            }
        }

        return profit;
    }
};

int main()
{
    vector<int> arr = {7,1,5,3,6,4};
    Solution s;
    cout << s.maxProfit(arr) << "\n";
    return 0;
}