int removeElement(int* nums, int numsSize, int val) {
    if(numsSize > 0)
    {
        int n = numsSize;
        //先算出需要返回的值 
        for(int i=0;i<n;i++)
            if(nums[i] == val)
                numsSize--;
        //遍历数组把numsSize中遇到的val交换到后面，时间复杂度O(n^2) 
        for(int i=0;i<numsSize;i++)
            if(nums[i] == val)
            {
                int temp;
                for(int start = i+1;start < n ;start++)
                    if(nums[start] != val)
                    {
                        temp = nums[start];
                        nums[start] = nums[i];
                        nums[i] = temp;
                        break;
                    }
            }
    }
    return numsSize;
}
