class Solution {
public:
    int minOperations(vector<int>& nums, vector<int>& locked, int k) {
        int n=nums.size();
        int unlock=0;
        for(int i=0;i<n;i++)
        {
            int maxo=0;
            int mino=INT_MAX;
            for(int j=0;j<=i;j++)
            {
                maxo=max(maxo,nums[j]);
            }
            for(int j=i;j<n;j++)
            {
                mino=min(mino,nums[j]);
            }
            if(maxo>mino && locked[i] == 1)
            {
                unlock++;
            }
        }
        if(unlock>k)
        {
            return -1;
        }
        int swap=0;
        for(int i=0;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                if(nums[i]>nums[j])
                {
                    swap++;
                }
            }
        }
        return unlock+swap;
    }
};