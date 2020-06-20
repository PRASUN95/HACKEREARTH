class Solution {
public:
    int searchInsert(vector<int>& a, int target) {
       int i = 0;
        while(i < a.size() && a[i] < target ){
            i++;
        }
        return i;
    }
};


class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        
        int n = nums.size();
        int low = 0;
        int high = n-1;
        
        while(low <= high){
            int mid = low + (high-low)/2;
            if(nums[mid] == target){
                return mid;
            }else if(nums[mid] > target){
                high = mid - 1;
            }else{
                low = mid + 1;
            }
        }
        return low;
    }
};