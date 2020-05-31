class Solution {
public:
    int maxSubarraySumCircular(vector<int>& A) {
        int ans = 0,max_curr = 0,max_so_far = INT_MIN,arr_sum = 0;
         for(int a : A)
        {
            max_curr += a;
            max_so_far = max(max_curr,max_so_far);
            max_curr = max(max_curr,0);
        }
        ans = max_so_far;
        if(ans < 0) return ans;
        max_curr = 0,max_so_far = INT_MIN;
        for(int i=0;i<A.size();i++)
        {
             A[i] = 0 - A[i];
             arr_sum += A[i];
        }
         for(int a : A)
        {
            max_curr += a;
            max_so_far = max(max_curr,max_so_far);
            max_curr = max(max_curr,0);
        }
        max_so_far = -(arr_sum - max_so_far);
        return max(max_so_far,ans);
    }
};