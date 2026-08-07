class Solution {
public:
    bool isMonotonic(vector<int>& nums) {
        int n=nums.size();
        bool incmono=true,decmono=true;
        
       
            for(int i=0;i<n-1;i++)
            {
                if(nums[i]>nums[i+1])
                {
                    incmono=false;
                    
                }
                if(nums[i]<nums[i+1])
                {
decmono=false;
                }
            }
        
       
        return incmono||decmono;

    }
};