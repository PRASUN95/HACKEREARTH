public class Solution {
    public int MaxProfit(int[] prices) {
        int maxProfit = 0;
        int currPrice = prices[0];
        for(int i=1;i<prices.Length;i++){
            if(currPrice < prices[i]){
                maxProfit = Math.Max(maxProfit, prices[i] - currPrice);
            }
            else currPrice = prices[i];
        }
        return maxProfit;
    }
}