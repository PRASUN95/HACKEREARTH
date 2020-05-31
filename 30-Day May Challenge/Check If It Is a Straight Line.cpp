class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& c) {
        double Cslope;
        double slope =  abs(double(c[0][1] - c[1][1]) / double(c[0][0] - c[1][0]));
        for(int i=2;i<c.size();i++)
        {
            Cslope =  abs(double(c[0][1] - c[i][1]) / double(c[0][0] - c[i][0]));
            if(Cslope != slope) return false;
        }
        return true;
    }
};