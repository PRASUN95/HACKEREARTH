class Solution {
public:
    int numJewelsInStones(string J, string S) {
      unordered_map<char,int> mp;
      int ans = 0;
        for(char c : J)
        {
            mp[c]++;
        }
        for(char s : S)
        {
            if(mp.find(s) != mp.end())
                ans++;
        }
        return ans;
    }
};