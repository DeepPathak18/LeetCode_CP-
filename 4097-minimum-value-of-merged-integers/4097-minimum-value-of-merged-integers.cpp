class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int n=nums.size();
        int mino=INT_MAX;
        for(int i=0;i<n-1;i+=2)
        {
            string s1=to_string(nums[i]);
            string s2=to_string(nums[i+1]);
            string ans=s1+s2;
            int curr=stoi(ans);
            mino=min(mino,curr);
        }
        return mino;
    }
};