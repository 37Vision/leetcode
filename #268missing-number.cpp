class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int len = nums.size();
        int sum = (len + 1)*len/2;
        int s = 0;
        for(int i = 0;i<len;i++)
            s += nums[i];
        return sum - s;
    }
};