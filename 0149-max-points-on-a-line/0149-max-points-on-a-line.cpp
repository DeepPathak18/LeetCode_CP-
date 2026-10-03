class Solution {
public:
    int maxPoints(vector<vector<int>>& points) {
        int n=points.size();
        int cnt=0;
          if(n<=2)
          {
            return n;
          }
        for(int i=0;i<n;i++) 
        {
            map<pair<int,int>,int>mpp;
            for (int j=i+1;j<n;j++) 
            {
                int dy=points[j][1]-points[i][1];
                int dx=points[j][0]-points[i][0];
               
                if(dx==0) 
                {
                    dy=1;
                    dx=0;
                }
                else if(dy==0) 
                {
                    dy=0;
                    dx=1;
                }
                else
                {
                    int g=gcd(abs(dy),abs(dx));
                    dy/=g;
                    dx/=g;
                    if(dx<0) 
                    {
                        dx=-dx;
                        dy=-dy;
                    }
                }

                mpp[{dy, dx}]++;

                cnt=max(cnt, mpp[{dy,dx}]+1);
            }
        }

        return cnt;
    }
};