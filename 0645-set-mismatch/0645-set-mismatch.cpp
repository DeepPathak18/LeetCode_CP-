class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        vector<int>ans;
        int n=nums.size();
        vector<int>fr(n+1,0);
        for(int i=0;i<n;i++)
        {
            fr[nums[i]]++;
        }
        int dup=-1,mis=-1;
        for(int i=1;i<=n;i++)
        {
            if(fr[i]==2)
            {
                dup=i;
            }
            if(fr[i]==0)
            {
                mis=i;
            }
        }
        ans.push_back(dup);
        ans.push_back(mis);
        return ans;
    }
};