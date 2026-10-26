class Solution {
public:
    int titleToNumber(string columnTitle) {
        int col=0;
        for(char c:columnTitle)
        {
            char uc=toupper(c);
            int val=uc-'A'+1;
            col=col*26+val;
        }
        return col;
    }
};