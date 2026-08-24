class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        //vector<int>ans;
        // int car=0;
        // string st="";
        // int n=num.size();
        // for(int i=0;i<n;i++)
        // {
        //     st+=to_string(num[i]);
        // }
        // int nu=stoi(st);
        // int total=nu+k;
        // string str=to_string(total);
        // for(int i=0;i<str.length();i++)
        // {
        //     ans.push_back(str[i]);
        // }

        int it=num.size()-1;

        while (it>=0 || k>0) 
        {
            if(it>=0) 
            {
                k+=num[it];
                num[it]=k%10;
                k/=10;
                it--;
            } 
            else 
            {
                num.insert(num.begin(),k%10);
                k/=10;
            }
        }
        return num;
    }
};