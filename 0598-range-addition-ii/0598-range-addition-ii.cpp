class Solution {
public:
    int maxCount(int m, int n, vector<vector<int>>& ops) {
        int k=ops.size();
        int minR=m,minC=n;
        for(int i=0;i<k;i++)
        {
            minR=min(minR,ops[i][0]);
            minC=min(minC,ops[i][1]);
        }
        return minR*minC;
        
    }
};