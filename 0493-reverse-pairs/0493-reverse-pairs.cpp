class Solution {
public:

void mergearray(vector<int>&a,int low,int mid,int high)
{
    vector<int>temp;
    int l=low;
    int r=mid+1;

    while(l<=mid && r<=high)
    {
        if(a[l]<=a[r])
        {
            temp.push_back(a[l]);
            l++;
        }
        else
        {
            temp.push_back(a[r]);
            r++;
        }
    }

    while(l<=mid)
    {
        temp.push_back(a[l]);
        l++;

    }
    while(r<=high)
    {
        temp.push_back(a[r]);
        r++;
    }
    for(int i=low;i<=high;i++)
    {
        a[i]=temp[i-low];
    }
}
int numofpair(vector<int>&a,int low,int mid,int high)
{
    int right=mid+1;
    int cnt=0;
    for(int i=low;i<=mid;i++)
    {
        while(right<=high && (long long)a[i]>2LL*a[right])
        {
            right++;
        }
        cnt+=(right-(mid+1));
    }
    return cnt;
}
int mergeSort(vector<int>&a,int low,int high)
{
    int cnt=0;
    if(low>=high)
    {
        return 0;
    }
    int mid=(low+high)/2;
    cnt+=mergeSort(a,low,mid);
    cnt+=mergeSort(a,mid+1,high);
    cnt+=numofpair(a,low,mid,high);
    mergearray(a,low,mid,high);

    return cnt;
}
    int reversePairs(vector<int>& nums) {
        
        int n=nums.size();
        return mergeSort(nums,0,n-1);; 
    }
};