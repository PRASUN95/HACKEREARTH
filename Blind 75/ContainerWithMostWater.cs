public class Solution {
    public int MaxArea(int[] height) {
        int i = 0, j = height.Length - 1;
        int maxArea = -1, currArea = -1;
        while(i < j){
            currArea = Math.Min(height[j], height[i]) * (j - i);
            maxArea = Math.Max(currArea, maxArea);
            if(height[i] < height[j]){
                i++;
            }
            else 
                j--;
        }
        return maxArea;
    }
}