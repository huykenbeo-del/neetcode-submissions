class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxv=0;
        int l=0;
        int r=1;
        while(r<prices.size()){
            if(prices[r]>prices[l]){
                maxv=max(maxv,prices[r]-prices[l]);
            }else{
                l=r;
            }
            r+=1;
        }
        return maxv;
    }
};
