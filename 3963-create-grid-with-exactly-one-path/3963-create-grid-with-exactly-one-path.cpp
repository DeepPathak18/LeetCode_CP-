class Solution {
public:
    vector<string> createGrid(int m, int n) {
        vector<string>grid(m,string(n,'#'));
        // vector<string>ans;
        int rp=0,cp=0;
        grid[rp][cp]='.';
        while(rp<m-1 || cp<n-1)
        {
            if(cp<n-1)
            {
                cp++;
            }
            else
            {
                rp++;
            }
            grid[rp][cp]='.';
        }
        return grid;
    }
};