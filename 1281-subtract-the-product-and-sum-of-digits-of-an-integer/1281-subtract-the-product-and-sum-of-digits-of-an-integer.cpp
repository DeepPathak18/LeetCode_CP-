class Solution {
public:
    int subtractProductAndSum(int n) {
        int mul=1,sum=0,ans=0;
        while(n>0)
        {
            int d=n%10;
            mul*=d;
            sum+=d;
            n/=10;
        }
        ans=mul-sum;
        return ans;
    }
};