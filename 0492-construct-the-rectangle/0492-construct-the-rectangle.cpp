class Solution {
public:
    vector<int> constructRectangle(int area) {
        vector<int>ans;
        int w=sqrt(area);

        while(area%w!=0)
        {
            w--;
        }
        int l=area/w;
        ans.push_back(l);
        ans.push_back(w);
        return ans;
    }
};