int titleToNumber(char* s) {
    int result = 0;
    for(int i = 0;s[i]!='\0';i++)
    {
        result *= 26;
        result += (s[i] - 'A' + 1);
    }
    return result;
}