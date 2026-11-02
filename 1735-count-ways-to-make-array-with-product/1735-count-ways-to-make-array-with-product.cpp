class Solution {
public:
const int mod=1000000007;
const int MAX=10015;
int matrix[10015][15];

    void precompute()
    {
        matrix[0][0]=1;
        for(int i=1;i<MAX;i++)
        {
            matrix[i][0]=1;
            for(int j=1;j<=13&&j<=i;j++)
            {
                matrix[i][j]=(matrix[i-1][j-1]+matrix[i-1][j])%mod;
            }
        }
    }


    vector<int> waysToFillArray(vector<vector<int>>& queries) {
        precompute();
        vector<int>answer;
        for(auto &q:queries)
        {
            int n=q[0];
            int k=q[1];

            long long ans=1;
      
            for(int p=2;p*p<=k;p++)
            {
                if(k %p==0)
                {
                    int cnt = 0;

                    while(k % p == 0)
                    {
                        cnt++;
                        k /= p;
                    }

                    ans = (ans * matrix[n + cnt - 1][cnt]) % mod;
                }
            }
            if(k > 1)
            {
                ans = (ans * matrix[n][1]) % mod;
            }

            answer.push_back((int)ans);
        }

        return answer;

    }
};