class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n <= 0)
            return false;
		//如果n的补码里只有一个1则说明是2的幂
        if((n&(n-1)) == 0)
            return true;
        else
            return false;
    }
};