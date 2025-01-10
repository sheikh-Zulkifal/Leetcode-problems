class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, buy = 0;
        for (int sell = 1; sell < prices.size(); sell++) {
            if (prices[sell] < prices[buy]) {
                buy = sell;
            }
            profit = max(profit, prices[sell] - prices[buy]);
        }
        return profit;
    }
};