class Solution {
    int solve(vector<int>& S,int m,int n)
    {
        int i, j, x, y; 
  
    int dp[n + 1][m]; 
      
    for (i = 0; i < m; i++) 
        dp[0][i] = 1; 
  
    for (i = 1; i < n + 1; i++) 
    { 
        for (j = 0; j < m; j++) 
        { 
            x = (i-S[j] >= 0) ? dp[i - S[j]][j] : 0; 
  
            y = (j >= 1) ? dp[i][j - 1] : 0; 
  
            dp[i][j] = x + y; 
        } 
    } 
    return dp[n][m - 1]; 
    }
public:
    int change(int amount, vector<int>& coins) {
        int n = coins.size();
        if(amount == 0 && n == 0)return 1;
        if(n == 0) return 0;
       return solve(coins,n,amount);
    }
};