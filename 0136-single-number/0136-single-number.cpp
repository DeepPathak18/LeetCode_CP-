class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorval=0;
        for(int x:nums)
        {
            xorval=xorval^x;
        }
        return xorval;
    }
};