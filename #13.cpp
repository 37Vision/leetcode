#include <stdio.h>
#include <string.h>
int romanToInt(char* s) {
    int len = strlen(s) - 1;   //字符串的长度 
    char now;
    int result = 0;
    int tempn = 0;				//当前字符对应的值 
    int tempf = 0;				//上一个字符对应的值 
    for(;len>=0;len--)			//倒序遍历 
    {
    	tempf = tempn;
        now = *(s+len);
        switch(now)
        {
            case 'I':
                tempn = 1;
                break;                
            case 'V':
                tempn = 5;
                break;
            case 'X':
                tempn = 10;
                break;
            case 'L':
                tempn = 50;
                break;
            case 'C':
                tempn = 100;
                break;
            case 'D':
                tempn = 500;
                break;
            case 'M':
                tempn = 1000;
                break;
        }
        if(tempn<tempf)			//如果当前的值比上一个值小则减去当前值 
            result -= tempn;
        else					//如果当前的值比上一个值大或者相等则加上当前值
            result += tempn;
    }
    return result;
}
int main()
{
	printf("%d",romanToInt("MCMXCIV"));
}
