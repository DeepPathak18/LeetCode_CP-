class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int curr=1,maxcnt=0;
        int n=nums.size();
        if(n==1)
        {
            return 1;
        }
        for(int i=1;i<=n-1;i++)
        {
            
            if(nums[i]>nums[i-1])
            {
                curr++;
            }
            else
            {
                curr=1;
            }
            maxcnt=max(maxcnt,curr);
        }
        return maxcnt;
    }
};