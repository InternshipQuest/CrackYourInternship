class Solution {
public:
    int maxProfit(vector<int>& prices) {
        if(prices.size()==0 || prices.size()==1)
            return 0;
        int p,mp;
        p=0;
        mp=INT_MAX;
        for(int i=0;i<prices.size();i++)
        {
            if(prices[i]<mp)
            {
                mp=prices[i];
            }
            else if(prices[i]-mp>p)
                p=prices[i]-mp;
        }
        return p;
    }
};
