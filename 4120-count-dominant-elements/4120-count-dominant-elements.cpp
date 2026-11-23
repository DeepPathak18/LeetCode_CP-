class Solution {
public:
    int countDominantElements(vector<int>& nums) {
       int n=nums.size(),cnt=0;
       if(n==1)
       {
        return 1;
       }
       for(int i=0;i<n;i++)
       {
        if(i==0)
        {
            if(nums[i]>=nums[i+1])
            {
                cnt++;
            }
        }
        else if(i==n-1)
        {
            if(nums[i]>=nums[i-1])
            {
                cnt++;
            }
        }
        else
        {
            if(i!=0 && i!=n-1 && 2*nums[i]>=(nums[i-1]+nums[i+1]))
            {
                cnt++;
            }
        }

       }
       return cnt;
    }
};