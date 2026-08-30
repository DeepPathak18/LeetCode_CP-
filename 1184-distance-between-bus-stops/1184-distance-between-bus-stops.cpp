class Solution {
public:
    int distanceBetweenBusStops(vector<int>& distance, int start, int destination) {
        if(start>destination)
        {
            swap(start,destination);
        }
        int cw=0;
        for(int i=start;i<destination;i++)
        {
            cw+=distance[i];
        }
        int total=0;
        for(int d:distance)
        {
            total+=d;
        }
        int cntcw=total-cw;
        return min(cw,cntcw);
    }
};