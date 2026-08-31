class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int>fr(26, 0);
        int l=0;
        int maxfr=0;
        int ans=0;
        for(int r=0;r<s.size();r++) 
        {

            fr[s[r]-'A']++;
            maxfr=max(maxfr,fr[s[r]-'A']);
            while((r-l+1)-maxfr>k) 
            {
                fr[s[l]-'A']--;
                l++;
            }
            ans=max(ans,r-l+1);
        }
        return ans;
    
    }
};