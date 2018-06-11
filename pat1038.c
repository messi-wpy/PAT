#include <stdio.h>
#include <stdlib.h>

int main()
{
    int grade[100]={0},n,x,i, index;
    int *p;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&index);
        grade[index]+=1;
    }
    scanf("%d",&x);
    p=(int*)malloc(x*sizeof(int));
    for(i=0;i<x;i++)
    {
        scanf("%d",p+i);
    }
    for(i=0;i<x;i++)
    {
        printf("%d",grade[*(p+i)]);
        if(i!=x-1)
            printf(" ");
    }
    printf("\n");
}
