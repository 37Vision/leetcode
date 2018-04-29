#include <stdio.h>
#include <string.h>
//�Լ�д��itoa���� 
void my_itoa(int num,char *str,int radix)
{
    int t = 0;
    while(num)
    {
        str[t++] = num%radix + '0';
        num = num/radix;
    }
    str[t] = '\0';
    t--;
    for(int i=0,s=0;i<t;i++,t--)
    {
        s = str[t];
        str[t] = str[i];
        str[i] = s;
    }
}

char* countAndSay(int n) {
    // char now[10000] = "1";
    // char next[10000];
    // char temp[10];
    char *now = malloc(10000);
    char *next = malloc(10000);
    char *temp = malloc(10);

    memset(now, '\0', sizeof(now));
    memset(next, '\0', sizeof(next));
    memset(temp, '\0', sizeof(temp));

    now[0] = '1';

    //Ѱ�ҵ�n��Ŀ����
    for(int i = 1;i < n;i++)
    {
        int m = 0;//������ǰ��
        int j = 0; //д����һ����
        int count = 1;//�ص��ĸ���
        while(now[m] != '\0')
        {
            //�����ǰ���ַ�����һ���ַ������
            if(now[m] != now[m+1])
            {
                my_itoa(count, temp, 10);
                for(int k = 0;temp[k]!='\0';k++)
                    next[j++] = temp[k];
                next[j++] = now[m];
                count = 1;
            }
            else
                count++;
            m++;
        }
        next[j] = '\0';
        strcpy(now,next);
    }

    return now;
}


int main()
{
	printf("%s",countAndSay(5));
}
