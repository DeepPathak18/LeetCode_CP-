class Solution {
public:
    int maximum69Number (int num) {
        // int maxnum=num;
        // int dup=num;
        string st=to_string(num);
        for(int i=0;i<st.length();i++)
        {
            
            if(st[i]=='6')
            {
                st[i]='9';
                break;
            }
            // int currnum=stoi(st);
            // if(maxnum<currnum)
            // {
            //     maxnum=currnum;
            // }
        }
        return stoi(st);
    }
};