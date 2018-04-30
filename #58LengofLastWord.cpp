int lengthOfLastWord(char* s) {
    int len = strlen(s);
    int count = 0;
    int i = len - 1;
    //寻找最后一个单词的起点
    for(;i >= 0;i--)
    {
        if(s[i] != ' ')
            break;
    }
    for(;s[i] != ' ' && i>=0;i--)
        count++;
    return count;
}
