class Solution {
public:
    vector<int> sortArrayByParityII(vector<int>& nums) {
        int n=nums.size();
        vector<int>even;
        vector<int>odd;
        for(int i=0;i<n;i++)
        {
            if(nums[i]%2==0)
            {
                even.push_back(nums[i]);
            }
            else
            {
                odd.push_back(nums[i]);
            }
        }
        int evenidx=0,oddidx=0;
        for(int i=0;i<n;i++)
        {
            if(i%2==0)
            {
                nums[i]=even[evenidx++];
            }
            else
            {
                nums[i]=odd[oddidx++];
            }
        }
        return nums;
    }
};