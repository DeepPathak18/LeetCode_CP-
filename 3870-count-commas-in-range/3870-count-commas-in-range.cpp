class Solution {
public:
    int countCommas(int n) {
        int cnt=0;
        if(n<1000)
        {
            return 0;
            
        }
        else
        {
            if(n>=1000)
            {
               cnt=n-1000+1;
            }
        }
        return cnt;
    }
};