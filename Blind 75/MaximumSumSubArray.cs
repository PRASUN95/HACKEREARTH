public class Solution {
    public int MaxSubArray(int[] nums) {
        int maxSum = int.MinValue;
        int currSum = 0;
        for(int i=0;i<nums.Length;i++){
            currSum += nums[i];
            maxSum = Math.Max(maxSum, currSum);
            if(currSum < 0)
                currSum = 0;
        }
        return maxSum;
    }
}