class Solution {
    int countOne(int i)
    {
        int cnt =0;
        while(i > 0)
        {
            if(i%2 == 1) cnt++;
            i/=2;
        }
        return cnt;
    }
public:
    vector<int> countBits(int num) {
        vector<int> ans(num+1,0);
        for(int i=1;i<=num;i++)
        {
            ans[i] = ans[i & (i-1)] + 1;
        }
        return ans;
    }
};