int removeDuplicates(int* nums, int numsSize) {
    int n = 0; //返回的数量
    //判断是否为空
    if(numsSize == 0)
        return 0;
    int i = 1;//循环控制量
    for(;i<numsSize;i++)
    {
        if(nums[i]>nums[n])
        {
            nums[++n] = nums[i];
        }
    }
    return n+1;
}
