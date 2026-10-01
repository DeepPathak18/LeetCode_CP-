class Solution {
public:
// bool isprime(int num) 
// {
//     if(num<=1) 
//     {
//         return false;
//     }
//     if(num==2) 
//     {
//         return true;
//     }
//     if(num%2==0) 
//     {
//         return false;
//     }
//     for(int i=3;i*i<= num;i+=2) 
//     {
//         if(num%i==0) 
//         {
//             return false; 
//         }
//     }
//     return true; 
// }
    int countPrimes(int n) {
        if (n<=2)
            return 0;
        int size=n/2;
        vector<bool>prime(size,true);

        int limit=sqrt(n);
        for (int i=3;i<=limit;i+=2) 
        {
            if(prime[i/2]) 
            {
                for(int j=i*i;j<n;j+=2*i) 
                {
                    prime[j/2]=false;
                }
            }
        }
        int cnt=1;
        for(int i=3;i<n;i+=2) 
        {
            if(prime[i/2])
            {
                cnt++;
            }
        }

        return cnt;
    }
};