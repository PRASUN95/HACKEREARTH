class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int K) {
        vector<pair<int,int>> pp;
        vector<vector<int>> ans;
        int distance;
        for(int i=0;i<points.size();i++)
        {
            distance = (points[i][0]*points[i][0] + points[i][1]*points[i][1]);
            pp.push_back({distance,i});
        }
        sort(pp.begin(),pp.end());
        for(int i=0;i<K;i++)
        {
            ans.push_back(points[pp[i].second]);
        }
        return ans;
    }
};