class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.length();
        vector<int>ans(n);
        int val=0;
        
        for(int i=0;i<n;i++)
        {
            if(seq[i]=='(')
            {
                val++;
                ans[i]=val%2;
            }
            else 
            {
                ans[i]=val%2;
                val--;
            }
        }
        return ans;
    }
};