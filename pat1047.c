#include <stdio.h>
#include <stdlib.h>
int toNum(char *p)
{
    int i=0,k=0,num=0;
    while(*(p+i)!='-')
    {
        k=p[i]-'0';
        num=num*10+k;
        i++;
    }
    return num;
}
int main()
{
    char name [10];
    int team[1000]={0},index[1000]={0};
    int n;
    int i,k;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        fflush(stdin);
        scanf("%s",name);
        scanf("%d",&k);
        index[i]=toNum(name);
        team[index[i]]+=k;
    }
    i=0;
    k=index[i];
    while(index[i]!=0)
    {
        if(team[index[i]]>=team[k])
            k=index[i];
            i++;
    }
    printf("%d %d\n",k,team[k]);
    return 0;
}
