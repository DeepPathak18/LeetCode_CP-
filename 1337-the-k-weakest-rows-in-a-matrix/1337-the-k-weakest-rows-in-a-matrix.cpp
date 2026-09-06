class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>>rows; 
        int m=mat.size();
        int n= mat[0].size();

        // Store {soldier count, row index}
        for (int i = 0; i < m; i++) {
            int soldiers = 0;

            for (int j = 0; j < n; j++) {
                if (mat[i][j] == 1)
                    soldiers++;
                else
                    break;  // Since all 1s come before 0s

            }

            rows.push_back({soldiers, i});
        }

        // Sort by soldier count, then row index
        sort(rows.begin(), rows.end());

        vector<int> ans;

        for (int i = 0; i < k; i++) {
            ans.push_back(rows[i].second);
        }

        return ans;
    }
};