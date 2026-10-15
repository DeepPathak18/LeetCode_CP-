class Solution {
public:
    int addDigits(int num) {

        string st=to_string(num);
        while(st.length()>1)
        {
            int sum=0;
            for(int i=0;i<st.length();i++)
            {
                sum+=st[i]-'0';
            }
            st=to_string(sum);
        }
        return stoi(st);
    }
};