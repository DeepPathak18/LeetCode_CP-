class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        int ans=0,i=0;
        map<int,int>mpp;
        for(int j=0;j<n;j++)
        {
            mpp[nums[j]]++;
            while(mpp[nums[j]]>k)
            {
                mpp[nums[i]]--;
                i++;
            }
            ans=max(ans,j-i+1);
        }
        return ans;

    }
};