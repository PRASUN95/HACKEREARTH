class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        int l1 = s1.length(),l2 = s2.length();
        if(l1 > l2) return false;
        if(l1 == 0 && l2 == 0)return false;
        else if(l1 == 0 && l2 > 0) return true;
        else if(l2 == 0 && l1 > 0) return false;
        vector<int> h1(26,0);
        vector<int> h2(26,0);
        int left = 0,right = 0;
        while(right < l1)
        {
            h1[s1[right] - 'a']++;
            h2[s2[right++] - 'a']++;
        }
        right-=1;
        while(right < l2)
        {
            if(h1 == h2)
                return true;
            right++;
            if(right != l2)
            h2[s2[right] - 'a']++;
            h2[s2[left] - 'a']--;
            left++;
        }
        return false;
    }
};