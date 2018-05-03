void merge(int* nums1, int m, int* nums2, int n) {
	int a = 0,b = 0;
	while(a < m && b < n)
	{
		//插入时后面的元素全部向后移动一位 
		if(nums2[b] < nums1[a])
		{
			for(int i = m-1;i>=a;i--)
				nums1[i+1] = nums1[i];
			nums1[a++] = nums2[b++];
			m++;
		}
		else
			a++;
	}
	if(a == m)
		while(b<n)
			nums1[a++] = nums2[b++];
}