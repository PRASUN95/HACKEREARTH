public class Solution {
    public int CountSubstrings(string s) {
        int length = s.Length;
        bool[,] dp = new bool[length, length];
        int end = 0 ,count = 0;
        for(int i=0;i<length;i++){
            dp[i,i] = true;
            count++;
        }
        for(int i=0;i<length-1;i++){
            if(s[i] == s[i+1])
                {  
                    dp[i,i+1] = true;
                    count++;
                }
        }
        for(int i=3; i<=length;i++){
            for(int beg = 0;beg<length - i + 1;beg++){
                end = beg + i - 1;
                if(dp[beg + 1, end - 1] && s[beg] == s[end])
                {
                    dp[beg, end] = true;
                    count++;
                }
            }
        }
        return count;
    }
}