#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10000]={0},n,i,j;
    scanf("%d",&n);
    for(int x=0;x<n;x++){
        scanf("%d %d",&i,&j);
        a[i]+=j;
    }
    j=0;
    for(i=1;i<n;i++){
        if(a[j]<a[i])
            j=i;
    }
    printf("%d %d\n",j,a[j]);
    return 0;
}
