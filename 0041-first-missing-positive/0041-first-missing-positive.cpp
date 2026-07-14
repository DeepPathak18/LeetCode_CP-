class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        int n=nums.size();
        vector<int>fr(n+1,0);
     
        for(int i=0;i<n;i++)
        {
            if(nums[i]>=1 && nums[i]<=n)
            {
                fr[nums[i]]++;
            }
        }      
        for(int i=1;i<=n;i++)
        {
            if(fr[i]==0)
            {
                return i;
            }
        }
        return n+1;
    }
};