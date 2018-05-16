bool isPalindrome(char* s) {
    int last,start = 0;
    for(last = 0;s[last] != '\0';last++);
    last--;
    while(start < last)
    {
		//判断是否是字母或者数字
        if(s[start] >= '0' && s[start] <= '9');
        else if(s[start] >= 'a' && s[start] <= 'z');
        else if(s[start] >= 'A' && s[start] <= 'Z');
        else
        {
            start++;
            continue;
        }
		//判断是否是字母或者数字
        if(s[last] >= '0' && s[last] <= '9');
        else if(s[last] >= 'a' && s[last] <= 'z');
        else if(s[last] >= 'A' && s[last] <= 'Z');
        else
        {
            last--;
            continue;
        }
		//两者相等
        if(s[start] == s[last])
        {
            start++;
            last--;
        }
		//两者都是字母并且是大小写关系
        else if((s[last] < '0' || s[last] > '9') && (s[start] < '0' || s[start] > '9'))
        {
		   if(abs(s[last] - s[start]) == 32)
            {
                start++;
                last--;
            }
            else
            return false;
        }
        else
            return false;
    }
    return true;
}