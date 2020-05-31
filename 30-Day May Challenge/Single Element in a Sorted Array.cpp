class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int low=0,end = nums.size()-1,mid;
        while(low <= end)
        {
            if(low == end) return nums[low];
            mid = low + (end - low)/2;
            if(mid&1^1) //even
            {
                if(nums[mid] == nums[mid+1])
                {
                    low = mid + 2;
                }
                else end = mid;
            }
            else if(mid&1) // odd
            {
                if(nums[mid] == nums[mid-1])
                {
                    low = mid + 1;
                }
                else end = mid - 1;
            }
        }
        return 0;
    }
};