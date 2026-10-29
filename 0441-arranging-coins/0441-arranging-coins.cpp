class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=1;
        while(n>=cnt)
        {
            n=n-cnt;
            cnt++;
        }
        return cnt-1;
    }
};