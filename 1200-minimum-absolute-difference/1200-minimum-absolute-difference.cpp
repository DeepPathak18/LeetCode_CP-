class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        vector<vector<int>>ans;
        int n=arr.size();
        sort(arr.begin(),arr.end());
        int min_diff=INT_MAX;

        for(int i=1;i<n;i++) 
        {
            int diff=arr[i]-arr[i-1];
            if(diff<min_diff) 
            {
                min_diff=diff;
                ans.clear();
                ans.push_back({arr[i-1],arr[i]});
            }
            else if(diff==min_diff) 
            {
                ans.push_back({arr[i-1],arr[i]});
            }
        }

        return ans;
    }
};