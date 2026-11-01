class Solution {
public:
long long gcd(long long  a,long long b)
{
    while(b!=0)
    {
        long long temp=b;
        b=a%b;
        a=temp;
    }
    return a;
}
    long long minimumMaxValue(int n, int index, int value) {
        // vector<long long>ans(n);
        // ans[index]=value;
        // int it=index+1;
        // long long res=0;
        
        // while(it!=n-1)
        // {
        //     long long temp=ans[it-1]+1;
        //     if(gcd(ans[it-1],temp)>1)
        //     {
        //         res=temp;
        //     }
        //     it++;
        // }
        // return res;

        if(value==1)
        {
            return -1;
        }
        long long p=value;
        for(long long i=2;i*i<=value;i++)
        {
            if(value%i==0)
            {
                p=i;
                break;
            }
        }

        if(index>0)
        {
            long long leftMin=value-p-2LL*(index-1);
            if(leftMin<=0)
            {
                return -1;
            }
        }

        if(index==n - 1)
        {
            return value;
        }
        long long res=value+p+2LL*(n-index-2);
        return res;

    }
};