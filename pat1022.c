#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a=0,b=0,c=0,i=0;
    int sum;
    int result[100];
    scanf("%d%d%d",&a,&b,&c);
    sum=a+b;
    while(sum!=0){
        result[i]=sum%c;
        i++;
        sum=sum/c;
    }
    for(i=i-1;i>=0;i--){
        printf("%d",result[i]);
    }
    printf("\n");
    return 0;
}
