class Solution {
public:
    int totalNumbers(vector<int>& digits) {
       int n=digits.size();
       vector<int>fr(10,0);
        for (int d:digits) 
        {
            fr[d]++;
        }
        int ans=0;
        for(int a=1;a<=9;a++) 
        {
            if(fr[a]==0)
            {
                continue;
            }
            fr[a]--;
            for(int b=0;b<=9;b++) 
            {
                if(fr[b]==0)
                {
                    continue;
                }
                fr[b]--;
                for (int c=0;c<=8;c+=2) 
                {
                    if(fr[c]>0) 
                    {
                        ans++;
                    }
                }
             fr[b]++;
            }
            fr[a]++;
        }

        return ans;

    }
};