class Solution {
public:
    long long minCost(vector<int>& nums) {
        int n=nums.size();
        long long ans=LLONG_MAX;
        int i=0;
        // sort(nums.begin(),nums.end());
        // int val=nums[n/2];
        // int preit=0,postit=0;
        // long long cost=0;
        // for(int i=0;i<n;i++)
        // {
        //     int it=0;
        //     while(nums[it]<=val)
        //     {
        //         it++;
        //     }
        //     cost+=nums[it]*it;


        // }
        while(i<n)
        {
            int j=i;
            while(j<n && nums[j]==nums[i]) 
            {
                j++;
            }
            int len=j-i;
            if(i<=n-2 && j-1>=1) 
            {
                long long cost=1LL*(n-len)*nums[i];
                ans=min(ans,cost);
            }
            i=j;
        }
        return ans;
    }
};