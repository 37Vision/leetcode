int strStr(char* haystack, char* needle) {
    if(needle[0] == '\0')
        return 0;
    int h = 0; //遍历数组haystack的控制量 
    while(haystack[h] != '\0')
    {
        int loc = h;
        int n = 0;
        //从头开始匹配到子串尾 
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
        //判断是否匹配到字串尾 
        if(needle[n] == '\0')
            return loc;
        h = loc + 1;
    }
    return -1;
}
