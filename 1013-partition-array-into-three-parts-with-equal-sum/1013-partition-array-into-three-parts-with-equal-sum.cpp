class Solution {
public:
    bool canThreePartsEqualSum(vector<int>& arr) {
        int n=arr.size();
       long long total=0;
       for(int x:arr)
       {
        total+=x;
       }
        if(total%3!=0) 
        {
            return false;
        }
        long long target=total/3;
        long long sum=0;
        int parts=0;
        for(int i=0;i<arr.size()-1;i++) 
        {
            sum+=arr[i];
            if (sum==target) 
            {
                parts++;
                sum=0;
                if (parts==2) 
                {
                    return true;
                }
            }
        }

        return false;

    }
};