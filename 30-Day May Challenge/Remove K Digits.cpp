class Solution {
public:
    string removeKdigits(string num, int k) {
        stack<char> s;
        string ans = "";
        for(char c : num)
        {
           while(!s.empty() && k > 0 && s.top() > c)
           {
               s.pop();k--;
           }
           if(!s.empty() || c != '0')
           {
               s.push(c);
           }
        }
        while(!s.empty() && k > 0)
        {
            s.pop();k--;
        }
        while(!s.empty())
        {
            ans += s.top();
            s.pop();
        }
        reverse(ans.begin(),ans.end());
        if(ans == "") return "0";
        return ans;
    }
};