class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.empty()) return true;
        if(s1.size()>s2.size()) return false;
        int c1[26]={0};
        int c2[26]={0};
        int matches=0;
        for(int i=0;i<s1.size();i++){
            c1[s1[i]-'a']++;
            c2[s2[i]-'a']++;
        }
        for(int i=0;i<26;i++){
            if(c1[i]==c2[i]) matches++;
        }
        int l=0;
        for(int r=s1.size();r<s2.size();r++){
            if(matches==26) return true;
            int ir=s2[r]-'a';
            c2[ir]++;
            if(c1[ir]==c2[ir]) matches++;
            else if(c1[ir]+1==c2[ir]) matches--;
            int il=s2[l]-'a';
            c2[il]--;
            if(c1[il]==c2[il]) matches++;
            else if(c1[il]-1==c2[il]) matches--;
            l++;
        }
        return matches==26;
    }
};
