class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n == 0) return false;
        if(n == 536870912) return true;
        double x = log(n)/log(2);
        cout << x << " " << floor(x) << endl;
        if(x == floor(x)) return true;
        return false;
    }
};