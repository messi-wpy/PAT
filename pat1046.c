#include <stdio.h>
#include <stdlib.h>

int main()
{
    int first=0,second=0;
    int n,i;
    int a1,a2,b1,b2;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d %d %d %d",&a1,&a2,&b1,&b2);
        if(a2==a1+b1&&a2!=b2)
            second++;
        if(b2==a1+b1&&a2!=b2)
            first++;
    }
    printf("%d %d\n",first,second);
    return 0;
}
