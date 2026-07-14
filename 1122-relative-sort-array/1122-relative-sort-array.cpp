class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int n=arr1.size();
        int m=arr2.size();
       vector<int>ans;
       vector<int>fr(1001,0);
       for(int x:arr1)
       {
            fr[x]++;
       }
       for(int x:arr2)
       {
        while(fr[x]>0)
        {
            ans.push_back(x);
            fr[x]--;
        }
       }
       for(int i=0;i<=1000;i++) 
       {
            while(fr[i]>0) 
            {
                ans.push_back(i);
                fr[i]--;
            }
        }
        return ans;
    }
};