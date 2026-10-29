class Solution {
public:
    string toHex(int num) {
        vector<char> hex = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        unsigned int tmp = num;
        string ans = "";
        if(num==0)
        {
            return "0";
        }
        while(tmp)
        {
            ans += hex[tmp % 16];
            tmp /= 16;
        }

        reverse(ans.begin(), ans.end());
    return ans;
    }
};