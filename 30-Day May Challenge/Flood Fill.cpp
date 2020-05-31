class Solution {
    void dfs(vector<vector<int>>& image,int sr,int sc,int rows,int cols,int newColor,int source)
    {
        if(sr >= rows || sc >= cols || sr < 0 || sc < 0 )return;
        else if(image[sr][sc] != source) return;
        
        image[sr][sc] = newColor;
        
        dfs(image,sr,sc+1,rows,cols,newColor,source);
        dfs(image,sr,sc-1,rows,cols,newColor,source);
        dfs(image,sr+1,sc,rows,cols,newColor,source); 
        dfs(image,sr-1,sc,rows,cols,newColor,source);
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int newColor) {
        if(newColor==image[sr][sc])
            return image;
        int rows = image.size();
        int cols = image[0].size();
        dfs(image,sr,sc,rows,cols,newColor,image[sr][sc]);
        return image;
    }
};