class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.empty()) return 0;
        int maxv=1;
        int l=0;
        int c[256]={0};
        int n=s.size();
        for(int r=0;r<n;r++){
            while(c[s[r]]>0){
                c[s[l]]--;
                l++;
            }
            c[s[r]]++;
            int length=r-l+1;
            if(length>maxv) maxv=length;
        }
        return maxv;
    }
};
