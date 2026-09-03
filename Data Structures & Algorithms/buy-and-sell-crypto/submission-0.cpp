class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int min_price = prices[0];

        int max_profit = 0;

        for(int price : prices){
            min_price = min(price,min_price);

            if(price-min_price > max_profit){
                max_profit = price - min_price;
            }
        }
        return max_profit;
        
    }
};
