int strStr(char* haystack, char* needle) {
    if(needle[0] == '\0')
        return 0;
    int h = 0; //��������haystack�Ŀ����� 
    while(haystack[h] != '\0')
    {
        int loc = h;
        int n = 0;
        //��ͷ��ʼƥ�䵽�Ӵ�β 
        while(needle[n] != NULL)
        {
            if(needle[n] == haystack[h])
            {
                n++;
                h++;
            }
            else
                break;
        }
        //�ж��Ƿ�ƥ�䵽�ִ�β 
        if(needle[n] == '\0')
            return loc;
        h = loc + 1;
    }
    return -1;
}
