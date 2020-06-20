class Solution {
    vector<int> findLargest(vector<int>& arr, int n) 
    { 
        vector<int> ans;
        
        sort(arr.begin(),arr.end());
        vector <int> divCount(n, 1); 

        vector <int> prev(n, -1); 

        int max_ind = 0; 

        for (int i=1; i<n; i++) 
        { 
            for (int j=0; j<i; j++) 
            { 
                if (arr[i]%arr[j] == 0) 
                { 
                    if (divCount[i] < divCount[j] + 1) 
                    { 
                        divCount[i] = divCount[j]+1; 
                        prev[i] = j; 
                    } 
                } 
            } 

            if (divCount[max_ind] < divCount[i]) 
                max_ind = i; 
        } 

        int k = max_ind; 
        while (k >= 0) 
        { 
            ans.push_back(arr[k]);
            k = prev[k]; 
        } 
        return ans;
} 
public:
    vector<int> largestDivisibleSubset(vector<int>& nums) {
        if(nums.size() == 0)return nums;
        return findLargest(nums,nums.size());
    }
};