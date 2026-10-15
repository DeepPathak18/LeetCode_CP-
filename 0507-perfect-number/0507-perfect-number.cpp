class Solution {
public:
    bool checkPerfectNumber(int num) {
        vector<int>div;
        int sum=1;
        if(num==1)
        {
            return false;
        }
        for(int i=2;i*i<num;i++)
        {
            if(num%i==0)
            {
                sum+=i;
            
            if(i!=num/i)
            {
                sum+=num/i;
            }
            }
        }
        // for(int i=0;i<div.size();i++)
        // {
        //     sum+=div[i];
        // }
        return sum==num;
    }
};