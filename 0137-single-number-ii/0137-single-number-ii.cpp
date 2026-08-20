class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans1=0,ans2=0;
        for(auto x:nums)
        {
            ans1=(ans1^x) & ~ans2;
            ans2=(ans2^x) & ~ans1;
        }
        return ans1;

    }
};