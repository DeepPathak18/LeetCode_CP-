class Solution {
public:
    int minRange(int a, int b, int c) {
        
        while(a>b+c || b>a+c || c>a+b)
        {
            if(a>b+c)
            {
                a=b+c;
            }
            else if(b>a+c)
            {
                b=a+c;
            }
            else
            {
                c=a+b;
            }

        }
        int ans=max(a,max(b,c))-min(a,min(b,c));
        return ans;
    }
};