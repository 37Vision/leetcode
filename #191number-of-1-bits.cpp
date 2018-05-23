int hammingWeight(uint32_t n) {
    int result = 0;
    while(n)
    {
        n = n &(n-1);	//利用 (n-1)&n求1个个数
        result++;
    }
    return result;
}