class Solution {
public:
    int findPairs(vector<int>& nums, int k) {
        int n=nums.size();
        if(k<0)
        {
            return 0;
        }
        sort(nums.begin(),nums.end());
        int cnt=0;
        int l=0,r=1;
        while(r<n && l<n)
        {
            if(l==r)
            {
                r++;
            }
            else
            {
                int diff=nums[r]-nums[l];
                if(diff<k) 
                {
                    r++;
                }   
                else if(diff>k) 
                {
                    l++;
                }
                else 
                {
                    cnt++;
                    l++;

                    while(l<n && nums[l]==nums[l-1])
                    {
                        l++;
                    }
                }
            }
        }   

    
        return cnt;
    }
};