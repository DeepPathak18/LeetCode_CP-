class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>ans;
        for(int i=left;i<=right;i++)
        {
            vector<int>temp;
            int dup=i;
            while(dup!=0)
            {
                int d=dup%10;
                if(d==0)
                {
                    break;
                }
                dup=dup/10;
                temp.push_back(d);
            }
            if(dup!=0)
            {
                continue;
            }
            bool ok=true;
            for(int j=0;j<temp.size();j++)
            {
                  if(i%temp[j]!=0)
                {
                    ok=false;
                }
                
                
            }
            if(ok)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};