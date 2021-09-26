class Solution {
public:
    int maxProfit(vector<int>& p) {
        
        int minVal = INT_MAX;
        int profit = 0;
        
        for(int i=0;i<p.size();i++) {
            minVal = min(minVal,p[i]);
            profit = max(profit,p[i]-minVal);
        }
        
        return profit;
        
    }
};