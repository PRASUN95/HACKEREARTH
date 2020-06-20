class Solution {
    bool Solve(string str1, string str2, int m, int n) 
{ 
    // Base Cases 
    if (m == 0) return true; 
    if (n == 0) return false; 
  
    // If last characters of two strings are matching 
    if (str1[m-1] == str2[n-1]) 
        return Solve(str1, str2, m-1, n-1); 
  
    // If last characters are not matching 
    return Solve(str1, str2, m, n-1); 
} 
public:
    bool isSubsequence(string s, string t) {
        return Solve(s,t,s.size(),t.size());
    }
};