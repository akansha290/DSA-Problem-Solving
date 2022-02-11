class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxpro = 0, minPrice = INT_MAX;
        for(auto it:prices){
            minPrice = min(minPrice,it);
            maxpro = max(maxpro,it-minPrice);
        }
        return maxpro;
    }
};