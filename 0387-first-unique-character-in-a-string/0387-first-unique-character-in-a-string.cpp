class Solution {
public:
    int firstUniqChar(string s) {
        map<char,int>mpp;
        for(int i=0;i<s.length();i++)
        {
            mpp[s[i]]++;
        }
        // int idx=0;
        for(int i=0;i<s.length();i++)
        {
            if(mpp[s[i]]==1)
            {
                return i; 
            }
            // idx++;
        }
        return -1;
    }
};