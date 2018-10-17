class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n <= 0)
            return false;
        double t = log10(n)/log10(3); 	//换底公式
        if(t - (int)t == 0)
            return true;
        else
            return false;
    }
};