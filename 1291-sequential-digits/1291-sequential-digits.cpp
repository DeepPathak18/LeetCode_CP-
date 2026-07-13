class Solution {
public:
    vector<int> sequentialDigits(int low, int high) {
        vector<int>ans;
        string dig="123456789";
        for(int i=2;i<=9;i++)
        {
            for(int j=0;j+i<=9;j++)
            {
                int digit=stoi(dig.substr(j,i));
                if(digit>=low && digit<=high)
                {
                    ans.push_back(digit);
                }
            }
        }
        return ans;
    }
};