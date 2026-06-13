class Solution {
public:
    int characterReplacement(string s, int k) {
        if(s.empty()) return 0;
        int res=0;
        int c[26]={0};
        int n=s.size();
        int maxc=0;
        int l=0;
        for(int r=0;r<n;r++){
            c[s[r]-'A']++;
            maxc=max(maxc,c[s[r]-'A']);
            while((r-l+1)-maxc>k){
                c[s[l]-'A']--;
                l++;
            }
            res=max(res,r-l+1);
        }
        return res;
    }
};
