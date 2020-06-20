class Solution {
public:
    void sortColors(vector<int>& nums) {
        int l = 0, m = 0, h = nums.size()-1;
        while(m <= h)
        {
            switch(nums[m])
            {
                case 0:
                    swap(nums[l++], nums[m++]);
                    break;
                case 1:
                    m++;
                    break;
                case 2:
                    swap(nums[m], nums[h--]);
                    break;
            }
        }
    }
};



class Solution {
public:
    void sortColors(vector<int>& nums) {
        vector<int> ref(3, 0);
        vector<int> out(nums.size(), 0);
        for (int i = 0; i < nums.size(); ++i) {
            ++ref[nums[i]];
        }
        for (int i = 1; i < ref.size(); ++i) {
            ref[i] = ref[i-1] + ref[i];
        }
        for (int i = 0; i < nums.size(); ++i){
            out[ref[nums[i]] - 1] = nums[i];
            --ref[nums[i]];
        }
        nums = out;
    }
};