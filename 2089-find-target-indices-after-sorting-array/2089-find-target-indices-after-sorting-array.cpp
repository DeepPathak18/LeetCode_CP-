class Solution {
public:
    vector<int> targetIndices(vector<int>& nums, int target) {
        sort(nums.begin(),nums.end());
        vector<int>res;
        int n=nums.size();
        int first=lower_bound(nums.begin(),nums.end(),target)-nums.begin();
        int last=upper_bound(nums.begin(),nums.end(),target)-nums.begin()-1;

         if(first<nums.size() && nums[first]==target) 
         {
            for(int i=first;i<=last;i++) 
            {
                res.push_back(i);
            }
        }
        
        return res;

    }
};