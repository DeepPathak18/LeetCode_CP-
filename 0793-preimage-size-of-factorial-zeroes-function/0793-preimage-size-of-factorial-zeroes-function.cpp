class Solution {
public:
    int preimageSizeFZF(int k) {
        long long l=0,h=5LL*(k+1);
        while(l<h)
        {
            long long mid=(l+h)/2;
            long long nozero=0;
            long long x=mid;

            while(x>0)
            {
                x/=5;
                nozero+=x;

            }
            if(nozero==k)
            {
                return 5;
            }
            else if(nozero<k)
            {
                l=mid+1;
            }
            else
            {
                h=mid-1;
            }
        }
       return 0;
    }
};