class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int ans=-1,ans1=INT_MAX,c=0,d=0,ans2=0;
        for(int i=0;i<prices.size();i++)
        {
            if(ans<prices[i])
            {
                ans=prices[i];
                c=i+1;
            }
            if(ans1>prices[i])
            {
                ans1=prices[i];
                d=i+1;
            }
            if(c>d)
            ans2=max(ans2,prices[c-1]-prices[d-1]);
            else if(c!=d){
                c=0;
                ans=-1;
            }
        }
        return ans2;
    }
};
// 58% Accepted
