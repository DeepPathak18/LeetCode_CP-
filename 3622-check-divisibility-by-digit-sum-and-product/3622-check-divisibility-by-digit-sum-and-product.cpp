class Solution {
public:
    bool checkDivisibility(int n) {
        int sum=0,mul=1,dup=n;
        while(dup>0)
        {
            int d=dup%10;
            mul=mul*d;
            sum+=d;
            dup/=10;
        }      
        
        return n%(sum+mul)==0;
    }
};