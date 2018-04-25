char* longestCommonPrefix(char** strs, int strsSize) {
    char *s = (char *)malloc(1000000);       //定义的一个指针
    int i = 0;
   if(strsSize == 0)
		return "";
    while(1)
    {
        char temp = strs[0][i];
        //判断是否到字符串尾
        for(int j=0;j<=strsSize-1;j++)
        {
            if(strs[j][i] == '\0')
            {
                s[i]='\0';
                return s;
            }
        }
      //判断前缀
        for(int j=1;j<=strsSize-1;j++)
        {
            if(strs[j][i] != temp)
            {
                s[i]='\0';
                return s;
            }
        }
        s[i] = temp;
        i++;
    }
}

