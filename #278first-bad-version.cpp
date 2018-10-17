// Forward declaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int l = 1,r = n;
        int res;
        while(l <= r)
        {
            int mid = (r - l)/2 + l;
            if(isBadVersion(mid))
            {
                r = mid - 1;
                res = mid;
            }
            else
            {
                l = mid + 1;
            }
        }
        return res;
    }
};