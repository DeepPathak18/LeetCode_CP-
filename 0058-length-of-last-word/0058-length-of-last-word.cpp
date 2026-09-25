class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=s.length()-1;
        int cnt=0;
        // string str=trim(s);
        while(i>=0 && s[i]==' ') 
        {
            i--;
        }
        while(i>=0 && s[i]!=' ') 
        {
            cnt++;
            i--;
        }
        return cnt;
    }
};