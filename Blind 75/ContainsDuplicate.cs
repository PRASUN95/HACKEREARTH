public class Solution {
    public bool ContainsDuplicate(int[] nums) {
        HashSet<int> set = new();
        foreach(var a in nums){
            if(!set.Add(a))
                return true;
        }
        return false;
    }
}