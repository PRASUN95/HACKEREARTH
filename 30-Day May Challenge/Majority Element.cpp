class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int> ma;
        int n = nums.size() / 2;
        for(int a : nums)
        {
            ma[a]++;
            if(ma[a] > n) return a;
        }
        return 0;
    }
};