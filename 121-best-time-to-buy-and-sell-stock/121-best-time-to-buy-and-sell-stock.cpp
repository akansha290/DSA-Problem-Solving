class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minele=INT_MAX, maxprofit = 0;
        for(auto it:prices){
            minele = min(minele,it);
            maxprofit = max(maxprofit,it-minele);
        }
        return maxprofit;
    }
};