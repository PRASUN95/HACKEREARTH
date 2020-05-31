class Solution {
    int minA(int a,int b,int c)
    {
        return min(min(a,b),c);
    }
public:
    int countSquares(vector<vector<int>>& matrix) {
        int ans = 0;
        int r = matrix.size();
        if(r == 0) return ans;
        int c = matrix[0].size();
        for(int i = 0;i<r;i++)
        {
            for(int j = 0;j<c;j++)
            {
               if(matrix[i][j] && i > 0 && j > 0)
                {
                      matrix[i][j] = minA(matrix[i][j] + matrix[i-1][j-1],matrix[i][j] + matrix[i][j-1] ,matrix[i][j] + matrix[i-1][j]);
                }
                ans += matrix[i][j];
            }
        }
        return ans;
    }
};