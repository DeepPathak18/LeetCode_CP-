class Solution {
public:
    vector<vector<int>> largeGroupPositions(string s) {
        vector<vector<int>>ans;
        int n=s.length();
        int cnt=0;
        for(int i=1;i<=n;i++)
        {
            if(i==n||s[i]!=s[cnt]) 
            {
                if(i-cnt>=3) 
                {
                    ans.push_back({cnt,i-1});
                }
                cnt=i;
            }
        }
        return ans;
    }
};