void rotate(int* nums, int numsSize, int k) {
    int step = k%numsSize;
	//新申请一片空间储存移动的数据
    int* temp = (int*)malloc(sizeof(int)*step);
    for(int i = numsSize-step,j = 0;j<step;i++,j++)
        temp[j] = nums[i];
    for(int i = numsSize - step -1;i>=0;i--)
        nums[i+step] = nums[i];
    for(int i = 0;i<step;i++)
        nums[i] = temp[i];
}