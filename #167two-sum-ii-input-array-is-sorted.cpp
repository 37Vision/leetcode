/**
 * Return an array of size *returnSize.
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* twoSum(int* numbers, int numbersSize, int target, int* returnSize) {
	int index1 = 0,index2 = numbersSize - 1;
	int* result = (int*)malloc(sizeof(int)*2);
	*returnSize = 2;
	//从两头向中间搜索
    while(index1<index2)
    {
		if(numbers[index1] + numbers[index2] == target)
            break;
        else if(numbers[index1] + numbers[index2] >target)
			index2--;
        else
            index1++;
    }   
    result[0] = index1 + 1;
    result[1] = index2 + 1;
    return result;
}   