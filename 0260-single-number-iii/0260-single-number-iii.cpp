class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        int n=nums.size();
        int xr=0;
        for(int i=0;i<n;i++)
        {
            xr^=nums[i];
        }

        int setbit=xr & (-(unsigned int)xr);
        int num1=0,num2=0;
        for(int i=0;i<n;i++)
        {
            if(nums[i] & setbit)
            {
                num1^=nums[i];
            }
            else
            {
                num2^=nums[i];
            }
        }

        return {num1,num2};

    }
};