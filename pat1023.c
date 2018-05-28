#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a [10]={0};
    int i=0,j=0;
    while(i<=9){
        scanf("%d",&a[i]);
        i++;
    }
    if(a[1]!=0){
        printf("1");
        a[1]-=1;
    }
    for(i=0;i<10;i++){
        if(a[i]!=0){
            for(j=0;j<a[i];j++){
                printf("%d",i);
            }
        }
    }
    printf("\n");
    return 0;
}
