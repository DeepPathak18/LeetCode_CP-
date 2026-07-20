class Solution {
public:
    vector<vector<int>> shiftGrid(vector<vector<int>>& grid, int k) {
        int m=grid.size();
        int n=grid[0].size();

        vector<vector<int>>ans(m,vector<int>(n));

        int t=m*n;
        k%=t;
       
            for(int i=0;i<m;i++)
            {
                for(int j=0;j<n;j++)
                {
                    int oldidx=i*n+j;
                    int newidx=(oldidx+k)%t;
                int newrow=newidx/n;
                int newcol=newidx%n;
                ans[newrow][newcol]=grid[i][j];
                }
            }
        return ans;
    }
};