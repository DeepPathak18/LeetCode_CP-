class Solution {
public:
long long gcd(long long a,long long b)
{
    while(b!=0) 
    {
        long long temp=a%b;
            a=b;
            b=temp;
    }
        return a;
}
long long lcm(long long a,long long b)
{
    return (a/gcd(a,b))*b;
}
    int nthUglyNumber(int n, int a, int b, int c) {
        long long ab=lcm(a,b);
        long long bc=lcm(b,c);
        long long ac=lcm(a,c);
        long long abc=lcm(ab,c);
        long long l=1;
        long long h=1LL*n*min({a,b,c});
        while(l<h) 
        {
            long long mid=l+(h-l)/2;
            long long cnt=mid/a+mid/b+mid/c-mid/ab-mid/bc-mid/ac+mid/abc;
            if(cnt<n) 
            {
                l=mid+1;
            }
            else 
            {
                h=mid;
            }
        }
        return (int)l;
    }
};