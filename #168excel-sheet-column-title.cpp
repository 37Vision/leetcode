char* convertToTitle(int n) {
    if(n == 0)
        return NULL;
    int yushu = 0,num = 0; 
    char* result = (char*)malloc(sizeof(char)*10000);
	//按照权26展开观察规律
    while(n != 0)
    {
        result[num++] = (n-1)%26 + 'A';
        n = (n-1)/26;
    }
    converse(result,num);
    return result;
}
//反转数组
void converse(char *str,int n)
{
    int low = 0,high = n -1;
    char temp;
    while(low < high)
    {
        temp = str[high];
        str[high] = str[low];
        str[low] = temp;
        low++;
        high--;
    }
}