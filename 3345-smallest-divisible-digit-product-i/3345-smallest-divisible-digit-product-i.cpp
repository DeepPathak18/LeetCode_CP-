class Solution {
public:
    int smallestNumber(int n, int t) {
        for(int i=n;i<=100;i++)
        {
            int prod=1;
            int temp=i;
            while(temp>0)
            {
                prod*=(temp%10);
                temp/=10;
            }
            if(prod%t==0)
            {
                return i;
            }
        }
        return 0;
    }
};