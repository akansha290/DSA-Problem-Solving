class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0, currmin = INT_MAX;
        for(auto it:prices){
            if(it<currmin){
                currmin = it;
            }
            profit = max(profit,it-currmin);
        }
        return profit;
    }
};