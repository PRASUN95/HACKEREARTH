public class Solution {
    public string LongestPalindrome(string s) {
        int length = s.Length;
        bool[,] dp = new bool[length, length];
        for(int i=0;i<length;i++){
            dp[i,i] = true;
        }
        int sInd = 0, eInd = 0, end = 0;
        for(int i=0;i<length-1;i++){
            if(s[i] == s[i+1])
                {  
                    dp[i,i+1] = true;
                    sInd = i; eInd = i+1;
                }
        }
        for(int i=3; i<=length;i++){
            for(int beg = 0;beg<length - i + 1;beg++){
                end = beg + i - 1;
                if(dp[beg + 1, end - 1] && s[beg] == s[end])
                {
                    sInd = beg;
                    eInd = end;
                    dp[beg, end] = true;
                }
            }
        }
        // for(int i=0;i<length;i++){
        //     for(int j = 0;j<length;j++){
        //         Console.Write($"{dp[i,j]} ");
        //     }
        //     Console.WriteLine();
        // }
        return s.Substring(sInd, eInd - sInd + 1);
    }
}