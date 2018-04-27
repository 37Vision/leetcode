int removeElement(int* nums, int numsSize, int val) {
    if(numsSize > 0)
    {
        int n = numsSize;
        //�������Ҫ���ص�ֵ 
        for(int i=0;i<n;i++)
            if(nums[i] == val)
                numsSize--;
        //���������numsSize��������val���������棬ʱ�临�Ӷ�O(n^2) 
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
