#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char A[100],B[100],result[100];
    char str[] = "0123456789JQK";
    int len1,len2,i,maxlen,a,b,flag=1;
    scanf("%s %s",A,B);
    len1=strlen(A)-1;
    len2=strlen(B)-1;
    maxlen=len1>=len2?len1:len2;
    for(i=maxlen;i>=0;i--)
    {
        a=len1>=0?(A[len1]-'0'):0;
        b=len2>=0?(B[len2]-'0'):0;
        if(flag%2)
            result[i]=str[(a+b)%13];

        else
            result[i]='0'+(b-a>=0?b-a:b-a+10);

        len1--,len2--,flag++;
    }
    for(i=0;i<flag;i++)
        printf("%c",result[i]);
    printf("\n");
    return 0;
}
