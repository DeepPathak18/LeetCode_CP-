class Solution {
public:
    string toHex(int num) {
        string ans="";
        string temp="0123456789abcdef";
        if(num==0)
        {
            return "0";
        }
        while(num!=0)
        {
            int rem=num&15;
            ans=temp[rem]+ans;
            num=(unsigned int)num>>4;
        }   
        return ans;
    }
};