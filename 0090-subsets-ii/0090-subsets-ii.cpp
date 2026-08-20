class Solution {
public:
void solve(int idx,vector<int>nums,vector<int>&temp,vector<vector<int>>&ans)
{
    if(idx==nums.size())
    {
        ans.push_back(temp);
        return;
    }
    temp.push_back(nums[idx]);
    solve(idx+1,nums,temp,ans);
    temp.pop_back();

    int i=idx;
    while(i+1<nums.size() && nums[i+1]==nums[idx])
    {
        i++;
    }
    solve(i+1,nums,temp,ans);

}
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>temp;
        vector<vector<int>>ans;
        solve(0,nums,temp,ans);
        return ans;
    }
};