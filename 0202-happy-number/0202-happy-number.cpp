class Solution {
public:
    bool isHappy(int n) {
        set<int>stvisible;

        while(n!=1 && !stvisible.count(n))
        {
            stvisible.insert(n);
            int total=0;
            while(n>0)
            {
                int d=n%10;
                total+=d*d;
                n/=10;
            }
            n=total;
        }
        return n==1;
    }
};