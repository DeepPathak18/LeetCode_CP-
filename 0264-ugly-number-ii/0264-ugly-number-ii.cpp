class Solution {
public:
    int nthUglyNumber(int n) {
        // Better Approach but time Complexity is O(n log n) and other thing is that check non ugly number also

        // vector<int>ans;
        // if(n==1)
        // {
        //     return 1;
        // }
        // int cnt=1;
        // while(ans.size()<n)
        // {
        //     int dup=cnt;
        //     while(dup%2==0)
        //     {
        //         dup=dup/2;
        //     }
        //     while(dup%3==0)
        //     {
        //         dup=dup/3;
        //     }
        //     while(dup%5==0)
        //     {
        //         dup=dup/5;
        //     }
        //     if(dup==1)
        //     {
        //         ans.push_back(cnt);
        //     }
        //     cnt++;

        // }
        // return ans.back();
        vector<int>dp(n);
        dp[0] = 1;
        int p2 = 0;
        int p3 = 0;
        int p5 = 0;

        for(int i=1;i<n;i++) 
        {
            int a=dp[p2]*2;
            int b=dp[p3]*3;
            int c=dp[p5]*5;
            dp[i]=min(a,min(b,c));
            if(dp[i]==a) 
            {
                p2++;
            }
            if(dp[i]==b) 
            {
                p3++;
            }
            if(dp[i]==c) 
            {
                p5++;
            }
        }
        return dp[n-1];
    }
};