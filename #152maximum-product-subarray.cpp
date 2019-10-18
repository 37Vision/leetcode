class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int len = nums.size();
        int Min = nums[0],Max = nums[0],res = nums[0];//Min,Max分别代表以当前值结尾的最小子序列值和最大子序列值
        for(int i = 1; i < len;i++)
        {
	//新加入值后，以新加入值结尾的最大值要么是最大值乘新加值，要么是最小值乘新加值，要么是新加值
            int t = Min;
            Min = min(min(Min * nums[i],Max * nums[i]),nums[i]);
            Max = max(max(t * nums[i],Max * nums[i]),nums[i]);
            if(Max > res)
                res = Max;
        }
        return res;
    }
};