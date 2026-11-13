class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n=nums.size();
        int cnt=1;
        int cntinc=1,cntdec=1;

        for(int i=1;i<n;i++)
        {
            if(nums[i]>nums[i-1])
            {
                cntinc++;
                cntdec=1;
            }
            else if(nums[i]<nums[i-1])
            {
                cntdec++;
                cntinc=1;
            }
            else
            {
                cntinc=1;
                cntdec=1;
            }
            cnt=max(cnt,max(cntinc,cntdec));
        }
        return cnt;
    }
};