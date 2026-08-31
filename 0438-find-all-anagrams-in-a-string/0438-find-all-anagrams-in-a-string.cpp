class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int>ans;
        map<string,int>mpp;

        if(p.size()>s.size())
        {
            return ans;
        }
        vector<int>frp(26,0);
        vector<int>frs(26,0);
        for(char ch:p)
        {
            frp[ch-'a']++;
        }
        int k=p.size();
        for(int r=0;r<s.size();r++) 
        {
            frs[s[r]-'a']++;
            if(r>=k) 
            {
                frs[s[r-k]-'a']--;
            }
            if(r>=k-1 && frs==frp) 
            {
                ans.push_back(r-k+1);
            }
        }
        return ans;
    }
};