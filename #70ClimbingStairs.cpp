int climbStairs(int n) {
    int result[50];
    result[2] = 2;
    result[1] = 1;
    for(int i = 3;i<=n;i++)
    {
        result[i] = result[i-1] + result[i-2];  //状态转移方程
    }
    return result[n];
}
