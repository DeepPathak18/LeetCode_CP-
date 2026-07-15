class Solution {
public:
    int gcdOfOddEvenSums(int n) {
        int oddsum=0,evensum=0,oddnum=1,evennum=2;
        for(int i=1;i<=n;i++)
        {
            oddsum+=oddnum;
            oddnum+=2;
        }
        for(int i=1;i<=n;i++)
        {
            evensum+=evennum;
            evennum+=2;
        }
        while(evensum!=0)
        {
            int temp=evensum;
            evensum=oddsum%evensum;
            oddsum=temp;
        }
        return oddsum;
        
    }
};