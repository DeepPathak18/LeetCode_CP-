class Solution {
public:
    int uniqueXorTriplets(vector<int>& nums) {
        int n=nums.size();
       if(n<=2)
       {
        return n;
       }
       int cnt=1;
       
       while(cnt<=n)
       {
        cnt<<=1;
       }

        return cnt;
        
    }
};