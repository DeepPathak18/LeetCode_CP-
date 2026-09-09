class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        sort(nums.rbegin(),nums.rend());
        int total=0;
        int n=nums.size();
        for(int i=0;i<n;i++)
        {
            total+=nums[i];
        }
        vector<int>ans;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=nums[i];
            ans.push_back(nums[i]);
            if(sum>total-sum)
            {
                break;
            }
        }
        return ans;

    }
};