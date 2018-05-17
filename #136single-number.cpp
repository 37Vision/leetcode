int singleNumber(int* nums, int numsSize) {
    int result = 0;
    for(int i = 0;i<numsSize;i++)
        result ^= nums[i]; //异或运算
    return result;
}