class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int maxcha=0;
        for(int i=0;i<prices.size();i++)
        {
            min=min<prices[i]?min:prices[i];
            maxcha=maxcha>(prices[i]-min)?maxcha:(prices[i]-min);
        }
        if(maxcha==0)
           return 0;
        return maxcha;


    }
};
