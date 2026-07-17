class Solution {
public:
    int findUnsortedSubarray(vector<int>& nums) {
        int ans=0;
        int n=nums.size();
        vector<int>temp=nums;
        sort(temp.begin(),temp.end());
        int l=0;
        int r=n-1;

        while(l<n && nums[l]==temp[l])
        {
            l++;
        }
        while(r>=0 && nums[r]==temp[r])
        {
            r--;
        }
        if(l>r)
        {
            return 0;
        }
    ans=r-l+1;
        return ans;
    }
};