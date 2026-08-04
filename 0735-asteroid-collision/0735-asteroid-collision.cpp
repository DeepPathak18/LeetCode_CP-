class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        int n=asteroids.size();
       vector<int>s;
       for(int i=0;i<n;i++)
       {
            bool ok=false;
            while(!s.empty() && s.back()>0 && asteroids[i]<0)
            {
                if(abs(asteroids[i])>s.back())
                {
                  s.pop_back();
                  continue;
                }
                else if(abs(asteroids[i])==s.back())
                {
                    s.pop_back();
                }
                ok=true;
                break;
            }

            if(!ok)
            {
                s.push_back(asteroids[i]);
            }
        
       }
       return s;

    }
};