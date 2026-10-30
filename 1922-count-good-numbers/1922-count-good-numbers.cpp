class Solution {
public:
const long long mod=1000000007;
long long modpow(long long a,long long n)
{
    long long res=1;
    a%=mod;
    while(n>0)
    {
        if(n&1)
        {
            res=(res*a)%mod;
        }
        a=(a*a)%mod;
        n>>=1;
    }
    return res;

}
    int countGoodNumbers(long long n) {
        long long even=(n+1)/2;
        long long odd=n/2;

        long long ans=(modpow(5,even)*modpow(4,odd))%mod;
        return ans%mod;

    }
};