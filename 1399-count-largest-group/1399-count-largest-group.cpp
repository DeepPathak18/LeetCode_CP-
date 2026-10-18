class Solution {
public:
    int countLargestGroup(int n) {
        int freq[37]={0};
        for (int i = 1; i <= n; i++) {
            int num = i;
            int sum = 0;

            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }

            freq[sum]++;
        }

        int maxSize = 0;
        int count = 0;

        for (int i = 1; i <= 36; i++) {
            if (freq[i] > maxSize) {
                maxSize = freq[i];
                count = 1;
            }
            else if (freq[i] == maxSize) {
                count++;
            }
        }

        return count;
    

    }
};