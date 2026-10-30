class Solution {
public:
    int longestAwesome(string s) {
        vector<int>idx(1024,-1);
        int mask=0;
        int ans=0;
        idx[0]=0;
        for(int i=0;i<s.size();i++) 
        {
            int d=s[i]-'0';
            mask^=(1<<d);
            if(idx[mask]!=-1)
            {
                ans=max(ans,i+1-idx[mask]);
            }
            for(int j=0;j<10;j++) 
            {
                int newMask=mask^(1<<j);
                if(idx[newMask]!=-1) 
                {
                    ans=max(ans,i+1-idx[newMask]);
                }
            }
            if(idx[mask]==-1) 
            {
                idx[mask]=i+1;
            }
        }

        return ans;
    }
};