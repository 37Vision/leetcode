class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len = nums.size();
        int NumOfZero = 0;
        for(int i = 0;i<len;i++)
        {
            if(nums[i] != 0)
                nums[NumOfZero++] = nums[i]; 
        }
        for(int i = NumOfZero ; i < len ;i++)
            nums[i] = 0;
    }
};