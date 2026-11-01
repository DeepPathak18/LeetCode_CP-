class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int mino=INT_MAX;
        for(int i=0;i<n;i++)
        {
            mino=min(mino,nums[i]);
        }
        for(int i=0;i<n;i++)
        {
            cnt+=abs(nums[i]-mino);
        }
        return cnt;

    }
};