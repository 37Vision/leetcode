//Moore's voting最大投票算法
int majorityElement(int* nums, int numsSize) { 
    int count = 0,result = 0;
    for(int i = 0;i<numsSize;i++)
    {
       if(count == 0) 
       {
           result = nums[i];
           count++;
       }
        else if(nums[i] == result)
            count++;
        else
            count--;
    }
    return result;
}
