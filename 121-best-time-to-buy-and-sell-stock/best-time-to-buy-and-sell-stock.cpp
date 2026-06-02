class Solution {
public:
    int maxProfit(vector<int>& prices) {
       int minimum=prices[0], current=0, profit=0,maximum=0;
       for(int i=0; i<prices.size();i++){
        current=prices[i];
        minimum = min(current,minimum);
        profit= current -minimum;

        maximum =max(profit,maximum);
       }
       return maximum;
    }
};