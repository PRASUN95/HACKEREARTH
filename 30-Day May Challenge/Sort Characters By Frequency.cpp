class Solution {
   public:
     bool compare(const pair<int, char>&i, const pair<int, char>&j)
    {
        return i.first < j.first;
    }
    string frequencySort(string s) {
        int a[256];
        vector<pair<int,int>> freq;
        memset(a,0,sizeof(a));
        for(char c : s)
        {
            a[c]++;
        }
        for(int i=0;i<256;i++)
        {
            if(a[i] > 0)
            {
                freq.push_back({a[i],i});
            }
        }
        sort(freq.begin(),freq.end());
        int cnt = 0;
        string ans = "";
        for(int i = freq.size()-1; i>=0 ;i--)
        {
            cnt = freq[i].first;
            while(cnt--)
            {
                ans += (char)freq[i].second;
            }
        }
        
        return ans;
    }
};