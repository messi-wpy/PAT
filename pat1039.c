#include <stdio.h>
#include <stdlib.h>

int main()
{
    int record [128]={0};
    int flag=1,less=0,n1=0,n2=0;
    char c;
    while((c=getchar())!='\n')
    {
        record[(int)c]+=1;
        n1++;
    }
    while((c=getchar())!='\n')
    {
        n2++;
        record[(int)c]-=1;
        if(record[(int)c]<0)
        {
            flag=0;
            less++;
        }
    }
    if(flag)
        printf("Yes %d\n",n1-n2);
    else
        printf("No %d\n",less);


    return 0;
}
