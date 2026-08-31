class Solution {
public:

    bool isFreqSame(vector<int>&fr,vector<int>&winfr)
    {
        for(int i=0;i<26;i++)
        {
            if(fr[i]!=winfr[i])
            {
                return false;
            }

        }
        return true;
    }
    bool checkInclusion(string s1, string s2) {
        vector<int>fr(26,0);
        for(int i=0;i<s1.length();i++)
        {
            fr[s1[i]-'a']++;
        }
       int n=s1.length();
        for(int i=0;i<s2.length();i++)
        {
            vector<int>winfr(26,0);
            int st=0,idx=i;
            while(st<n && idx<s2.length())
            {
                winfr[s2[idx]-'a']++;
                st++;
                idx++;
            }
            if(fr==winfr)
            {
                return true;
            }
        }
        return false;
    }
};