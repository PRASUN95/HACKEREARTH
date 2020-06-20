class Solution {
public:
    string getPermutation(int n, int k) {
        vector<int> fact(n,1);
        vector<int> digits(n,1);
        for(int i=1;i<n;i++)
        {
            fact[i] = i * fact[i-1];
            digits[i] = i + 1;
        }
        string res = "";
        while(res.length() < n - 1)
        {
            int rep = fact[fact.size() - 1];
            int nextDigit = (k-1)/rep;
            res += to_string(digits[nextDigit]);
            digits.erase(digits.begin() + nextDigit);
            fact.pop_back();
            k = k % rep;
            if(k == 0)
            {
                for(int i = digits.size() - 1; i >= 0; --i)
                {
                    res += to_string(digits[i]);
                }
            }
        }
        if(res.size() < n)
        {
             res += to_string(digits[0]);
        }
        return res;
    }
};