char* longestCommonPrefix(char** strs, int strsSize) {
    char *s = (char *)malloc(1000000);       //�����һ��ָ��
    int i = 0;
   if(strsSize == 0)
		return "";
    while(1)
    {
        char temp = strs[0][i];
        //�ж��Ƿ��ַ���β
        for(int j=0;j<=strsSize-1;j++)
        {
            if(strs[j][i] == '\0')
            {
                s[i]='\0';
                return s;
            }
        }
      //�ж�ǰ׺
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

