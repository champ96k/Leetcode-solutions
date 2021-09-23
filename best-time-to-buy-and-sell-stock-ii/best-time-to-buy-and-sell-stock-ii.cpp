class Solution {
public:
    int maxProfit(vector<int>& p1) {
        
        int profit = 0;
        
        for(int i=1;i<p1.size();i++) {
                if(p1[i]>p1[i-1]){
                     profit = profit + (p1[i]-p1[i-1]);
                }
        }
            
            return profit;
    }
};