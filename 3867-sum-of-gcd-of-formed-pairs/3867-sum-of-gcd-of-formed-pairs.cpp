class Solution {
public:
    int calgcd(int a,int b)
    {
        if(b==0)
        {
            return a;
        }
        return calgcd(b,a%b);
    }
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        vector<long long>prefixGcd(n);

        int mx=nums[0];

        for(int i=0;i<n;i++)
            {
                mx=max(mx,nums[i]);
                prefixGcd[i]=calgcd(nums[i],mx);
            }

        sort(prefixGcd.begin(),prefixGcd.end());

        long long sum=0;
        int l=0;
        int r=n-1;

        while(l<r)
            {
                sum+=calgcd(prefixGcd[l],prefixGcd[r]);
                l++;
                r--;
                
            }
        
        // for(int i=0;i<)

        return sum;
    }
};