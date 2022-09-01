class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxp = 0;
        for(int i=1;i<prices.size();i++){
            maxp += max(0,prices[i]-prices[i-1]);
        }
        return maxp;
    }
};