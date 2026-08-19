class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        // vector<vector<int>>seats(vector<int>(10));
        map<int,set<int>>mpp;
        int cnt=0;
        for(auto& r:reservedSeats)
        {
            int row=r[0];
            int seat=r[1];
            mpp[row].insert(seat);


        }
        cnt=(n-mpp.size())*2;
        for(auto& [row,bkseats]:mpp)
        {
            auto isAvl=[&](int seat){
                return bkseats.find(seat)==bkseats.end();
            };
            bool gA=isAvl(2) && isAvl(3) && isAvl(4) && isAvl(5);
            bool gB=isAvl(4) && isAvl(5) && isAvl(6) && isAvl(7);
            bool gC=isAvl(6) && isAvl(7) && isAvl(8) && isAvl(9);

            if(gA && gC)
            {
                cnt+=2;
            }
            else if(gA || gB || gC)
            {
                cnt+=1;
            }


        }

        return cnt;


        
        
    }
};