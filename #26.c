int removeDuplicates(int* nums, int numsSize) {
    int n = 0; //���ص�����
    //�ж��Ƿ�Ϊ��
    if(numsSize == 0)
        return 0;
    int i = 1;//ѭ��������
    for(;i<numsSize;i++)
    {
        if(nums[i]>nums[n])
        {
            nums[++n] = nums[i];
        }
    }
    return n+1;
}
