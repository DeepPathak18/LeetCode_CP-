class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        int n=nums.size();
        vector<int>ans;
        int minnum=nums[0];
        int maxnum=nums[0];
        for(int i=0;i<n;i++)
        {
            if(nums[i]>maxnum)
            {
                maxnum=nums[i];
            }
            if(nums[i]<minnum)
            {
                minnum=nums[i];
            }
        }
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        for(int i=minnum;i<maxnum;i++)
        {
            if(mpp[i]==0)
            {
                ans.push_back(i);
            }
        }
        return ans;
    }
};