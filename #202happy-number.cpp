bool isHappy(int n) {
    int result = 0;
    for(int i = 0;i<100;i++)
    {
        while(n)
        {
            result += (n%10) * (n%10);
            n /= 10;
        }
        if(result == 1)
            return true;
        else if(result == 4)	//凡是非快乐数都会进入4的这个循环中
            break;
        else
        {
            n = result;
            result = 0;
        }
    }
    return false;
}