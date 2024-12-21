class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0, profit = 0;
        for(int sell = 1; sell < prices.size(); sell++){
            if(prices[buy] > prices[sell] ){
                buy = sell;
            }
            profit = max(profit, prices[sell] - prices[buy]); 
        } 
        return profit;
    }
};