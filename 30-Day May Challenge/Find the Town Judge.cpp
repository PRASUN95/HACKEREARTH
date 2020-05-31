class Solution {
public:
    int findJudge(int N, vector<vector<int>>& trust) {
        int s = trust.size(),T=-1;
        set<int> st;
        unordered_map<int,int> m;
        for(int i=0;i<s;i++)
        {
            st.insert(trust[i][0]);
        }
        for(int i=1;i<=N;i++)
        {
            if(st.find(i) == st.end()) T = i;
        }
        if(T == -1) return -1;
        for(int i=0;i<s;i++)
        {
            if(trust[i][1] == T)
            m[trust[i][0]] = trust[i][1];
        }
         for(int i=1;i<=N;i++)
        {
            if(i == T) continue;
            if(m.find(i) == m.end())
            {
                T = -1;break;
            }
        }
        return T;
    }
};