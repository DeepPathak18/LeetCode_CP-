class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int n=arr1.size(),m=arr2.size();
        vector<int>temp(n,0);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(abs(arr1[i]-arr2[j])<=d)
                {
                    temp[i]=1;
                }
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            if(temp[i]==0)
            {
                cnt++;
            }
        }
        return cnt;
    }
};