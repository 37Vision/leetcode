/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* plusOne(int* digits, int digitsSize, int* returnSize) {
    int* result;
    int carry = 0;  //是否进位标志
    
    //判断各位的进位
    digits[digitsSize-1] += 1;
    for(int i=digitsSize-1;i>0;i--)
    {
        if(digits[i] == 10)
        {
            digits[i-1]++;
            digits[i] = 0;
        }
    }
    if(digits[0] == 10)
    {
        carry = 1;
        digits[0] = 1;
        for(int i = 1;i<=digitsSize;i++)
            digits[i] = 0;
    }
    *returnSize = carry+digitsSize;
    result = (int*)malloc((*returnSize)*sizeof(int));
    result = digits;
    return result;
}
