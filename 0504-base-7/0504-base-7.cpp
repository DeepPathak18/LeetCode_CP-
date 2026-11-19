class Solution {
public:
    string convertToBase7(int num) {
        string ans="";
        if (num == 0) {
            return "0";
        }
        bool neg = false;
        if (num < 0) {
            neg = true;
            num = -num;
        }
        while (num > 0) {
            int r = num % 7;
            ans += to_string(r);
            num = num / 7;
        }
        if (neg)
        {
            ans += '-';
        }

        reverse(ans.begin(), ans.end());

        return ans;
        
    }
};