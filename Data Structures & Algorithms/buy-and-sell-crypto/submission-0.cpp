class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size() < 2) return 0;
        int left = 0;
        int right = 1;
        int max_profit = 0;
        while(right < prices.size()){
            if(prices[left] < prices[right]){
                int output = prices[right] - prices[left];
                max_profit = max(max_profit, output);
            }
            else {
                left = right;
            }
            right++;
        }
        return max_profit;
    }
};
