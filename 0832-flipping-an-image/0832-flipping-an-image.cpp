class Solution {
public:
    vector<vector<int>> flipAndInvertImage(vector<vector<int>>& image) {
        vector<vector<int>>ans;
        int n=image.size();
        
        for(int i=0;i<n;i++)
        {
            int l=0,r=n-1;
           while(l<=r)
           {
            if (image[i][l]==image[i][r]) 
            {
                    int mid= image[i][l] ^ 1; 
                    image[i][l] = mid;
                    image[i][r] = mid;
            }
            l++;
            r--;
           }
        }
        
        return image;
    }
};