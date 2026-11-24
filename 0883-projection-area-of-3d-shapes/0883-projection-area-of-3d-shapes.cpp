class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int n=grid.size();
        int top=0,front=0,side=0;

        for(int i=0;i<n;i++) 
        {
            int rowmaxi=0;
            int colmaxi=0;

            for (int j=0;j<n;j++) 
            {
                if(grid[i][j]>0) 
                {
                    top++;
                }
                rowmaxi=max(rowmaxi,grid[i][j]);
                colmaxi=max(colmaxi,grid[j][i]);
            }

            front+=rowmaxi;
            side+=colmaxi;
        }
        return top+front+side;
    }
};