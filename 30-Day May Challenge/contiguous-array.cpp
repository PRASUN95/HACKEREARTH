class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int ans = INT_MIN,res = 0;
        unordered_map<int,int> m;
        if(nums.size() == 0) return 0;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i] == 0) nums[i] = -1;
                
        }
        for(int i=0;i<nums.size();i++)
        {
            if(i-1 >= 0)
            nums[i] = nums[i] + nums[i-1];
            if(nums[i] == 0)res = i+1;
            else if(m.find(nums[i]) != m.end())
            {
                res = i - m[nums[i]];
            }
            else m[nums[i]] = i;
             ans = max(ans,res);
        }
            
        return ans;
    }
};