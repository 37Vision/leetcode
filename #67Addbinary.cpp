#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char* addBinary(char* a, char* b) {
    char *result;
    result = (char*)malloc(sizeof(char)*10000);
    int carry = 0;	//进位标志0表示没进位1表示有进位 
    int lena,lenb;
    lena = strlen(a) - 1;  //数组长度减一便于表示下标 
    lenb = strlen(b) - 1;
    //如果数组a长 
    if(lena > lenb)
    {
        while(lenb>=0)
        {
            a[lena] = b[lenb--] + a[lena] - '0' + carry;
            if(a[lena] >= '2')
            {
                a[lena] -= 2;
                carry = 1;
            }
            else
            	carry = 0;
            lena--;
        }
		while(lena>=0)
        {
            a[lena] += carry;
            if(a[lena] >= '2')
            {
                a[lena] -= 2;
                carry = 1;
            }
            else
            	carry = 0;
            lena--;
        }
        if(carry == 1)
        {
            result[0] = '1';
            int i;
            for(i = 0;a[i]!='\0';i++)
                result[i+1] = a[i];
            result[i+1] = '\0';
            return result;
        }
        else
            return a;
    } 
    else
    {
        while(lena>=0)
        {
            b[lenb] = a[lena--] + b[lenb] - '0' + carry ;
            if(b[lenb] >= '2')
            {
                b[lenb] -= 2;
                carry = 1;
            }
            else
            	carry = 0;
            lenb--;
        }
        while(lenb>=0)
        {
            b[lenb] += carry;
            if(b[lenb] >= '2')
            {
                b[lenb] -= 2;
                carry = 1;
            }
            else
            	carry = 0;
            lenb--;
        }
        if(carry == 1)
        {
            result[0] = '1';
            int i;
            for(i = 0;b[i]!='\0';i++)
                result[i+1] = b[i];
            result[i+1] = '\0';
            return result;
        }
        else
            return b;
    } 
}
int main()
{
	char a[100] = "11";
	char b[100] = "1";
	printf("%s",addBinary(a,b));
}
