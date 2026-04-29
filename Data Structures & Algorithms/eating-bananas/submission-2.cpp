class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxv=INT_MIN;
        int res=1;
        int diff=0;
        for(int i=0;i<piles.size();i++){
            if(piles[i]>maxv) maxv=piles[i];
        }
        int l=1;
        int r=maxv;
        while(l<=r){
            int m=l+(r-l)/2;
            int hours=0;
            for(int i=0;i<piles.size();i++){
                hours+=piles[i]/m;
                if(piles[i]%m!=0) hours++;
            }
            if(hours>h) l=m+1;
            else if(hours<=h){
                res=m;
                r=m-1;
            }
        }
        return res;
    }
};
