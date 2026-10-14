class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total= numBottles+(numBottles-1)/(numExchange-1);
        return total;
    }
};