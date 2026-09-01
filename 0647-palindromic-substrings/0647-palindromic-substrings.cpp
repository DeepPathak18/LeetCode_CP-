class Solution {
public:
// bool ispali(vector<int>str)
// {
//     int i=0,j=str.length()-1;
//     while(i<j)
//     {
//         if(str[i]!=str[j])
//         {
//             return false;
//         }
//     }
//     return true;
// }
    int countSubstrings(string s) {
        int cnt=0;
        int n=s.length();

        for(int i=0;i<n;i++)
        {
            int l=i,r=i;
            while(l>=0 && r<n && s[l]==s[r]) 
            {
                cnt++;
                l--;
                r++;
            }
            l=i;
            r=i+1;
            while(l>=0 && r<n && s[l]==s[r]) 
            {
                cnt++;
                l--;
                r++;
            }
        }
    return cnt;
    }
};