class Solution {
public:
    vector<string> assignUmbrella(vector<int>& rain) {
        int n=rain.size();
        vector<string>ans(n,"None");
        // if(n==0)
        // {
        //     return 
        // }
        int Acnt=0,Bcnt=0;
        for(int i=0;i<n;i++)
        {
            int Aturn=0,Bturn=0;
            if(i<n-1 && rain[i]==1 && rain[i+1]==1)
            {
                Aturn=1;
            }
            if(rain[i]==1)
            {
                Bturn=1;
            }
            if(Aturn && Bturn)
            {
                if(Acnt<=Bcnt)
                {
                    ans[i]="Alice";
                    Acnt++;
                }
                else
                {
                    ans[i]="Bob";
                    Bcnt++;
                }
                
            }
            else if(Aturn) 
            {
                ans[i]="Alice";
                Acnt++;
            }
            else if(Bturn)
            {
                ans[i]="Bob";
                Bcnt++;
            }
        }
        return ans;
    }
};