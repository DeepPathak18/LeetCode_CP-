class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n = nums.size();

        vector<long long> prefixMax(n);
        vector<long long> suffixMin(n);

        // Maximum from nums[0] to nums[i]
        prefixMax[0] = nums[0];

        for (int i = 1; i < n; i++) {
            prefixMax[i] = max(prefixMax[i - 1], (long long)nums[i]);
        }

        // Minimum from nums[i] to nums[n-1]
        suffixMin[n - 1] = nums[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            suffixMin[i] = min(suffixMin[i + 1], (long long)nums[i]);
        }

        // Find smallest stable index
        for (int i = 0; i < n; i++) {
            long long instability = prefixMax[i] - suffixMin[i];

            if (instability <= k) {
                return i;
            }
        }

        return -1;
    }
};