#include<iostream>
#include<vector>

using namespace std;


class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, size = prices.size();

        for (int i = 0; i < size - 1; i++)
        {
            if (prices[i + 1] - prices[i] > 0)
            {
                profit += (prices[i + 1] - prices[i]);
            }
                    
        }
        
        return profit;
    }
};

int main(){
    vector<int> arr = {7,1,5,3,6,4};
    Solution s;
    cout << s.maxProfit(arr) << "\n";
    return 0;
}