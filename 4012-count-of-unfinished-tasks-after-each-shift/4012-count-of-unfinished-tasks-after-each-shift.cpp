class Solution {
public:
    vector<int> countTasks(vector<int>& tasks, vector<int>& shifts) {
        int n=tasks.size();
        vector<int>ans;
        vector<long long>pretasks(n);
        pretasks[0]=tasks[0];
        for(int i=1;i<n;i++)
            {
                pretasks[i]=pretasks[i-1]+tasks[i];
            }
        int idx=0;
        long long cmplt=0;
        for(long long t:shifts)
            {
                if(idx<n)
                {
                    long long need=tasks[idx]-cmplt;

                    if(t<need)
                    {
                        cmplt+=t;
                        ans.push_back(n-idx);
                        continue;
                    }
                    t-=need;
                    idx++;
                    cmplt=0;
                    
                }
                if(idx==n)
                {
                    ans.push_back(0);
                    idx=0;
                    cmplt=0;
                    continue;
                }
                long long tillnow=0;
                if(idx!=0)
                {
                    tillnow=pretasks[idx-1];
                }
                long long tar=tillnow+t;
                int last=upper_bound(pretasks.begin()+idx,pretasks.end(),tar)-pretasks.begin()-1;
                if(last>=idx)
                {
                    idx=last+1;
                }
                if(idx==n)
                {
                   ans.push_back(0);
                    idx=0;
                    cmplt=0;
                    continue;
                }
                else
                {
                    long long done=0;
                    if(idx!=0)
                    {
                        done=pretasks[idx-1];
                    }
                    cmplt=tar-done;
                    ans.push_back(n-idx);
                }
            }
        return ans;
    }
};