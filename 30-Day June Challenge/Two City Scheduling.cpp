class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int ans = 0,n = costs.size();
      /*  sort(costs.begin(),costs.end(),[&](vector<int>& a,vector<int>& b)-> bool{
            return a[0] - a[1] < b[0] - b[1];
        });
        for(int i=0;i< costs.size();i++)
        {
            if(i < n/2) ans += costs[i][0];
            else ans += costs[i][1];
        } */
        vector<pair<int,int>> pp;
         for(int i=0;i< costs.size();i++)
         {
             pp.push_back(make_pair(costs[i][0] - costs[i][1],i));
         }
        sort(pp.begin(),pp.end());
        for(int i=0;i< costs.size();i++)
        {
            if(i < n/2) ans += costs[pp[i].second][0];
            else ans += costs[pp[i].second][1];
        }
        return ans;
    }
};






