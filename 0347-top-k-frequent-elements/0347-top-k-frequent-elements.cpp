class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        vector<int>ans;
        int n=nums.size();
        map<int,int>mpp;
        for(int i=0;i<n;i++)
        {
            mpp[nums[i]]++;
        }
        vector<pair<int,int>>v;
        for(auto it:mpp)
        {
            v.push_back({it.second,it.first});
        }
        sort(v.begin(),v.end(),greater<pair<int,int>>());
        for(int i=0;i<k;i++)
        {
            ans.push_back(v[i].second);
        }
        return ans;
    }
};