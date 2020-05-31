
class Solution {
public:
    int maxUncrossedLines(vector<int>& A, vector<int>& B) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        int lenA = A.size();
        int lenB = B.size();
        vector<vector<int>> dp(lenA+1,vector<int>(lenB+1));
        
        for(int i=0;i<=lenA;++i)
            for(int j=0;j<=lenB;++j)
            {
                if(i==0 || j==0)
                    dp[i][j] = 0;
                else if(A[i-1]==B[j-1])
                    dp[i][j] = 1+dp[i-1][j-1];
                else
                    dp[i][j] = max(dp[i-1][j],dp[i][j-1]);
            }
        
        return dp[lenA][lenB];
    }
};