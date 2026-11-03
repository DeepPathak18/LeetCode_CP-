class Solution {
public:
    int minMoves(vector<int>& nums) {
        int n=nums.size();
        int maxo=INT_MIN;
        for(int i=0;i<n;i++)
        {
            if(maxo<=nums[i])
            {
                maxo=nums[i];
            }
        }
        int cnt=0;
        for(int i=0;i<n;i++)
        {
            cnt+=abs(maxo-nums[i]);
        }
        return cnt;
    }
};