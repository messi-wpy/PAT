#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char s[1000];
    int i=0;
    int num[10]={0};
    scanf("%s",&s);
    for(i;i<strlen(s);i++){
        num[s[i]-'0']++;
    }
    for(i=0;i<10;i++){
        if(num[i]!=0)
        printf("%d:%d\n",i,num[i]);
    }

    return 0;
}
