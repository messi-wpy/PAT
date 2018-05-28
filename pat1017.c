#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char input[1000];
    int a,b,n,i;
    char result [1000];
    a=b=i=0;
    scanf("%s%d",input,&a);
    while(i<strlen(input))
        {
            n=(b*10+input[i]-'0')/a;
            b=(b*10+input[i]-'0')%a;
             result[i]=n+'0';
            i++;

        }
        if(result[0]=='0'&&result[1]!='0')
            {
            printf("%s",&result[1]);
            }
        else
            printf("%s",result);
        printf(" %d",b);
    return 0;
}
