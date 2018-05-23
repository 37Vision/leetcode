int rob(int* nums, int numsSize) {
    int result = 0;
    int two_before = 0,one_before = 0;
	//状态转移方程 result(n) = max( result(n-1) ,result(n-2)+num[n])
    for(int i = 0;i<numsSize;i++)
    {
        result = two_before + nums[i] > one_before?two_before + nums[i]:one_before;
        two_before = one_before;
        one_before = result;
    }
    return result;
}