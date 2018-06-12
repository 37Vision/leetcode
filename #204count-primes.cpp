int countPrimes(int n) {
    if(n<=1)
        return 0;
    int count = 0;
    int* flag = (int*)malloc(sizeof(int)*n);
    for(int i = 0;i<n;i++)
        flag[i] = 0;
    for(int i = 2;i<n;i++)
    {
        if(flag[i] == 0)
        {
            count++;
            int num = 2;	//步长
            while(num * i <n)
            {
                flag[num*i] = 1;
                num++;
            }
        }
    }
     return count;
}