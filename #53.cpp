#include <stdio.h>
int maxSubArray(int* nums, int numsSize) {
    
    int maxSum = nums[0];
    int sum = maxSum;
    for(int i = 1; i < numsSize; i++){
        
        sum += nums[i];
        if (sum > maxSum) {
            maxSum = sum;
        }
        
        if (sum < nums[i]) {
            sum = nums[i];
        }
        if(nums[i] > maxSum)
        {
            maxSum = nums[i];
            sum = nums[i];
        }
    }
           return maxSum;
}
int main()
{
	int a[9]={-2,1,-3,4,-1,2,1,-5,4};
	printf("%d",maxSubArray(a,9));
}

