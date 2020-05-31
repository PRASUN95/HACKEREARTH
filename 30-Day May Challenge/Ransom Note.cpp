class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        unordered_map<char,int> ra;
        unordered_map<char,int> ma;
        for(char c : magazine)
        {
            ma[c]++;
        }
        for(char c : ransomNote)
        {
            ra[c]++;
        }
        for(char c : ransomNote)
        {
            if(ma[c] < ra[c])
            {
                return false;
            }
        }
        return true;
    }
};	