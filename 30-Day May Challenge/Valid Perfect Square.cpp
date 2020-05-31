class Solution {
public:
    bool isPerfectSquare(int num) {
        long long int p;
        long long int low = 1,high = num/2+1,mid;
        while(low <= high)
        {
            mid = low + (high - low)/2;
            p = mid * mid;
            if(p == num) 
                return true;
            else if(p > num) high = mid - 1; 
            else if(p < num) low = mid + 1;
        }
        return false;
    }
};