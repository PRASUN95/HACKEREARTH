class Solution {
    
public:
    vector<int> findAnagrams(string s, string p) {
        ios_base::sync_with_stdio(false);
        cin.tie(NULL);
        
        vector<int> answer;
        vector<int> hash(26,0);
        vector<int> ph(26,0);
        int window = p.size();
        int len = s.size();
        if(len<window)
            return answer;
        int left = 0,right = 0;
        while(right<window)
        {
            ph[p[right]-'a'] +=1;
            hash[s[right++]-'a'] +=1;
        }
        right -=1;
        while(right<len)
        {
            if(ph == hash)
                answer.push_back(left);
            right+=1;
            if(right!=len)
                hash[s[right]-'a'] +=1;
            hash[s[left]-'a'] -=1;
            left+=1;
        }
        return answer;
    }
};