class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> adjList(numCourses);
        vector<int> inDegrees(numCourses);
        
        for(auto& p : prerequisites) {
            adjList[p[1]].push_back(p[0]);
            ++inDegrees[p[0]];
        }
        
        queue<int> q;
        for(int i = 0; i < numCourses; ++i) {
            if(inDegrees[i] == 0) {
                q.push(i);
            }
        }
        
        while(!q.empty()) {
            int current = q.front();
            q.pop();
            --numCourses;
            
            for(auto& next : adjList[current]) {
                if(--inDegrees[next] == 0) {
                    q.push(next);
                }
            }
        }
        
        return numCourses == 0;
    }
};