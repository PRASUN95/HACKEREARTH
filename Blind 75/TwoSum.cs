public class Solution {
    public int[] TwoSum(int[] nums, int target) {
        Dictionary<int, int> map = new();
        for(int i=0;i<nums.Length;i++){
            if(map.ContainsKey(target - nums[i])){
                return new int[]{i, map[target - nums[i]]};
            }
            //map.Add(Key, value) throws exception if the key is already present.
            map[nums[i]] = i;
        }
        return null;
    }
}