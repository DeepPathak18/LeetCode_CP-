class Solution {
public:
    string decodeString(string s) {
        string ans="";
        int n=s.length();
        stack<int>cnt;
        stack<string>str;
        int num=0;
        for(char c:s)
        {
            if(isdigit(c)) 
            {
                num=num*10+(c-'0');
            }
            else if(c=='[') 
            {
                cnt.push(num);
                str.push(ans);
                num=0;
                ans="";
            }
            else if(c==']') 
            {
                int recnt=cnt.top();
                cnt.pop();
                string prev=str.top();
                str.pop();
                for(int i=0;i<recnt;i++) 
                {
                    prev+=ans;
                }
                ans=prev;
            }
            else 
            {
                ans+=c;
            }
        }

        return ans;
        
    }
};