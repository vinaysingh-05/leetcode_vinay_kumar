class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int cost;  // start checking arr max profit
        int maxprofit = 0;  // maxproft fixed mini 0 
        int mini = prices[0]; // mini price idx 0 
    for(int i=1;i<n;i++){
        cost = prices[i] - mini;
        maxprofit = max(maxprofit,cost);
        mini = min(mini , prices[i]);

    }
    return maxprofit ;

    }
};