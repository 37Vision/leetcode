#include <stdio.h>
#include <string.h>
int romanToInt(char* s) {
    int len = strlen(s) - 1;   //�ַ����ĳ��� 
    char now;
    int result = 0;
    int tempn = 0;				//��ǰ�ַ���Ӧ��ֵ 
    int tempf = 0;				//��һ���ַ���Ӧ��ֵ 
    for(;len>=0;len--)			//������� 
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
        if(tempn<tempf)			//�����ǰ��ֵ����һ��ֵС���ȥ��ǰֵ 
            result -= tempn;
        else					//�����ǰ��ֵ����һ��ֵ������������ϵ�ǰֵ
            result += tempn;
    }
    return result;
}
int main()
{
	printf("%d",romanToInt("MCMXCIV"));
}
